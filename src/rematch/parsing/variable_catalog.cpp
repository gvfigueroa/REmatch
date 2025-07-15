#include "parsing/variable_catalog.hpp"
#include "exceptions/multi_spanners_not_allowed_exception.hpp"
#include "exceptions/single_variable_opened_multiple_times_exception.hpp"
#include "exceptions/single_variable_closed_multiple_times_exception.hpp"
#include "exceptions/single_variable_closed_without_opening_exception.hpp"
#include "exceptions/single_variable_opened_without_closing_exception.hpp"
#include "exceptions/unbalanced_nested_variables_exception.hpp"
#include "exceptions/empty_word_capture_exception.hpp"


namespace rematch {
inline namespace parsing {

VariableCatalog::VariableCatalog() {}

std::string VariableCatalog::get_var(uint32_t position) {
  return variables_.at(position);
}

int VariableCatalog::position(std::string var) const {
  auto it = std::lower_bound(variables_.begin(), variables_.end(), var);

  if (it != variables_.end() && var >= *it) {
    return it - variables_.begin();
  }

  throw REMatch::VariableNotFoundInCatalogException(var);
}

void VariableCatalog::add(std::string var) {
  if (size() >= MAX_VARS)
    return;

  auto it = std::lower_bound(variables_.begin(), variables_.end(), var);

  if (it == variables_.end() || var < *it) {
    variables_.insert(it, var);
    // Add offsetMap new entries, defaults to zero.
    offsetMap.push_back(0);
    offsetMap.push_back(0);
  }
}

void VariableCatalog::add_single(std::string var, bool is_left) {
  // if ((size() >= MAX_VARS)
  //   return;)
  if (is_left){
    auto it = std::find(left_variables_.begin(), left_variables_.end(), var);
    if (it != left_variables_.end() || this->contains(var)) {
			throw REMatch::VariableOpenedMultipleTimesException(var);
    }
		left_variables_.insert(left_variables_.end(), var);
  } else {
    auto it = std::find(right_variables_.begin(), right_variables_.end(), var);
    if (it != right_variables_.end()) {
			throw REMatch::VariableClosedMultipleTimesException(var);
    }
		right_variables_.insert(right_variables_.end(), var);
  }
}

void VariableCatalog::set_nested(std::string var, uint_fast32_t left, uint_fast32_t right) {
  variable_balance_[var] = std::make_pair(left, right);
}

std::pair<uint_fast32_t, uint_fast32_t> VariableCatalog::get_nested(std::string var) {
  return variable_balance_[var];
}

void VariableCatalog::quantity_nested(uint32_t value) {
  for (auto& kv : variable_balance_) {
    uint32_t i = kv.second.second;
    uint32_t j = kv.second.first;
    if (i > j){
      variable_balance_[kv.first] = std::make_pair(i + (i + j) * (value - 1), j);
    }
    else if (j < i){
      variable_balance_[kv.first] = std::make_pair(i, j + (j - 1) * (value - 1));
    }
  }
}

// void VariableCatalog::check_left_side() {
// 	for (auto &var: right_variables_) {
//     auto it = std::find(left_variables_.begin(), left_variables_.end(), var);
// 		if (it == left_variables_.end()) {
//       throw REMatch::VariableClosedWithoutOpeningException(var);;
//     }
// 	}
// }

void VariableCatalog::check_edges() {
	if (!left_variables_.empty()){
    throw REMatch::VariableOpenedWithoutClosingException();
  } else if (!right_variables_.empty()){
    std::string var = right_variables_.front();
    throw REMatch::VariableClosedWithoutOpeningException(var);
  }
}

void VariableCatalog::check_nested() {
	for (auto& kv : variable_balance_) {
    if (kv.second != std::make_pair<uint_fast32_t, uint_fast32_t>(0, 0)){
      throw REMatch::UnbalancedNestedVariablesException();
    }
  }
}

std::bitset<64> VariableCatalog::open_code(std::string var) {
  std::bitset<64> bitstring;

  auto it = std::lower_bound(variables_.begin(), variables_.end(), var);

  if (it != variables_.end() && var >= *it) {
    bitstring.set((it - variables_.begin()) * 2);
  }

  return bitstring;
}

std::bitset<64> VariableCatalog::close_code(std::string var) {
  std::bitset<64> bitstring;

  auto it = std::lower_bound(variables_.begin(), variables_.end(), var);

  if (it != variables_.end() && var >= *it) {
    bitstring.set((it - variables_.begin()) * 2 + 1);
  }

  return bitstring;
}

std::string VariableCatalog ::print_varset(std::bitset<64> code) {
  std::stringstream ss;

  // Get a container just for printing output correctly with commas
  std::vector<std::string> container;

  for (size_t i = 0; i < 16; i++) {
    if (code[2 * i]) {
      ss << variables_[i];
      if (offsetMap[2 * i])
        ss << "(-" << offsetMap[2 * i] << ")";
      ss << "<";
      container.push_back(ss.str());
      ss.str(std::string());  // Erase the stringstream
    }
    if (code[2 * i + 1]) {
      ss << ">" << variables_[i];
      if (offsetMap[2 * i + 1])
        ss << "(-" << offsetMap[2 * i + 1] << ")";
      container.push_back(ss.str());
      ss.str(std::string());  // Erase the stringstream
    }
  }

  if (!container.empty()) {
    ss << container[0];
    for (size_t i = 1; i < container.size(); i++) {
      ss << "" << container[i];
    }
  }

  return ss.str();
}

std::string VariableCatalog::pprint() {
  std::stringstream ss;
  for (size_t i = 0; i < size(); i++) {
    ss << variables_[i] << " -> " << i << "\n";
  }

  return ss.str();
}

void VariableCatalog::merge(VariableCatalog& rhs) {
  for (auto& var : rhs.variables_) {
    auto it = std::lower_bound(variables_.begin(), variables_.end(), var);
    if (size() >= MAX_VARS) {
      throw REMatch::VariableLimitExceededException();
    }
    if (it == variables_.end()) {
      variables_.insert(it, var);
      offsetMap.push_back(0);
      offsetMap.push_back(0);
    } else if (*it != var) {
      variables_.insert(it, var);
    }
  }
  set_empty_word_value(empty_word() || rhs.empty_word());
}

void VariableCatalog::nested_expr(VariableCatalog& rhs){
  for (auto& kv : variable_balance_) {
    std::pair<uint_fast32_t, uint_fast32_t> rhs_kv;
    auto it = rhs.variable_balance_.find(kv.first);
    if (it != rhs.variable_balance_.end()) {
        rhs_kv = it->second;
    } else {
        rhs_kv = std::make_pair(0, 0);
    }
    uint_fast32_t i = kv.second.second;
    uint_fast32_t j = kv.second.first;
    uint_fast32_t i_2 = rhs_kv.second;
    uint_fast32_t j_2 = rhs_kv.first;
    if (j == i_2){
      variable_balance_[kv.first] = std::make_pair(j_2, i);
    }
    else if (j > i_2){
      variable_balance_[kv.first] = std::make_pair(j - i_2 + j_2, i);
    }
    else {
      variable_balance_[kv.first] = std::make_pair(j_2, i + i_2 - j);
    }
    if (!((kv.second.first == 0 || kv.second.first == 1) && (kv.second.second == 0 || kv.second.second == 1))) {
      throw REMatch::UnbalancedNestedVariablesException();
    }
  }

  for (const auto& kv : rhs.variable_balance_) {
    if (variable_balance_.find(kv.first) == variable_balance_.end()) {
      uint_fast32_t j_2 = kv.second.first;
      uint_fast32_t i_2 = kv.second.second;
      if (i_2 == 0){
        variable_balance_[kv.first] = std::make_pair(j_2, 0);
      }
      else {
        variable_balance_[kv.first] = std::make_pair(j_2, i_2);
      }

      if (!((j_2 == 0 || j_2 == 1) && (i_2 == 0 || i_2 == 1))) {
        throw REMatch::UnbalancedNestedVariablesException();
      }
    }
  }
  // Check left variables
	for (auto &var: rhs.left_variables_) {
		left_variables_.insert(left_variables_.end(), var);
	}

	// Check right variables
	for (auto var=rhs.right_variables_.begin(); var != rhs.right_variables_.end();) {
    auto it = std::find(left_variables_.begin(), left_variables_.end(), *var);
		if (it == left_variables_.end()) {
      right_variables_.insert(right_variables_.end(), *var);
      return;
    }

    auto it_var = std::lower_bound(variables_.begin(), variables_.end(), *var);
    if (it_var == variables_.end()) {
      variables_.insert(it_var, *var);
      offsetMap.push_back(0);
      offsetMap.push_back(0);
    }
    else if (*it_var != *var){
      variables_.insert(it_var, *var);
    }
		// Delete left variable if its closed
		left_variables_.erase(it);
    // continue to the next
		var = rhs.right_variables_.erase(var);
	}
}

void VariableCatalog::nested_alternation(VariableCatalog& rhs){
  for (auto& kv : variable_balance_) {
    std::pair<uint_fast32_t, uint_fast32_t> rhs_kv;
    auto it = rhs.variable_balance_.find(kv.first);
    if (it != rhs.variable_balance_.end()) {
        rhs_kv = it->second;
    } else {
        rhs_kv = std::make_pair(0, 0);
    }
    if (!(kv.second.first == rhs_kv.first && kv.second.second == rhs_kv.second)){
      throw REMatch::UnbalancedNestedVariablesException();
    }
  }
   for (const auto& kv : rhs.variable_balance_) {
    if (variable_balance_.find(kv.first) == variable_balance_.end()) {
      if (!(kv.second.first == 0 && kv.second.second == 0)){
        throw REMatch::UnbalancedNestedVariablesException();
      }
    }
  }
}

void VariableCatalog::merge_disjoint(VariableCatalog& rhs) {
  for (auto& var : rhs.variables_) {
    auto it = std::lower_bound(variables_.begin(), variables_.end(), var);
    if (size() >= MAX_VARS) {
      throw REMatch::VariableLimitExceededException();
    }
    if (it == variables_.end()) {
      variables_.insert(it, var);
      offsetMap.push_back(0);
      offsetMap.push_back(0);
    } else if (*it != var) {
      variables_.insert(it, var);
    } else {
      throw REMatch::MultiSpannersNotAllowedException();
    }
  }

  for (auto &var: left_variables_) {
    auto it = var_empty_word_.find(var);
    if (it != var_empty_word_.end()) {
      var_empty_word_[var] = var_empty_word_[var] && rhs.empty_word();
    }
    else {
      var_empty_word_[var] = rhs.empty_word();
    }
	}
  // Check left variables
	for (auto &var: rhs.left_variables_) {
    auto it = std::find(left_variables_.begin(), left_variables_.end(), var);
		if (it != left_variables_.end() || this->contains(var)) {
			throw REMatch::VariableOpenedMultipleTimesException(var);
    }
		left_variables_.insert(left_variables_.end(), var);
	}
	// Check right variables
	for (auto var=rhs.right_variables_.begin(); var != rhs.right_variables_.end();) {
    // auto it = std::find(right_variables_.begin(), right_variables_.end(), *var);
		if (this->contains(*var)) {
      throw REMatch::VariableClosedMultipleTimesException(*var);
    }
    if (var_empty_word_[*var]) {
      throw REMatch::EmptyWordCaptureException("Empty word capturing is not allowed.");
    }
    auto it = std::find(left_variables_.begin(), left_variables_.end(), *var);
		if (it == left_variables_.end()) {
      right_variables_.insert(right_variables_.end(), *var);
      return;
    }
		// If the single variable is balanced is added as a normal variable
		this->add(*var);
		// Delete left variable if its closed
		left_variables_.erase(it);
    // continue to the next
		var = rhs.right_variables_.erase(var);
	}
}

bool VariableCatalog::contains(std::string var) {
  return std::binary_search(variables_.begin(), variables_.end(), var);
}

bool VariableCatalog::empty() {
  return variables_.empty();
}

bool VariableCatalog::operator==(const VariableCatalog& vf) const {
  return variables_ == vf.variables_;
}

}  // namespace parsing
}  // namespace rematch

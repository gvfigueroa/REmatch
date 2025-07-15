#ifndef VARIABLE_FACTORIES_HPP
#define VARIABLE_FACTORIES_HPP

#include <algorithm>
#include <bitset>
#include <iostream>
#include <map>
#include <ostream>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#include "exceptions/variable_not_found_in_catalog_exception.hpp"
#include "exceptions/variable_limit_exceeded_exception.hpp"

namespace rematch {
inline namespace parsing {

const int MAX_VARS = 15;

// Manager of the parsed RGX formula variables where each variable name
// has a corresponding code.
class VariableCatalog {
 public:
	// Simple constructor
	VariableCatalog();

	size_t size() {return variables_.size();}

	size_t size_left() {return left_variables_.size();}

	size_t size_right() {return right_variables_.size();}

	std::string get_var(uint32_t position);

	std::vector<std::string> variables() {return variables_;}

	std::vector<std::string> left_variables() {return left_variables_;}

	std::vector<std::string> right_variables() {return right_variables_;}

	std::unordered_map<std::string, std::pair<uint_fast32_t, uint_fast32_t>> variable_balance() {return variable_balance_;}

	int position(std::string var) const;

	// Add a variable to the struct
	void add(std::string var);

	// Add a single variable to the struct
	void add_single(std::string var, bool is_left);

	// nested single variable
	void set_nested(std::string var, uint_fast32_t left, uint_fast32_t right);

	// void set_all_nested(uint_fast32_t left, uint_fast32_t right);

	std::pair<uint_fast32_t, uint_fast32_t> get_nested(std::string var);

	void quantity_nested(uint32_t value);

	// Checks left hand side single variables
	void check_left_side();

	// Checks paired variables after merge
	void check_edges();

	void check_nested();

	// Given a variable name outputs the corresponding opening bitset
	std::bitset<64> open_code(std::string var);

	// Given a variable name outputs the corresponding closing bitset
	std::bitset<64> close_code(std::string var);

	// Given a bitset outputs the corresponding opening and closing variables
	// as a std::string
	std::string print_varset(std::bitset<64> code);

	// Prints the hash table
	std::string pprint();

	// Merges the variables present in another VariableCatalog inplace
	void merge(VariableCatalog &rhs);

	void nested_alternation(VariableCatalog &rhs);

	void nested_expr(VariableCatalog& rhs);

	void merge_disjoint(VariableCatalog &rhs);

	// Checks if a variable name is present
	bool contains(std::string var);

	bool empty();

	// Equality operator overload
	bool operator==(const VariableCatalog &vf) const;

	int& get_offset(int index) {return offsetMap[index];}

	bool empty_word() {return empty_word_;}

	void set_empty_word_value(bool value) {
        empty_word_ = value;
    }

 private:
	// Ordered vector that stores the variables.
	std::vector<std::string> variables_;
	std::vector<std::string> left_variables_;
	std::vector<std::string> right_variables_;

	std::unordered_map<std::string, std::pair<uint_fast32_t, uint_fast32_t>> variable_balance_;

	std::unordered_map<std::string, bool> var_empty_word_;

	bool empty_word_ = true;

	// Offset capturing optimization. Maps each opening and closing
	// capture variable to its computed offset. Then it's a vector of size
	// numVars*2. The vector is such that:
	// 		- offsetMap[2*c]         is the opening (x<) offset.
	//    - offsetMap[2*c + 1] 		 is the closing (x>) offset.
	std::vector<int> offsetMap;
};

}
}

#endif

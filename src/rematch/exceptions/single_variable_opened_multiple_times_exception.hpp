#include "regex_syntax_exception.hpp"

namespace REMatch {

class VariableOpenedMultipleTimesException : public RegexSyntaxException {
 public:
  VariableOpenedMultipleTimesException(std::string variable_name)
      : RegexSyntaxException(
            "Variable opened multiple times: " + variable_name) {}
};
}  // namespace REMatch

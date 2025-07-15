#include "regex_syntax_exception.hpp"

namespace REMatch {

class VariableClosedMultipleTimesException : public RegexSyntaxException {
 public:
  VariableClosedMultipleTimesException(std::string variable_name)
      : RegexSyntaxException(
            "Variable closed multiple times: " + variable_name) {}
};
}  // namespace REMatch

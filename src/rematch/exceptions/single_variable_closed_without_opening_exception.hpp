#include "regex_syntax_exception.hpp"

namespace REMatch {

class VariableClosedWithoutOpeningException : public RegexSyntaxException {
 public:
  VariableClosedWithoutOpeningException(std::string variable_name)
      : RegexSyntaxException(
            "Single variable closed without openning: " + variable_name) {}
};
}  // namespace REMatch

#include "regex_syntax_exception.hpp"

namespace REMatch {
class UnbalancedVariablesException : public RegexSyntaxException {
 public:
  UnbalancedVariablesException()
      : RegexSyntaxException(
            "Unbalanced variables exception") {}
};
}  // namespace REMatch

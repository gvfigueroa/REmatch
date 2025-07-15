#include "regex_syntax_exception.hpp"

namespace REMatch {
class UnbalancedNestedVariablesException : public RegexSyntaxException {
 public:
  UnbalancedNestedVariablesException()
      : RegexSyntaxException(
            "Unbalanced nested variables exception") {}
};
}  // namespace REMatch

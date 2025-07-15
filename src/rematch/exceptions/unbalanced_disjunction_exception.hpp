#include "regex_syntax_exception.hpp"

namespace REMatch {

class UnbalancedDisjunctionException : public RegexSyntaxException {
 public:
  UnbalancedDisjunctionException()
      : RegexSyntaxException(
            "Unbalanced exception") {}
};
}  // namespace REMatch

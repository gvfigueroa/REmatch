#include "regex_syntax_exception.hpp"

namespace REMatch {

class VariableOpenedWithoutClosingException : public RegexSyntaxException {
 public:
  VariableOpenedWithoutClosingException()
      : RegexSyntaxException(
            "Single variable opened without closing: ") {}
};
}  // namespace REMatch

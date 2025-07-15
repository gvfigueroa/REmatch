#include <iostream>
#include <string>
#include "library_interface/rematch.hpp"
// #include "library_interface/multi_regex.hpp"
// #include "library_interface/regex.hpp"

int main() {
  std::string document = "+56 9 1234 5678";
  // std::string document = "ababa";
  std::string regex = "!!x{[+][0-9]+ !!y{[0-9]}x!! [0-9 ]*}y!![^0-9]";
  // std::string regex = "!x{a}!x{b}";
  // std::string regex = "!!x{a|b*}x!!"; // DUDA: válido?????
  // std::string regex = "!x{a}a";
  // std::string regex = "!x{!!y{a}}y!!";
  // std::string regex = "!!x{.+!!y{@}x!!.+}y!!";
  // std::string regex = "(!!x{)a}x!!";
  // std::string regex = "!!x{a(a|b)";
  // std::string regex = "}x!!{1,2}";
  // std::string regex = "!!x{!!y{a}x!!}y!!";
  std::vector<REMatch::Match> matches = REMatch::library_interface::findall(regex, document);
  std::cout << "Document: " << document << std::endl;
  std::cout << "Regex: " << regex << std::endl;
  for (REMatch::Match& match: matches) {
    std::cout << "Span x: [" << match.start("x") << ", " << match.end("x") << ">" << std::endl;
    std::cout << "Span y: [" << match.start("y") << ", " << match.end("y") << ">" << std::endl;
  }

  // std::string pattern = "!!x{a}x!!!!x{b}x!!";
  // std::string document = "ababa";
  // auto regex = REMatch::MultiRegex(pattern);
  // std::unique_ptr<REMatch::MultiMatch> match = regex.findone(document);
  return 0;
}
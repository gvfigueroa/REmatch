#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators.hpp>
#undef private
#include "library_interface/regex.hpp"
#include "library_interface/rematch.hpp"
#include "library_interface/multi_regex.hpp"
#include "library_interface/multi_match_iterator.hpp"

namespace rematch::testing {
using namespace REMatch::library_interface;

TEST_CASE("finditer method returns the iterator correctly for single variables") {
  std::string pattern = "!!x{!!y{a}x!!b}y!!";
  std::string document = "ababa";
  document += END_CHAR;
  auto regex = Regex(pattern);
  std::unique_ptr<MatchIterator> match_iterator = regex.finditer(document);

  std::unique_ptr<Match> match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(0, 1));
  REQUIRE(match->span("y") == Span(0, 2));

  match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(2, 3));
  REQUIRE(match->span("y") == Span(2, 4));

  match = match_iterator->next();
  REQUIRE(match == nullptr);
}

TEST_CASE("finditer method returns the iterator correctly for free variables") {
  std::string pattern = "!!x{!!y{a{2,}}x!!b}y!!";
  std::string document = "abaaba";
  document += END_CHAR;
  auto regex = Regex(pattern);
  std::unique_ptr<MatchIterator> match_iterator = regex.finditer(document);

  std::unique_ptr<Match> match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(2, 4));
  REQUIRE(match->span("y") == Span(2, 5));

  match = match_iterator->next();
  REQUIRE(match == nullptr);
}

TEST_CASE("finditer method returns the iterator correctly for free variables with +") {
  std::string pattern = "!!x{!!y{a}x!!b+}y!!";
  std::string document = "ababba";
  document += END_CHAR;
  auto regex = Regex(pattern);
  std::unique_ptr<MatchIterator> match_iterator = regex.finditer(document);

  std::unique_ptr<Match> match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(0, 1));
  REQUIRE(match->span("y") == Span(0, 2));

  match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(2, 3));
  REQUIRE(match->span("y") == Span(2, 4));

  match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(2, 3));
  REQUIRE(match->span("y") == Span(2, 5));

  match = match_iterator->next();
  REQUIRE(match == nullptr);
}

TEST_CASE("finditer method returns the iterator correctly for free variables with *") {
  std::string pattern = "!!x{!!y{a}x!!b*}y!!";
  std::string document = "abba";
  document += END_CHAR;
  auto regex = Regex(pattern);
  std::unique_ptr<MatchIterator> match_iterator = regex.finditer(document);

  std::unique_ptr<Match> match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(0, 1));
  REQUIRE(match->span("y") == Span(0, 1));

  match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(0, 1));
  REQUIRE(match->span("y") == Span(0, 2));

  match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(0, 1));
  REQUIRE(match->span("y") == Span(0, 3));

  match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(3, 4));
  REQUIRE(match->span("y") == Span(3, 4));

  match = match_iterator->next();
  REQUIRE(match == nullptr);
}


TEST_CASE("finditer method returns the iterator correctly for single variables in disjunction") {
  std::string pattern = "!!x{a(b}x!!|a}x!!)";
  std::string document = "ababa";
  document += END_CHAR;
  auto regex = Regex(pattern);
  std::unique_ptr<MatchIterator> match_iterator = regex.finditer(document);

  std::unique_ptr<Match> match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(0, 2));

  match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(2, 4));

  match = match_iterator->next();
  REQUIRE(match == nullptr);
}

TEST_CASE("finditer method returns the iterator correctly for mix with free variables and normal variables") {
  std::string pattern = "!x{!!y{a}b}y!!";
  std::string document = "ababa";
  document += END_CHAR;
  auto regex = Regex(pattern);
  std::unique_ptr<MatchIterator> match_iterator = regex.finditer(document);

  std::unique_ptr<Match> match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(0, 1));
  REQUIRE(match->span("y") == Span(0, 2));

  match = match_iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->span("x") == Span(2, 3));
  REQUIRE(match->span("y") == Span(2, 4));

  match = match_iterator->next();
  REQUIRE(match == nullptr);
}

TEST_CASE("multi match iterator returns the correct matches for single variables") {
  std::string pattern = "!!x{a}x!!!!x{b}x!!";
  std::string document = "ababa";
  document += END_CHAR;

  auto regex = REMatch::MultiRegex(pattern);
  std::unique_ptr<REMatch::MultiMatchIterator> iterator =
      regex.finditer(document);

  auto match = iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->spans("x") == std::vector<Span>{{0, 1}, {1, 2}});

  match = iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->spans("x") == std::vector<Span>{{2, 3}, {3, 4}});

  REQUIRE(iterator->next() == nullptr);
}

TEST_CASE("multi match iterator returns the correct matches for single variables 2") {
  std::string pattern = "!!x{a}x!!!!x{b!!y{a}x!!}y!!";
  std::string document = "ababa";
  document += END_CHAR;

  auto regex = REMatch::MultiRegex(pattern);
  std::unique_ptr<REMatch::MultiMatchIterator> iterator =
      regex.finditer(document);

  auto match = iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->spans("x") == std::vector<Span>{{0, 1}, {1, 3}});
  REQUIRE(match->spans("y") == std::vector<Span>{{2, 3}});

  match = iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->spans("x") == std::vector<Span>{{2, 3}, {3, 5}});
  REQUIRE(match->spans("y") == std::vector<Span>{{4, 5}});

  REQUIRE(iterator->next() == nullptr);
}

TEST_CASE("multi match iterator returns the correct matches for single variables in disjunction") {
  std::string pattern = "!!x{a(b}x!!|a}x!!)";
  std::string document = "ababa";
  document += END_CHAR;

  auto regex = REMatch::MultiRegex(pattern);
  std::unique_ptr<REMatch::MultiMatchIterator> iterator =
      regex.finditer(document);

  auto match = iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->spans("x") == std::vector<Span>{{0, 2}});

  match = iterator->next();
  REQUIRE(match != nullptr);
  REQUIRE(match->spans("x") == std::vector<Span>{{2, 4}});

  REQUIRE(iterator->next() == nullptr);
}

TEST_CASE("trying to capture an empty span raises an exception with free variables") {
  std::string regex = "!!empty{a*}empty!!";
  REQUIRE_THROWS_AS(Parser(regex), REMatch::EmptyWordCaptureException);
}

TEST_CASE("trying to capture an empty span with alternation raises an exception with free variables") {
  std::string regex = "!!empty{(a|b*)}empty!!";
  REQUIRE_THROWS_AS(Parser(regex), REMatch::EmptyWordCaptureException);
}

}  // namespace rematch::testing

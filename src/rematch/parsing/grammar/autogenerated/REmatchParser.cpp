
// Generated from REmatchParser.g4 by ANTLR 4.13.1


#include "REmatchParserVisitor.h"

#include "REmatchParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct REmatchParserStaticData final {
  REmatchParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  REmatchParserStaticData(const REmatchParserStaticData&) = delete;
  REmatchParserStaticData(REmatchParserStaticData&&) = delete;
  REmatchParserStaticData& operator=(const REmatchParserStaticData&) = delete;
  REmatchParserStaticData& operator=(REmatchParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rematchparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
REmatchParserStaticData *rematchparserParserStaticData = nullptr;

void rematchparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (rematchparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(rematchparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<REmatchParserStaticData>(
    std::vector<std::string>{
      "root", "alternation", "expr", "element", "group", "parentheses", 
      "assignation", "leftAssignation", "rightAssignation", "varname", "atom", 
      "characterClass", "ccAtom", "ccRange", "ccSingle", "ccLiteral", "ccEscapes", 
      "ccOther", "ccSpecial", "singleSharedAtom", "literal", "escapes", 
      "special", "other", "sharedAtom", "quantifier", "quantity", "quantExact", 
      "quantRange", "quantMin", "quantMax", "number", "anchor", "anchorStart", 
      "anchorEnd"
    },
    std::vector<std::string>{
      "", "'\\d'", "'\\D'", "'\\s'", "'\\S'", "'\\w'", "'\\W'", "'\\t'", 
      "'\\r'", "'\\n'", "'\\v'", "'\\f'", "'|'", "'!'", "'{'", "'}'", "'('", 
      "')'", "','", "'\\u003F'", "'+'", "'*'", "'^'", "'-'", "'['", "']'", 
      "'\\'", "", "", "'.'", "'$'"
    },
    std::vector<std::string>{
      "", "DECIMAL_DIGIT", "NOT_DECIMAL_DIGIT", "WHITESPACE", "NOT_WHITESPACE", 
      "ALPHANUMERIC", "NOT_ALPHANUMERIC", "TAB", "CARRIAGE_RETURN", "NEWLINE", 
      "VERTICAL_WHITESPACE", "FORM_FEED", "PIPE", "EXCLAMAITON", "L_CURLY", 
      "R_CURLY", "L_PAR", "R_PAR", "COMMA", "QUESTION", "PLUS", "STAR", 
      "HAT", "HYPHEN", "L_BRACK", "R_BRACK", "BACKSLASH", "ALPHA", "DIGIT", 
      "DOT", "DOLLAR", "UNRECOGNIZED"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,31,221,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,1,
  	0,1,0,1,1,1,1,1,1,5,1,77,8,1,10,1,12,1,80,9,1,1,2,4,2,83,8,2,11,2,12,
  	2,84,1,3,1,3,3,3,89,8,3,1,4,1,4,1,4,3,4,94,8,4,1,5,1,5,1,5,1,5,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,5,9,
  	118,8,9,10,9,12,9,121,9,9,1,10,1,10,1,10,1,10,1,10,1,10,3,10,129,8,10,
  	1,11,1,11,3,11,133,8,11,1,11,4,11,136,8,11,11,11,12,11,137,1,11,1,11,
  	1,12,1,12,1,12,3,12,145,8,12,1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,
  	1,15,3,15,156,8,15,1,16,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,
  	1,20,1,20,3,20,170,8,20,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,
  	1,25,1,25,1,25,1,25,1,25,1,25,1,25,3,25,188,8,25,1,26,1,26,1,26,1,26,
  	3,26,194,8,26,1,27,1,27,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,
  	1,30,1,31,4,31,209,8,31,11,31,12,31,210,1,32,1,32,3,32,215,8,32,1,33,
  	1,33,1,34,1,34,1,34,0,0,35,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,0,7,1,0,27,28,
  	2,0,22,23,25,26,1,0,7,11,5,0,12,12,14,17,19,22,24,26,29,30,2,0,7,11,29,
  	29,5,0,12,12,14,17,19,22,24,26,30,30,1,0,1,6,212,0,70,1,0,0,0,2,73,1,
  	0,0,0,4,82,1,0,0,0,6,86,1,0,0,0,8,93,1,0,0,0,10,95,1,0,0,0,12,99,1,0,
  	0,0,14,105,1,0,0,0,16,110,1,0,0,0,18,115,1,0,0,0,20,128,1,0,0,0,22,130,
  	1,0,0,0,24,144,1,0,0,0,26,146,1,0,0,0,28,150,1,0,0,0,30,155,1,0,0,0,32,
  	157,1,0,0,0,34,160,1,0,0,0,36,162,1,0,0,0,38,164,1,0,0,0,40,169,1,0,0,
  	0,42,171,1,0,0,0,44,174,1,0,0,0,46,176,1,0,0,0,48,178,1,0,0,0,50,187,
  	1,0,0,0,52,193,1,0,0,0,54,195,1,0,0,0,56,197,1,0,0,0,58,201,1,0,0,0,60,
  	204,1,0,0,0,62,208,1,0,0,0,64,214,1,0,0,0,66,216,1,0,0,0,68,218,1,0,0,
  	0,70,71,3,2,1,0,71,72,5,0,0,1,72,1,1,0,0,0,73,78,3,4,2,0,74,75,5,12,0,
  	0,75,77,3,4,2,0,76,74,1,0,0,0,77,80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,
  	0,79,3,1,0,0,0,80,78,1,0,0,0,81,83,3,6,3,0,82,81,1,0,0,0,83,84,1,0,0,
  	0,84,82,1,0,0,0,84,85,1,0,0,0,85,5,1,0,0,0,86,88,3,8,4,0,87,89,3,50,25,
  	0,88,87,1,0,0,0,88,89,1,0,0,0,89,7,1,0,0,0,90,94,3,10,5,0,91,94,3,12,
  	6,0,92,94,3,20,10,0,93,90,1,0,0,0,93,91,1,0,0,0,93,92,1,0,0,0,94,9,1,
  	0,0,0,95,96,5,16,0,0,96,97,3,2,1,0,97,98,5,17,0,0,98,11,1,0,0,0,99,100,
  	5,13,0,0,100,101,3,18,9,0,101,102,5,14,0,0,102,103,3,2,1,0,103,104,5,
  	15,0,0,104,13,1,0,0,0,105,106,5,13,0,0,106,107,5,13,0,0,107,108,3,18,
  	9,0,108,109,5,14,0,0,109,15,1,0,0,0,110,111,5,15,0,0,111,112,3,18,9,0,
  	112,113,5,13,0,0,113,114,5,13,0,0,114,17,1,0,0,0,115,119,5,27,0,0,116,
  	118,7,0,0,0,117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,
  	0,0,0,120,19,1,0,0,0,121,119,1,0,0,0,122,129,3,14,7,0,123,129,3,16,8,
  	0,124,129,3,22,11,0,125,129,3,38,19,0,126,129,3,40,20,0,127,129,3,64,
  	32,0,128,122,1,0,0,0,128,123,1,0,0,0,128,124,1,0,0,0,128,125,1,0,0,0,
  	128,126,1,0,0,0,128,127,1,0,0,0,129,21,1,0,0,0,130,132,5,24,0,0,131,133,
  	5,22,0,0,132,131,1,0,0,0,132,133,1,0,0,0,133,135,1,0,0,0,134,136,3,24,
  	12,0,135,134,1,0,0,0,136,137,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,
  	138,139,1,0,0,0,139,140,5,25,0,0,140,23,1,0,0,0,141,145,3,26,13,0,142,
  	145,3,48,24,0,143,145,3,28,14,0,144,141,1,0,0,0,144,142,1,0,0,0,144,143,
  	1,0,0,0,145,25,1,0,0,0,146,147,3,30,15,0,147,148,5,23,0,0,148,149,3,30,
  	15,0,149,27,1,0,0,0,150,151,3,30,15,0,151,29,1,0,0,0,152,156,3,32,16,
  	0,153,156,3,36,18,0,154,156,3,34,17,0,155,152,1,0,0,0,155,153,1,0,0,0,
  	155,154,1,0,0,0,156,31,1,0,0,0,157,158,5,26,0,0,158,159,7,1,0,0,159,33,
  	1,0,0,0,160,161,8,1,0,0,161,35,1,0,0,0,162,163,7,2,0,0,163,37,1,0,0,0,
  	164,165,3,48,24,0,165,39,1,0,0,0,166,170,3,42,21,0,167,170,3,44,22,0,
  	168,170,3,46,23,0,169,166,1,0,0,0,169,167,1,0,0,0,169,168,1,0,0,0,170,
  	41,1,0,0,0,171,172,5,26,0,0,172,173,7,3,0,0,173,43,1,0,0,0,174,175,7,
  	4,0,0,175,45,1,0,0,0,176,177,8,5,0,0,177,47,1,0,0,0,178,179,7,6,0,0,179,
  	49,1,0,0,0,180,188,5,19,0,0,181,188,5,20,0,0,182,188,5,21,0,0,183,184,
  	5,14,0,0,184,185,3,52,26,0,185,186,5,15,0,0,186,188,1,0,0,0,187,180,1,
  	0,0,0,187,181,1,0,0,0,187,182,1,0,0,0,187,183,1,0,0,0,188,51,1,0,0,0,
  	189,194,3,54,27,0,190,194,3,56,28,0,191,194,3,58,29,0,192,194,3,60,30,
  	0,193,189,1,0,0,0,193,190,1,0,0,0,193,191,1,0,0,0,193,192,1,0,0,0,194,
  	53,1,0,0,0,195,196,3,62,31,0,196,55,1,0,0,0,197,198,3,62,31,0,198,199,
  	5,18,0,0,199,200,3,62,31,0,200,57,1,0,0,0,201,202,3,62,31,0,202,203,5,
  	18,0,0,203,59,1,0,0,0,204,205,5,18,0,0,205,206,3,62,31,0,206,61,1,0,0,
  	0,207,209,5,28,0,0,208,207,1,0,0,0,209,210,1,0,0,0,210,208,1,0,0,0,210,
  	211,1,0,0,0,211,63,1,0,0,0,212,215,3,66,33,0,213,215,3,68,34,0,214,212,
  	1,0,0,0,214,213,1,0,0,0,215,65,1,0,0,0,216,217,5,22,0,0,217,67,1,0,0,
  	0,218,219,5,30,0,0,219,69,1,0,0,0,15,78,84,88,93,119,128,132,137,144,
  	155,169,187,193,210,214
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rematchparserParserStaticData = staticData.release();
}

}

REmatchParser::REmatchParser(TokenStream *input) : REmatchParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

REmatchParser::REmatchParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  REmatchParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *rematchparserParserStaticData->atn, rematchparserParserStaticData->decisionToDFA, rematchparserParserStaticData->sharedContextCache, options);
}

REmatchParser::~REmatchParser() {
  delete _interpreter;
}

const atn::ATN& REmatchParser::getATN() const {
  return *rematchparserParserStaticData->atn;
}

std::string REmatchParser::getGrammarFileName() const {
  return "REmatchParser.g4";
}

const std::vector<std::string>& REmatchParser::getRuleNames() const {
  return rematchparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& REmatchParser::getVocabulary() const {
  return rematchparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView REmatchParser::getSerializedATN() const {
  return rematchparserParserStaticData->serializedATN;
}


//----------------- RootContext ------------------------------------------------------------------

REmatchParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::AlternationContext* REmatchParser::RootContext::alternation() {
  return getRuleContext<REmatchParser::AlternationContext>(0);
}

tree::TerminalNode* REmatchParser::RootContext::EOF() {
  return getToken(REmatchParser::EOF, 0);
}


size_t REmatchParser::RootContext::getRuleIndex() const {
  return REmatchParser::RuleRoot;
}


std::any REmatchParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitRoot(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::RootContext* REmatchParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 0, REmatchParser::RuleRoot);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    alternation();
    setState(71);
    match(REmatchParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlternationContext ------------------------------------------------------------------

REmatchParser::AlternationContext::AlternationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<REmatchParser::ExprContext *> REmatchParser::AlternationContext::expr() {
  return getRuleContexts<REmatchParser::ExprContext>();
}

REmatchParser::ExprContext* REmatchParser::AlternationContext::expr(size_t i) {
  return getRuleContext<REmatchParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> REmatchParser::AlternationContext::PIPE() {
  return getTokens(REmatchParser::PIPE);
}

tree::TerminalNode* REmatchParser::AlternationContext::PIPE(size_t i) {
  return getToken(REmatchParser::PIPE, i);
}


size_t REmatchParser::AlternationContext::getRuleIndex() const {
  return REmatchParser::RuleAlternation;
}


std::any REmatchParser::AlternationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitAlternation(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::AlternationContext* REmatchParser::alternation() {
  AlternationContext *_localctx = _tracker.createInstance<AlternationContext>(_ctx, getState());
  enterRule(_localctx, 2, REmatchParser::RuleAlternation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    expr();
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == REmatchParser::PIPE) {
      setState(74);
      match(REmatchParser::PIPE);
      setState(75);
      expr();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

REmatchParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<REmatchParser::ElementContext *> REmatchParser::ExprContext::element() {
  return getRuleContexts<REmatchParser::ElementContext>();
}

REmatchParser::ElementContext* REmatchParser::ExprContext::element(size_t i) {
  return getRuleContext<REmatchParser::ElementContext>(i);
}


size_t REmatchParser::ExprContext::getRuleIndex() const {
  return REmatchParser::RuleExpr;
}


std::any REmatchParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::ExprContext* REmatchParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 4, REmatchParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(82); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(81);
              element();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(84); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

REmatchParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::GroupContext* REmatchParser::ElementContext::group() {
  return getRuleContext<REmatchParser::GroupContext>(0);
}

REmatchParser::QuantifierContext* REmatchParser::ElementContext::quantifier() {
  return getRuleContext<REmatchParser::QuantifierContext>(0);
}


size_t REmatchParser::ElementContext::getRuleIndex() const {
  return REmatchParser::RuleElement;
}


std::any REmatchParser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::ElementContext* REmatchParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 6, REmatchParser::RuleElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    group();
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3686400) != 0)) {
      setState(87);
      quantifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupContext ------------------------------------------------------------------

REmatchParser::GroupContext::GroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::ParenthesesContext* REmatchParser::GroupContext::parentheses() {
  return getRuleContext<REmatchParser::ParenthesesContext>(0);
}

REmatchParser::AssignationContext* REmatchParser::GroupContext::assignation() {
  return getRuleContext<REmatchParser::AssignationContext>(0);
}

REmatchParser::AtomContext* REmatchParser::GroupContext::atom() {
  return getRuleContext<REmatchParser::AtomContext>(0);
}


size_t REmatchParser::GroupContext::getRuleIndex() const {
  return REmatchParser::RuleGroup;
}


std::any REmatchParser::GroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitGroup(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::GroupContext* REmatchParser::group() {
  GroupContext *_localctx = _tracker.createInstance<GroupContext>(_ctx, getState());
  enterRule(_localctx, 8, REmatchParser::RuleGroup);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(90);
      parentheses();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(91);
      assignation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(92);
      atom();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesesContext ------------------------------------------------------------------

REmatchParser::ParenthesesContext::ParenthesesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::ParenthesesContext::L_PAR() {
  return getToken(REmatchParser::L_PAR, 0);
}

REmatchParser::AlternationContext* REmatchParser::ParenthesesContext::alternation() {
  return getRuleContext<REmatchParser::AlternationContext>(0);
}

tree::TerminalNode* REmatchParser::ParenthesesContext::R_PAR() {
  return getToken(REmatchParser::R_PAR, 0);
}


size_t REmatchParser::ParenthesesContext::getRuleIndex() const {
  return REmatchParser::RuleParentheses;
}


std::any REmatchParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::ParenthesesContext* REmatchParser::parentheses() {
  ParenthesesContext *_localctx = _tracker.createInstance<ParenthesesContext>(_ctx, getState());
  enterRule(_localctx, 10, REmatchParser::RuleParentheses);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(REmatchParser::L_PAR);
    setState(96);
    alternation();
    setState(97);
    match(REmatchParser::R_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignationContext ------------------------------------------------------------------

REmatchParser::AssignationContext::AssignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::AssignationContext::EXCLAMAITON() {
  return getToken(REmatchParser::EXCLAMAITON, 0);
}

REmatchParser::VarnameContext* REmatchParser::AssignationContext::varname() {
  return getRuleContext<REmatchParser::VarnameContext>(0);
}

tree::TerminalNode* REmatchParser::AssignationContext::L_CURLY() {
  return getToken(REmatchParser::L_CURLY, 0);
}

REmatchParser::AlternationContext* REmatchParser::AssignationContext::alternation() {
  return getRuleContext<REmatchParser::AlternationContext>(0);
}

tree::TerminalNode* REmatchParser::AssignationContext::R_CURLY() {
  return getToken(REmatchParser::R_CURLY, 0);
}


size_t REmatchParser::AssignationContext::getRuleIndex() const {
  return REmatchParser::RuleAssignation;
}


std::any REmatchParser::AssignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitAssignation(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::AssignationContext* REmatchParser::assignation() {
  AssignationContext *_localctx = _tracker.createInstance<AssignationContext>(_ctx, getState());
  enterRule(_localctx, 12, REmatchParser::RuleAssignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(REmatchParser::EXCLAMAITON);
    setState(100);
    varname();
    setState(101);
    match(REmatchParser::L_CURLY);
    setState(102);
    alternation();
    setState(103);
    match(REmatchParser::R_CURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftAssignationContext ------------------------------------------------------------------

REmatchParser::LeftAssignationContext::LeftAssignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> REmatchParser::LeftAssignationContext::EXCLAMAITON() {
  return getTokens(REmatchParser::EXCLAMAITON);
}

tree::TerminalNode* REmatchParser::LeftAssignationContext::EXCLAMAITON(size_t i) {
  return getToken(REmatchParser::EXCLAMAITON, i);
}

REmatchParser::VarnameContext* REmatchParser::LeftAssignationContext::varname() {
  return getRuleContext<REmatchParser::VarnameContext>(0);
}

tree::TerminalNode* REmatchParser::LeftAssignationContext::L_CURLY() {
  return getToken(REmatchParser::L_CURLY, 0);
}


size_t REmatchParser::LeftAssignationContext::getRuleIndex() const {
  return REmatchParser::RuleLeftAssignation;
}


std::any REmatchParser::LeftAssignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitLeftAssignation(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::LeftAssignationContext* REmatchParser::leftAssignation() {
  LeftAssignationContext *_localctx = _tracker.createInstance<LeftAssignationContext>(_ctx, getState());
  enterRule(_localctx, 14, REmatchParser::RuleLeftAssignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(REmatchParser::EXCLAMAITON);
    setState(106);
    match(REmatchParser::EXCLAMAITON);
    setState(107);
    varname();
    setState(108);
    match(REmatchParser::L_CURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RightAssignationContext ------------------------------------------------------------------

REmatchParser::RightAssignationContext::RightAssignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::RightAssignationContext::R_CURLY() {
  return getToken(REmatchParser::R_CURLY, 0);
}

REmatchParser::VarnameContext* REmatchParser::RightAssignationContext::varname() {
  return getRuleContext<REmatchParser::VarnameContext>(0);
}

std::vector<tree::TerminalNode *> REmatchParser::RightAssignationContext::EXCLAMAITON() {
  return getTokens(REmatchParser::EXCLAMAITON);
}

tree::TerminalNode* REmatchParser::RightAssignationContext::EXCLAMAITON(size_t i) {
  return getToken(REmatchParser::EXCLAMAITON, i);
}


size_t REmatchParser::RightAssignationContext::getRuleIndex() const {
  return REmatchParser::RuleRightAssignation;
}


std::any REmatchParser::RightAssignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitRightAssignation(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::RightAssignationContext* REmatchParser::rightAssignation() {
  RightAssignationContext *_localctx = _tracker.createInstance<RightAssignationContext>(_ctx, getState());
  enterRule(_localctx, 16, REmatchParser::RuleRightAssignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(REmatchParser::R_CURLY);
    setState(111);
    varname();
    setState(112);
    match(REmatchParser::EXCLAMAITON);
    setState(113);
    match(REmatchParser::EXCLAMAITON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarnameContext ------------------------------------------------------------------

REmatchParser::VarnameContext::VarnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> REmatchParser::VarnameContext::ALPHA() {
  return getTokens(REmatchParser::ALPHA);
}

tree::TerminalNode* REmatchParser::VarnameContext::ALPHA(size_t i) {
  return getToken(REmatchParser::ALPHA, i);
}

std::vector<tree::TerminalNode *> REmatchParser::VarnameContext::DIGIT() {
  return getTokens(REmatchParser::DIGIT);
}

tree::TerminalNode* REmatchParser::VarnameContext::DIGIT(size_t i) {
  return getToken(REmatchParser::DIGIT, i);
}


size_t REmatchParser::VarnameContext::getRuleIndex() const {
  return REmatchParser::RuleVarname;
}


std::any REmatchParser::VarnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitVarname(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::VarnameContext* REmatchParser::varname() {
  VarnameContext *_localctx = _tracker.createInstance<VarnameContext>(_ctx, getState());
  enterRule(_localctx, 18, REmatchParser::RuleVarname);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(REmatchParser::ALPHA);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == REmatchParser::ALPHA

    || _la == REmatchParser::DIGIT) {
      setState(116);
      _la = _input->LA(1);
      if (!(_la == REmatchParser::ALPHA

      || _la == REmatchParser::DIGIT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

REmatchParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::LeftAssignationContext* REmatchParser::AtomContext::leftAssignation() {
  return getRuleContext<REmatchParser::LeftAssignationContext>(0);
}

REmatchParser::RightAssignationContext* REmatchParser::AtomContext::rightAssignation() {
  return getRuleContext<REmatchParser::RightAssignationContext>(0);
}

REmatchParser::CharacterClassContext* REmatchParser::AtomContext::characterClass() {
  return getRuleContext<REmatchParser::CharacterClassContext>(0);
}

REmatchParser::SingleSharedAtomContext* REmatchParser::AtomContext::singleSharedAtom() {
  return getRuleContext<REmatchParser::SingleSharedAtomContext>(0);
}

REmatchParser::LiteralContext* REmatchParser::AtomContext::literal() {
  return getRuleContext<REmatchParser::LiteralContext>(0);
}

REmatchParser::AnchorContext* REmatchParser::AtomContext::anchor() {
  return getRuleContext<REmatchParser::AnchorContext>(0);
}


size_t REmatchParser::AtomContext::getRuleIndex() const {
  return REmatchParser::RuleAtom;
}


std::any REmatchParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::AtomContext* REmatchParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 20, REmatchParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      leftAssignation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      rightAssignation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
      characterClass();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(125);
      singleSharedAtom();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(126);
      literal();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(127);
      anchor();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterClassContext ------------------------------------------------------------------

REmatchParser::CharacterClassContext::CharacterClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::CharacterClassContext::L_BRACK() {
  return getToken(REmatchParser::L_BRACK, 0);
}

tree::TerminalNode* REmatchParser::CharacterClassContext::R_BRACK() {
  return getToken(REmatchParser::R_BRACK, 0);
}

tree::TerminalNode* REmatchParser::CharacterClassContext::HAT() {
  return getToken(REmatchParser::HAT, 0);
}

std::vector<REmatchParser::CcAtomContext *> REmatchParser::CharacterClassContext::ccAtom() {
  return getRuleContexts<REmatchParser::CcAtomContext>();
}

REmatchParser::CcAtomContext* REmatchParser::CharacterClassContext::ccAtom(size_t i) {
  return getRuleContext<REmatchParser::CcAtomContext>(i);
}


size_t REmatchParser::CharacterClassContext::getRuleIndex() const {
  return REmatchParser::RuleCharacterClass;
}


std::any REmatchParser::CharacterClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitCharacterClass(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::CharacterClassContext* REmatchParser::characterClass() {
  CharacterClassContext *_localctx = _tracker.createInstance<CharacterClassContext>(_ctx, getState());
  enterRule(_localctx, 22, REmatchParser::RuleCharacterClass);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(REmatchParser::L_BRACK);
    setState(132);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == REmatchParser::HAT) {
      setState(131);
      match(REmatchParser::HAT);
    }
    setState(135); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(134);
      ccAtom();
      setState(137); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4248829950) != 0));
    setState(139);
    match(REmatchParser::R_BRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CcAtomContext ------------------------------------------------------------------

REmatchParser::CcAtomContext::CcAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::CcRangeContext* REmatchParser::CcAtomContext::ccRange() {
  return getRuleContext<REmatchParser::CcRangeContext>(0);
}

REmatchParser::SharedAtomContext* REmatchParser::CcAtomContext::sharedAtom() {
  return getRuleContext<REmatchParser::SharedAtomContext>(0);
}

REmatchParser::CcSingleContext* REmatchParser::CcAtomContext::ccSingle() {
  return getRuleContext<REmatchParser::CcSingleContext>(0);
}


size_t REmatchParser::CcAtomContext::getRuleIndex() const {
  return REmatchParser::RuleCcAtom;
}


std::any REmatchParser::CcAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitCcAtom(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::CcAtomContext* REmatchParser::ccAtom() {
  CcAtomContext *_localctx = _tracker.createInstance<CcAtomContext>(_ctx, getState());
  enterRule(_localctx, 24, REmatchParser::RuleCcAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(141);
      ccRange();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(142);
      sharedAtom();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(143);
      ccSingle();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CcRangeContext ------------------------------------------------------------------

REmatchParser::CcRangeContext::CcRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<REmatchParser::CcLiteralContext *> REmatchParser::CcRangeContext::ccLiteral() {
  return getRuleContexts<REmatchParser::CcLiteralContext>();
}

REmatchParser::CcLiteralContext* REmatchParser::CcRangeContext::ccLiteral(size_t i) {
  return getRuleContext<REmatchParser::CcLiteralContext>(i);
}

tree::TerminalNode* REmatchParser::CcRangeContext::HYPHEN() {
  return getToken(REmatchParser::HYPHEN, 0);
}


size_t REmatchParser::CcRangeContext::getRuleIndex() const {
  return REmatchParser::RuleCcRange;
}


std::any REmatchParser::CcRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitCcRange(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::CcRangeContext* REmatchParser::ccRange() {
  CcRangeContext *_localctx = _tracker.createInstance<CcRangeContext>(_ctx, getState());
  enterRule(_localctx, 26, REmatchParser::RuleCcRange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    ccLiteral();
    setState(147);
    match(REmatchParser::HYPHEN);
    setState(148);
    ccLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CcSingleContext ------------------------------------------------------------------

REmatchParser::CcSingleContext::CcSingleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::CcLiteralContext* REmatchParser::CcSingleContext::ccLiteral() {
  return getRuleContext<REmatchParser::CcLiteralContext>(0);
}


size_t REmatchParser::CcSingleContext::getRuleIndex() const {
  return REmatchParser::RuleCcSingle;
}


std::any REmatchParser::CcSingleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitCcSingle(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::CcSingleContext* REmatchParser::ccSingle() {
  CcSingleContext *_localctx = _tracker.createInstance<CcSingleContext>(_ctx, getState());
  enterRule(_localctx, 28, REmatchParser::RuleCcSingle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    ccLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CcLiteralContext ------------------------------------------------------------------

REmatchParser::CcLiteralContext::CcLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::CcEscapesContext* REmatchParser::CcLiteralContext::ccEscapes() {
  return getRuleContext<REmatchParser::CcEscapesContext>(0);
}

REmatchParser::CcSpecialContext* REmatchParser::CcLiteralContext::ccSpecial() {
  return getRuleContext<REmatchParser::CcSpecialContext>(0);
}

REmatchParser::CcOtherContext* REmatchParser::CcLiteralContext::ccOther() {
  return getRuleContext<REmatchParser::CcOtherContext>(0);
}


size_t REmatchParser::CcLiteralContext::getRuleIndex() const {
  return REmatchParser::RuleCcLiteral;
}


std::any REmatchParser::CcLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitCcLiteral(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::CcLiteralContext* REmatchParser::ccLiteral() {
  CcLiteralContext *_localctx = _tracker.createInstance<CcLiteralContext>(_ctx, getState());
  enterRule(_localctx, 30, REmatchParser::RuleCcLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(152);
      ccEscapes();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(153);
      ccSpecial();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(154);
      ccOther();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CcEscapesContext ------------------------------------------------------------------

REmatchParser::CcEscapesContext::CcEscapesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> REmatchParser::CcEscapesContext::BACKSLASH() {
  return getTokens(REmatchParser::BACKSLASH);
}

tree::TerminalNode* REmatchParser::CcEscapesContext::BACKSLASH(size_t i) {
  return getToken(REmatchParser::BACKSLASH, i);
}

tree::TerminalNode* REmatchParser::CcEscapesContext::HAT() {
  return getToken(REmatchParser::HAT, 0);
}

tree::TerminalNode* REmatchParser::CcEscapesContext::HYPHEN() {
  return getToken(REmatchParser::HYPHEN, 0);
}

tree::TerminalNode* REmatchParser::CcEscapesContext::R_BRACK() {
  return getToken(REmatchParser::R_BRACK, 0);
}


size_t REmatchParser::CcEscapesContext::getRuleIndex() const {
  return REmatchParser::RuleCcEscapes;
}


std::any REmatchParser::CcEscapesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitCcEscapes(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::CcEscapesContext* REmatchParser::ccEscapes() {
  CcEscapesContext *_localctx = _tracker.createInstance<CcEscapesContext>(_ctx, getState());
  enterRule(_localctx, 32, REmatchParser::RuleCcEscapes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(REmatchParser::BACKSLASH);
    setState(158);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 113246208) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CcOtherContext ------------------------------------------------------------------

REmatchParser::CcOtherContext::CcOtherContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::CcOtherContext::HAT() {
  return getToken(REmatchParser::HAT, 0);
}

tree::TerminalNode* REmatchParser::CcOtherContext::HYPHEN() {
  return getToken(REmatchParser::HYPHEN, 0);
}

tree::TerminalNode* REmatchParser::CcOtherContext::R_BRACK() {
  return getToken(REmatchParser::R_BRACK, 0);
}

tree::TerminalNode* REmatchParser::CcOtherContext::BACKSLASH() {
  return getToken(REmatchParser::BACKSLASH, 0);
}


size_t REmatchParser::CcOtherContext::getRuleIndex() const {
  return REmatchParser::RuleCcOther;
}


std::any REmatchParser::CcOtherContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitCcOther(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::CcOtherContext* REmatchParser::ccOther() {
  CcOtherContext *_localctx = _tracker.createInstance<CcOtherContext>(_ctx, getState());
  enterRule(_localctx, 34, REmatchParser::RuleCcOther);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 113246208) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CcSpecialContext ------------------------------------------------------------------

REmatchParser::CcSpecialContext::CcSpecialContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::CcSpecialContext::TAB() {
  return getToken(REmatchParser::TAB, 0);
}

tree::TerminalNode* REmatchParser::CcSpecialContext::CARRIAGE_RETURN() {
  return getToken(REmatchParser::CARRIAGE_RETURN, 0);
}

tree::TerminalNode* REmatchParser::CcSpecialContext::NEWLINE() {
  return getToken(REmatchParser::NEWLINE, 0);
}

tree::TerminalNode* REmatchParser::CcSpecialContext::VERTICAL_WHITESPACE() {
  return getToken(REmatchParser::VERTICAL_WHITESPACE, 0);
}

tree::TerminalNode* REmatchParser::CcSpecialContext::FORM_FEED() {
  return getToken(REmatchParser::FORM_FEED, 0);
}


size_t REmatchParser::CcSpecialContext::getRuleIndex() const {
  return REmatchParser::RuleCcSpecial;
}


std::any REmatchParser::CcSpecialContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitCcSpecial(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::CcSpecialContext* REmatchParser::ccSpecial() {
  CcSpecialContext *_localctx = _tracker.createInstance<CcSpecialContext>(_ctx, getState());
  enterRule(_localctx, 36, REmatchParser::RuleCcSpecial);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3968) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleSharedAtomContext ------------------------------------------------------------------

REmatchParser::SingleSharedAtomContext::SingleSharedAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::SharedAtomContext* REmatchParser::SingleSharedAtomContext::sharedAtom() {
  return getRuleContext<REmatchParser::SharedAtomContext>(0);
}


size_t REmatchParser::SingleSharedAtomContext::getRuleIndex() const {
  return REmatchParser::RuleSingleSharedAtom;
}


std::any REmatchParser::SingleSharedAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitSingleSharedAtom(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::SingleSharedAtomContext* REmatchParser::singleSharedAtom() {
  SingleSharedAtomContext *_localctx = _tracker.createInstance<SingleSharedAtomContext>(_ctx, getState());
  enterRule(_localctx, 38, REmatchParser::RuleSingleSharedAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    sharedAtom();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

REmatchParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::EscapesContext* REmatchParser::LiteralContext::escapes() {
  return getRuleContext<REmatchParser::EscapesContext>(0);
}

REmatchParser::SpecialContext* REmatchParser::LiteralContext::special() {
  return getRuleContext<REmatchParser::SpecialContext>(0);
}

REmatchParser::OtherContext* REmatchParser::LiteralContext::other() {
  return getRuleContext<REmatchParser::OtherContext>(0);
}


size_t REmatchParser::LiteralContext::getRuleIndex() const {
  return REmatchParser::RuleLiteral;
}


std::any REmatchParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::LiteralContext* REmatchParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 40, REmatchParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(169);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(166);
      escapes();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(167);
      special();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(168);
      other();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EscapesContext ------------------------------------------------------------------

REmatchParser::EscapesContext::EscapesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> REmatchParser::EscapesContext::BACKSLASH() {
  return getTokens(REmatchParser::BACKSLASH);
}

tree::TerminalNode* REmatchParser::EscapesContext::BACKSLASH(size_t i) {
  return getToken(REmatchParser::BACKSLASH, i);
}

tree::TerminalNode* REmatchParser::EscapesContext::L_BRACK() {
  return getToken(REmatchParser::L_BRACK, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::R_BRACK() {
  return getToken(REmatchParser::R_BRACK, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::L_PAR() {
  return getToken(REmatchParser::L_PAR, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::R_PAR() {
  return getToken(REmatchParser::R_PAR, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::L_CURLY() {
  return getToken(REmatchParser::L_CURLY, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::R_CURLY() {
  return getToken(REmatchParser::R_CURLY, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::STAR() {
  return getToken(REmatchParser::STAR, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::PLUS() {
  return getToken(REmatchParser::PLUS, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::QUESTION() {
  return getToken(REmatchParser::QUESTION, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::PIPE() {
  return getToken(REmatchParser::PIPE, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::DOT() {
  return getToken(REmatchParser::DOT, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::HAT() {
  return getToken(REmatchParser::HAT, 0);
}

tree::TerminalNode* REmatchParser::EscapesContext::DOLLAR() {
  return getToken(REmatchParser::DOLLAR, 0);
}


size_t REmatchParser::EscapesContext::getRuleIndex() const {
  return REmatchParser::RuleEscapes;
}


std::any REmatchParser::EscapesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitEscapes(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::EscapesContext* REmatchParser::escapes() {
  EscapesContext *_localctx = _tracker.createInstance<EscapesContext>(_ctx, getState());
  enterRule(_localctx, 42, REmatchParser::RuleEscapes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(REmatchParser::BACKSLASH);
    setState(172);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1736167424) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecialContext ------------------------------------------------------------------

REmatchParser::SpecialContext::SpecialContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::SpecialContext::DOT() {
  return getToken(REmatchParser::DOT, 0);
}

tree::TerminalNode* REmatchParser::SpecialContext::TAB() {
  return getToken(REmatchParser::TAB, 0);
}

tree::TerminalNode* REmatchParser::SpecialContext::CARRIAGE_RETURN() {
  return getToken(REmatchParser::CARRIAGE_RETURN, 0);
}

tree::TerminalNode* REmatchParser::SpecialContext::NEWLINE() {
  return getToken(REmatchParser::NEWLINE, 0);
}

tree::TerminalNode* REmatchParser::SpecialContext::VERTICAL_WHITESPACE() {
  return getToken(REmatchParser::VERTICAL_WHITESPACE, 0);
}

tree::TerminalNode* REmatchParser::SpecialContext::FORM_FEED() {
  return getToken(REmatchParser::FORM_FEED, 0);
}


size_t REmatchParser::SpecialContext::getRuleIndex() const {
  return REmatchParser::RuleSpecial;
}


std::any REmatchParser::SpecialContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitSpecial(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::SpecialContext* REmatchParser::special() {
  SpecialContext *_localctx = _tracker.createInstance<SpecialContext>(_ctx, getState());
  enterRule(_localctx, 44, REmatchParser::RuleSpecial);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 536874880) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OtherContext ------------------------------------------------------------------

REmatchParser::OtherContext::OtherContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::OtherContext::L_BRACK() {
  return getToken(REmatchParser::L_BRACK, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::R_BRACK() {
  return getToken(REmatchParser::R_BRACK, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::L_PAR() {
  return getToken(REmatchParser::L_PAR, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::R_PAR() {
  return getToken(REmatchParser::R_PAR, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::L_CURLY() {
  return getToken(REmatchParser::L_CURLY, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::R_CURLY() {
  return getToken(REmatchParser::R_CURLY, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::STAR() {
  return getToken(REmatchParser::STAR, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::PLUS() {
  return getToken(REmatchParser::PLUS, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::QUESTION() {
  return getToken(REmatchParser::QUESTION, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::PIPE() {
  return getToken(REmatchParser::PIPE, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::BACKSLASH() {
  return getToken(REmatchParser::BACKSLASH, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::HAT() {
  return getToken(REmatchParser::HAT, 0);
}

tree::TerminalNode* REmatchParser::OtherContext::DOLLAR() {
  return getToken(REmatchParser::DOLLAR, 0);
}


size_t REmatchParser::OtherContext::getRuleIndex() const {
  return REmatchParser::RuleOther;
}


std::any REmatchParser::OtherContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitOther(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::OtherContext* REmatchParser::other() {
  OtherContext *_localctx = _tracker.createInstance<OtherContext>(_ctx, getState());
  enterRule(_localctx, 46, REmatchParser::RuleOther);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1199296512) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SharedAtomContext ------------------------------------------------------------------

REmatchParser::SharedAtomContext::SharedAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::SharedAtomContext::DECIMAL_DIGIT() {
  return getToken(REmatchParser::DECIMAL_DIGIT, 0);
}

tree::TerminalNode* REmatchParser::SharedAtomContext::NOT_DECIMAL_DIGIT() {
  return getToken(REmatchParser::NOT_DECIMAL_DIGIT, 0);
}

tree::TerminalNode* REmatchParser::SharedAtomContext::WHITESPACE() {
  return getToken(REmatchParser::WHITESPACE, 0);
}

tree::TerminalNode* REmatchParser::SharedAtomContext::NOT_WHITESPACE() {
  return getToken(REmatchParser::NOT_WHITESPACE, 0);
}

tree::TerminalNode* REmatchParser::SharedAtomContext::ALPHANUMERIC() {
  return getToken(REmatchParser::ALPHANUMERIC, 0);
}

tree::TerminalNode* REmatchParser::SharedAtomContext::NOT_ALPHANUMERIC() {
  return getToken(REmatchParser::NOT_ALPHANUMERIC, 0);
}


size_t REmatchParser::SharedAtomContext::getRuleIndex() const {
  return REmatchParser::RuleSharedAtom;
}


std::any REmatchParser::SharedAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitSharedAtom(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::SharedAtomContext* REmatchParser::sharedAtom() {
  SharedAtomContext *_localctx = _tracker.createInstance<SharedAtomContext>(_ctx, getState());
  enterRule(_localctx, 48, REmatchParser::RuleSharedAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 126) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantifierContext ------------------------------------------------------------------

REmatchParser::QuantifierContext::QuantifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::QuantifierContext::QUESTION() {
  return getToken(REmatchParser::QUESTION, 0);
}

tree::TerminalNode* REmatchParser::QuantifierContext::PLUS() {
  return getToken(REmatchParser::PLUS, 0);
}

tree::TerminalNode* REmatchParser::QuantifierContext::STAR() {
  return getToken(REmatchParser::STAR, 0);
}

tree::TerminalNode* REmatchParser::QuantifierContext::L_CURLY() {
  return getToken(REmatchParser::L_CURLY, 0);
}

REmatchParser::QuantityContext* REmatchParser::QuantifierContext::quantity() {
  return getRuleContext<REmatchParser::QuantityContext>(0);
}

tree::TerminalNode* REmatchParser::QuantifierContext::R_CURLY() {
  return getToken(REmatchParser::R_CURLY, 0);
}


size_t REmatchParser::QuantifierContext::getRuleIndex() const {
  return REmatchParser::RuleQuantifier;
}


std::any REmatchParser::QuantifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitQuantifier(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::QuantifierContext* REmatchParser::quantifier() {
  QuantifierContext *_localctx = _tracker.createInstance<QuantifierContext>(_ctx, getState());
  enterRule(_localctx, 50, REmatchParser::RuleQuantifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case REmatchParser::QUESTION: {
        enterOuterAlt(_localctx, 1);
        setState(180);
        match(REmatchParser::QUESTION);
        break;
      }

      case REmatchParser::PLUS: {
        enterOuterAlt(_localctx, 2);
        setState(181);
        match(REmatchParser::PLUS);
        break;
      }

      case REmatchParser::STAR: {
        enterOuterAlt(_localctx, 3);
        setState(182);
        match(REmatchParser::STAR);
        break;
      }

      case REmatchParser::L_CURLY: {
        enterOuterAlt(_localctx, 4);
        setState(183);
        match(REmatchParser::L_CURLY);
        setState(184);
        quantity();
        setState(185);
        match(REmatchParser::R_CURLY);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantityContext ------------------------------------------------------------------

REmatchParser::QuantityContext::QuantityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::QuantExactContext* REmatchParser::QuantityContext::quantExact() {
  return getRuleContext<REmatchParser::QuantExactContext>(0);
}

REmatchParser::QuantRangeContext* REmatchParser::QuantityContext::quantRange() {
  return getRuleContext<REmatchParser::QuantRangeContext>(0);
}

REmatchParser::QuantMinContext* REmatchParser::QuantityContext::quantMin() {
  return getRuleContext<REmatchParser::QuantMinContext>(0);
}

REmatchParser::QuantMaxContext* REmatchParser::QuantityContext::quantMax() {
  return getRuleContext<REmatchParser::QuantMaxContext>(0);
}


size_t REmatchParser::QuantityContext::getRuleIndex() const {
  return REmatchParser::RuleQuantity;
}


std::any REmatchParser::QuantityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitQuantity(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::QuantityContext* REmatchParser::quantity() {
  QuantityContext *_localctx = _tracker.createInstance<QuantityContext>(_ctx, getState());
  enterRule(_localctx, 52, REmatchParser::RuleQuantity);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(193);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(189);
      quantExact();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(190);
      quantRange();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(191);
      quantMin();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(192);
      quantMax();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantExactContext ------------------------------------------------------------------

REmatchParser::QuantExactContext::QuantExactContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::NumberContext* REmatchParser::QuantExactContext::number() {
  return getRuleContext<REmatchParser::NumberContext>(0);
}


size_t REmatchParser::QuantExactContext::getRuleIndex() const {
  return REmatchParser::RuleQuantExact;
}


std::any REmatchParser::QuantExactContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitQuantExact(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::QuantExactContext* REmatchParser::quantExact() {
  QuantExactContext *_localctx = _tracker.createInstance<QuantExactContext>(_ctx, getState());
  enterRule(_localctx, 54, REmatchParser::RuleQuantExact);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantRangeContext ------------------------------------------------------------------

REmatchParser::QuantRangeContext::QuantRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<REmatchParser::NumberContext *> REmatchParser::QuantRangeContext::number() {
  return getRuleContexts<REmatchParser::NumberContext>();
}

REmatchParser::NumberContext* REmatchParser::QuantRangeContext::number(size_t i) {
  return getRuleContext<REmatchParser::NumberContext>(i);
}

tree::TerminalNode* REmatchParser::QuantRangeContext::COMMA() {
  return getToken(REmatchParser::COMMA, 0);
}


size_t REmatchParser::QuantRangeContext::getRuleIndex() const {
  return REmatchParser::RuleQuantRange;
}


std::any REmatchParser::QuantRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitQuantRange(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::QuantRangeContext* REmatchParser::quantRange() {
  QuantRangeContext *_localctx = _tracker.createInstance<QuantRangeContext>(_ctx, getState());
  enterRule(_localctx, 56, REmatchParser::RuleQuantRange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    number();
    setState(198);
    match(REmatchParser::COMMA);
    setState(199);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantMinContext ------------------------------------------------------------------

REmatchParser::QuantMinContext::QuantMinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::NumberContext* REmatchParser::QuantMinContext::number() {
  return getRuleContext<REmatchParser::NumberContext>(0);
}

tree::TerminalNode* REmatchParser::QuantMinContext::COMMA() {
  return getToken(REmatchParser::COMMA, 0);
}


size_t REmatchParser::QuantMinContext::getRuleIndex() const {
  return REmatchParser::RuleQuantMin;
}


std::any REmatchParser::QuantMinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitQuantMin(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::QuantMinContext* REmatchParser::quantMin() {
  QuantMinContext *_localctx = _tracker.createInstance<QuantMinContext>(_ctx, getState());
  enterRule(_localctx, 58, REmatchParser::RuleQuantMin);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    number();
    setState(202);
    match(REmatchParser::COMMA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantMaxContext ------------------------------------------------------------------

REmatchParser::QuantMaxContext::QuantMaxContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::QuantMaxContext::COMMA() {
  return getToken(REmatchParser::COMMA, 0);
}

REmatchParser::NumberContext* REmatchParser::QuantMaxContext::number() {
  return getRuleContext<REmatchParser::NumberContext>(0);
}


size_t REmatchParser::QuantMaxContext::getRuleIndex() const {
  return REmatchParser::RuleQuantMax;
}


std::any REmatchParser::QuantMaxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitQuantMax(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::QuantMaxContext* REmatchParser::quantMax() {
  QuantMaxContext *_localctx = _tracker.createInstance<QuantMaxContext>(_ctx, getState());
  enterRule(_localctx, 60, REmatchParser::RuleQuantMax);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(REmatchParser::COMMA);
    setState(205);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

REmatchParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> REmatchParser::NumberContext::DIGIT() {
  return getTokens(REmatchParser::DIGIT);
}

tree::TerminalNode* REmatchParser::NumberContext::DIGIT(size_t i) {
  return getToken(REmatchParser::DIGIT, i);
}


size_t REmatchParser::NumberContext::getRuleIndex() const {
  return REmatchParser::RuleNumber;
}


std::any REmatchParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::NumberContext* REmatchParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 62, REmatchParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(207);
      match(REmatchParser::DIGIT);
      setState(210); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == REmatchParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnchorContext ------------------------------------------------------------------

REmatchParser::AnchorContext::AnchorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

REmatchParser::AnchorStartContext* REmatchParser::AnchorContext::anchorStart() {
  return getRuleContext<REmatchParser::AnchorStartContext>(0);
}

REmatchParser::AnchorEndContext* REmatchParser::AnchorContext::anchorEnd() {
  return getRuleContext<REmatchParser::AnchorEndContext>(0);
}


size_t REmatchParser::AnchorContext::getRuleIndex() const {
  return REmatchParser::RuleAnchor;
}


std::any REmatchParser::AnchorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitAnchor(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::AnchorContext* REmatchParser::anchor() {
  AnchorContext *_localctx = _tracker.createInstance<AnchorContext>(_ctx, getState());
  enterRule(_localctx, 64, REmatchParser::RuleAnchor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case REmatchParser::HAT: {
        enterOuterAlt(_localctx, 1);
        setState(212);
        anchorStart();
        break;
      }

      case REmatchParser::DOLLAR: {
        enterOuterAlt(_localctx, 2);
        setState(213);
        anchorEnd();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnchorStartContext ------------------------------------------------------------------

REmatchParser::AnchorStartContext::AnchorStartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::AnchorStartContext::HAT() {
  return getToken(REmatchParser::HAT, 0);
}


size_t REmatchParser::AnchorStartContext::getRuleIndex() const {
  return REmatchParser::RuleAnchorStart;
}


std::any REmatchParser::AnchorStartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitAnchorStart(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::AnchorStartContext* REmatchParser::anchorStart() {
  AnchorStartContext *_localctx = _tracker.createInstance<AnchorStartContext>(_ctx, getState());
  enterRule(_localctx, 66, REmatchParser::RuleAnchorStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(REmatchParser::HAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnchorEndContext ------------------------------------------------------------------

REmatchParser::AnchorEndContext::AnchorEndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* REmatchParser::AnchorEndContext::DOLLAR() {
  return getToken(REmatchParser::DOLLAR, 0);
}


size_t REmatchParser::AnchorEndContext::getRuleIndex() const {
  return REmatchParser::RuleAnchorEnd;
}


std::any REmatchParser::AnchorEndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<REmatchParserVisitor*>(visitor))
    return parserVisitor->visitAnchorEnd(this);
  else
    return visitor->visitChildren(this);
}

REmatchParser::AnchorEndContext* REmatchParser::anchorEnd() {
  AnchorEndContext *_localctx = _tracker.createInstance<AnchorEndContext>(_ctx, getState());
  enterRule(_localctx, 68, REmatchParser::RuleAnchorEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(REmatchParser::DOLLAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void REmatchParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  rematchparserParserInitialize();
#else
  ::antlr4::internal::call_once(rematchparserParserOnceFlag, rematchparserParserInitialize);
#endif
}

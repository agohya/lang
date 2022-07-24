
// Generated from d:\agohya\lang\test.g4 by ANTLR 4.9.2


#include "testListener.h"
#include "testVisitor.h"

#include "testParser.h"


using namespace antlrcpp;
using namespace agohyanbrg;
using namespace antlr4;

testParser::testParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

testParser::~testParser() {
  delete _interpreter;
}

std::string testParser::getGrammarFileName() const {
  return "test.g4";
}

const std::vector<std::string>& testParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& testParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PruleContext ------------------------------------------------------------------

testParser::PruleContext::PruleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* testParser::PruleContext::CHAR() {
  return getToken(testParser::CHAR, 0);
}


size_t testParser::PruleContext::getRuleIndex() const {
  return testParser::RulePrule;
}

void testParser::PruleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrule(this);
}

void testParser::PruleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrule(this);
}


antlrcpp::Any testParser::PruleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<testVisitor*>(visitor))
    return parserVisitor->visitPrule(this);
  else
    return visitor->visitChildren(this);
}

testParser::PruleContext* testParser::prule() {
  PruleContext *_localctx = _tracker.createInstance<PruleContext>(_ctx, getState());
  enterRule(_localctx, 0, testParser::RulePrule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    match(testParser::T__0);
    setState(3);
    match(testParser::CHAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> testParser::_decisionToDFA;
atn::PredictionContextCache testParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN testParser::_atn;
std::vector<uint16_t> testParser::_serializedATN;

std::vector<std::string> testParser::_ruleNames = {
  "prule"
};

std::vector<std::string> testParser::_literalNames = {
  "", "'Hello '"
};

std::vector<std::string> testParser::_symbolicNames = {
  "", "", "CHAR"
};

dfa::Vocabulary testParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> testParser::_tokenNames;

testParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x4, 0x8, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 0x2, 0x2, 0x6, 0x2, 0x4, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0x5, 0x7, 0x3, 0x2, 0x2, 0x5, 0x6, 0x7, 0x4, 
       0x2, 0x2, 0x6, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

testParser::Initializer testParser::_init;

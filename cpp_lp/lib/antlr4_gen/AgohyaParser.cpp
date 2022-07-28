
// Generated from D:\agohya\lang\grammar\AgohyaParser.g4 by ANTLR 4.10.1


#include "AgohyaParserVisitor.h"

#include "AgohyaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct AgohyaParserStaticData final {
  AgohyaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AgohyaParserStaticData(const AgohyaParserStaticData&) = delete;
  AgohyaParserStaticData(AgohyaParserStaticData&&) = delete;
  AgohyaParserStaticData& operator=(const AgohyaParserStaticData&) = delete;
  AgohyaParserStaticData& operator=(AgohyaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag agohyaparserParserOnceFlag;
AgohyaParserStaticData *agohyaparserParserStaticData = nullptr;

void agohyaparserParserInitialize() {
  assert(agohyaparserParserStaticData == nullptr);
  auto staticData = std::make_unique<AgohyaParserStaticData>(
    std::vector<std::string>{
      "prog", "libDecl", "statement", "importRule", "declaration", "variableDeclaration", 
      "type", "initializer", "nonPrimitiveTypes", "typeList", "typeParameters", 
      "classDeclaration", "classBody", "classBodyDeclaration", "newObjDeclaration", 
      "nullableType", "primitiveType", "classType"
    },
    std::vector<std::string>{
      "", "'int'", "'double'", "'bool'", "'String'", "'+'", "'-'", "'*'", 
      "'/'", "'%'", "'&&'", "'='", "'=='", "'!='", "'!'", "'!.'", "'\\u003F.'", 
      "'\\u003F\\u003F='", "'=>'", "'||'", "", "'<'", "'>'", "'>='", "'<='", 
      "'++'", "'--'", "'+='", "'-='", "'*='", "'/='", "'%='", "'['", "']'", 
      "'{'", "'}'", "'('", "')'", "", "'@'", "'abstract'", "'as'", "'assert'", 
      "'async'", "'await'", "'break'", "'case'", "'catch'", "'class'", "'const'", 
      "'continue'", "'default'", "'do'", "'else'", "'enum'", "'extends'", 
      "'extension'", "'external'", "'factory'", "'false'", "'final'", "'finally'", 
      "'for'", "'Function'", "'if'", "'implements'", "'import'", "'is'", 
      "'let'", "'lib'", "'new'", "'on'", "'operator'", "'return'", "'static'", 
      "'super'", "'switch'", "'this'", "'throw'", "'true'", "'try'", "'typedef'", 
      "'void'", "'while'", "", "", "", "", "", "", "", "'null'", "", "", 
      "", "", "", "'_'", "'$'", "'\\u003F'", "','", "'.'", "':'", "';'"
    },
    std::vector<std::string>{
      "", "INT", "DOUBLE", "BOOL", "STRING", "PLUS", "MINUS", "MULTIPLY", 
      "DIVIDE", "MODULUS", "AND", "ASSIGN", "EQUALS", "NOT_EQUALS", "NOT", 
      "MUST_NOT_BE_NULL", "NULL_THEN_EVAL_TO_NULL", "IF_NULL_THEN_ASSIGN", 
      "LAMBDA_FUNC_IDENTIFIER", "OR", "IN", "LESS_THAN", "GREATER_THAN", 
      "GREATER_THAN_EQUALS", "LESS_THAN_EQUALS", "INCREMENT", "DECREMENT", 
      "PLUS_EQUALS", "MINUS_EQUALS", "MULTIPLY_EQUALS", "DIVIDE_EQUALS", 
      "MODULUS_EQUALS", "SQR_BRACK_OPEN", "SQR_BRACK_CLOSE", "CURL_BRACK_OPEN", 
      "CURL_BRACK_CLOSE", "PAREN_OPEN", "PAREN_CLOSE", "NULLABLE_TYPE_IDENTIFIER", 
      "AT", "ABSTRACT", "AS", "ASSERT", "ASYNC", "AWAIT", "BREAK", "CASE", 
      "CATCH", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "ELSE", "ENUM", 
      "EXTENDS", "EXTENSION", "EXTERNAL", "FACTORY", "FALSE", "FINAL", "FINALLY", 
      "FOR", "FUNCTION", "IF", "IMPLEMENTS", "IMPORT", "IS", "LET", "LIB", 
      "NEW", "ON", "OPERATOR", "RETURN", "STATIC", "SUPER", "SWITCH", "THIS", 
      "THROW", "TRUE", "TRY", "TYPEDEF", "VOID", "WHILE", "WHITESPACE", 
      "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "BOOL_LITERAL", "DOUBLE_LITERAL", 
      "HEX_LITERAL", "INT_LITERAL", "NULL_LITERAL", "STRING_LITERAL", "LIB_LITERAL", 
      "IMPORT_LITERAL", "IDENTIFIER", "NEWLINE", "Underscore", "Dollar", 
      "QuestionMark", "COMMA", "Dot", "COLON", "SEMICOLON"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,103,159,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,3,0,39,8,0,1,0,5,0,42,8,0,10,
  	0,12,0,45,9,0,1,0,1,0,1,0,3,0,50,8,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,
  	3,2,60,8,2,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,3,5,71,8,5,1,6,1,6,1,6,
  	3,6,76,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,87,8,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,100,8,7,1,7,3,7,103,8,7,1,8,1,8,1,
  	8,1,8,3,8,109,8,8,1,9,4,9,112,8,9,11,9,12,9,113,1,10,1,10,1,10,4,10,119,
  	8,10,11,10,12,10,120,1,11,1,11,1,11,3,11,126,8,11,1,11,1,11,3,11,130,
  	8,11,1,11,1,11,3,11,134,8,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,14,1,14,1,14,3,14,147,8,14,1,15,1,15,3,15,151,8,15,1,15,1,15,1,16,1,
  	16,1,17,1,17,1,17,0,0,18,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,0,2,1,0,1,3,2,0,4,4,95,95,171,0,49,1,0,0,0,2,51,1,0,0,0,4,59,1,0,0,
  	0,6,61,1,0,0,0,8,65,1,0,0,0,10,67,1,0,0,0,12,75,1,0,0,0,14,102,1,0,0,
  	0,16,108,1,0,0,0,18,111,1,0,0,0,20,118,1,0,0,0,22,122,1,0,0,0,24,137,
  	1,0,0,0,26,141,1,0,0,0,28,143,1,0,0,0,30,150,1,0,0,0,32,154,1,0,0,0,34,
  	156,1,0,0,0,36,38,3,2,1,0,37,39,5,96,0,0,38,37,1,0,0,0,38,39,1,0,0,0,
  	39,43,1,0,0,0,40,42,3,4,2,0,41,40,1,0,0,0,42,45,1,0,0,0,43,41,1,0,0,0,
  	43,44,1,0,0,0,44,46,1,0,0,0,45,43,1,0,0,0,46,47,5,0,0,1,47,50,1,0,0,0,
  	48,50,5,0,0,1,49,36,1,0,0,0,49,48,1,0,0,0,50,1,1,0,0,0,51,52,5,69,0,0,
  	52,53,5,93,0,0,53,54,5,103,0,0,54,3,1,0,0,0,55,60,3,6,3,0,56,60,3,8,4,
  	0,57,60,3,14,7,0,58,60,5,96,0,0,59,55,1,0,0,0,59,56,1,0,0,0,59,57,1,0,
  	0,0,59,58,1,0,0,0,60,5,1,0,0,0,61,62,5,66,0,0,62,63,5,94,0,0,63,64,5,
  	103,0,0,64,7,1,0,0,0,65,66,3,10,5,0,66,9,1,0,0,0,67,70,3,12,6,0,68,71,
  	5,95,0,0,69,71,3,14,7,0,70,68,1,0,0,0,70,69,1,0,0,0,71,11,1,0,0,0,72,
  	76,3,32,16,0,73,76,3,34,17,0,74,76,3,30,15,0,75,72,1,0,0,0,75,73,1,0,
  	0,0,75,74,1,0,0,0,76,13,1,0,0,0,77,78,5,95,0,0,78,86,5,11,0,0,79,87,5,
  	95,0,0,80,87,5,90,0,0,81,87,5,88,0,0,82,87,5,89,0,0,83,87,5,92,0,0,84,
  	87,5,87,0,0,85,87,3,28,14,0,86,79,1,0,0,0,86,80,1,0,0,0,86,81,1,0,0,0,
  	86,82,1,0,0,0,86,83,1,0,0,0,86,84,1,0,0,0,86,85,1,0,0,0,87,88,1,0,0,0,
  	88,103,5,103,0,0,89,90,5,95,0,0,90,99,5,11,0,0,91,100,5,95,0,0,92,100,
  	5,90,0,0,93,100,5,88,0,0,94,100,5,89,0,0,95,100,5,92,0,0,96,100,5,87,
  	0,0,97,100,5,91,0,0,98,100,3,28,14,0,99,91,1,0,0,0,99,92,1,0,0,0,99,93,
  	1,0,0,0,99,94,1,0,0,0,99,95,1,0,0,0,99,96,1,0,0,0,99,97,1,0,0,0,99,98,
  	1,0,0,0,100,101,1,0,0,0,101,103,5,103,0,0,102,77,1,0,0,0,102,89,1,0,0,
  	0,103,15,1,0,0,0,104,109,3,34,17,0,105,106,3,34,17,0,106,107,5,99,0,0,
  	107,109,1,0,0,0,108,104,1,0,0,0,108,105,1,0,0,0,109,17,1,0,0,0,110,112,
  	3,16,8,0,111,110,1,0,0,0,112,113,1,0,0,0,113,111,1,0,0,0,113,114,1,0,
  	0,0,114,19,1,0,0,0,115,116,3,12,6,0,116,117,5,100,0,0,117,119,1,0,0,0,
  	118,115,1,0,0,0,119,120,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,21,
  	1,0,0,0,122,123,5,48,0,0,123,125,5,95,0,0,124,126,3,20,10,0,125,124,1,
  	0,0,0,125,126,1,0,0,0,126,129,1,0,0,0,127,128,5,55,0,0,128,130,3,18,9,
  	0,129,127,1,0,0,0,129,130,1,0,0,0,130,133,1,0,0,0,131,132,5,65,0,0,132,
  	134,3,18,9,0,133,131,1,0,0,0,133,134,1,0,0,0,134,135,1,0,0,0,135,136,
  	3,24,12,0,136,23,1,0,0,0,137,138,5,34,0,0,138,139,3,26,13,0,139,140,5,
  	34,0,0,140,25,1,0,0,0,141,142,1,0,0,0,142,27,1,0,0,0,143,144,5,48,0,0,
  	144,146,3,34,17,0,145,147,5,55,0,0,146,145,1,0,0,0,146,147,1,0,0,0,147,
  	29,1,0,0,0,148,151,3,32,16,0,149,151,3,34,17,0,150,148,1,0,0,0,150,149,
  	1,0,0,0,151,152,1,0,0,0,152,153,5,99,0,0,153,31,1,0,0,0,154,155,7,0,0,
  	0,155,33,1,0,0,0,156,157,7,1,0,0,157,35,1,0,0,0,17,38,43,49,59,70,75,
  	86,99,102,108,113,120,125,129,133,146,150
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  agohyaparserParserStaticData = staticData.release();
}

}

AgohyaParser::AgohyaParser(TokenStream *input) : AgohyaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

AgohyaParser::AgohyaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  AgohyaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *agohyaparserParserStaticData->atn, agohyaparserParserStaticData->decisionToDFA, agohyaparserParserStaticData->sharedContextCache, options);
}

AgohyaParser::~AgohyaParser() {
  delete _interpreter;
}

const atn::ATN& AgohyaParser::getATN() const {
  return *agohyaparserParserStaticData->atn;
}

std::string AgohyaParser::getGrammarFileName() const {
  return "AgohyaParser.g4";
}

const std::vector<std::string>& AgohyaParser::getRuleNames() const {
  return agohyaparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& AgohyaParser::getVocabulary() const {
  return agohyaparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AgohyaParser::getSerializedATN() const {
  return agohyaparserParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

AgohyaParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AgohyaParser::LibDeclContext* AgohyaParser::ProgContext::libDecl() {
  return getRuleContext<AgohyaParser::LibDeclContext>(0);
}

tree::TerminalNode* AgohyaParser::ProgContext::EOF() {
  return getToken(AgohyaParser::EOF, 0);
}

tree::TerminalNode* AgohyaParser::ProgContext::NEWLINE() {
  return getToken(AgohyaParser::NEWLINE, 0);
}

std::vector<AgohyaParser::StatementContext *> AgohyaParser::ProgContext::statement() {
  return getRuleContexts<AgohyaParser::StatementContext>();
}

AgohyaParser::StatementContext* AgohyaParser::ProgContext::statement(size_t i) {
  return getRuleContext<AgohyaParser::StatementContext>(i);
}


size_t AgohyaParser::ProgContext::getRuleIndex() const {
  return AgohyaParser::RuleProg;
}


std::any AgohyaParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::ProgContext* AgohyaParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, AgohyaParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AgohyaParser::LIB: {
        enterOuterAlt(_localctx, 1);
        setState(36);
        libDecl();
        setState(38);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          setState(37);
          match(AgohyaParser::NEWLINE);
          break;
        }

        default:
          break;
        }
        setState(43);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << AgohyaParser::INT)
          | (1ULL << AgohyaParser::DOUBLE)
          | (1ULL << AgohyaParser::BOOL)
          | (1ULL << AgohyaParser::STRING))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (AgohyaParser::IMPORT - 66))
          | (1ULL << (AgohyaParser::IDENTIFIER - 66))
          | (1ULL << (AgohyaParser::NEWLINE - 66)))) != 0)) {
          setState(40);
          statement();
          setState(45);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(46);
        match(AgohyaParser::EOF);
        break;
      }

      case AgohyaParser::EOF: {
        enterOuterAlt(_localctx, 2);
        setState(48);
        match(AgohyaParser::EOF);
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

//----------------- LibDeclContext ------------------------------------------------------------------

AgohyaParser::LibDeclContext::LibDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AgohyaParser::LibDeclContext::LIB() {
  return getToken(AgohyaParser::LIB, 0);
}

tree::TerminalNode* AgohyaParser::LibDeclContext::LIB_LITERAL() {
  return getToken(AgohyaParser::LIB_LITERAL, 0);
}

tree::TerminalNode* AgohyaParser::LibDeclContext::SEMICOLON() {
  return getToken(AgohyaParser::SEMICOLON, 0);
}


size_t AgohyaParser::LibDeclContext::getRuleIndex() const {
  return AgohyaParser::RuleLibDecl;
}


std::any AgohyaParser::LibDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitLibDecl(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::LibDeclContext* AgohyaParser::libDecl() {
  LibDeclContext *_localctx = _tracker.createInstance<LibDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, AgohyaParser::RuleLibDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(AgohyaParser::LIB);
    setState(52);
    match(AgohyaParser::LIB_LITERAL);
    setState(53);
    match(AgohyaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

AgohyaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AgohyaParser::ImportRuleContext* AgohyaParser::StatementContext::importRule() {
  return getRuleContext<AgohyaParser::ImportRuleContext>(0);
}

AgohyaParser::DeclarationContext* AgohyaParser::StatementContext::declaration() {
  return getRuleContext<AgohyaParser::DeclarationContext>(0);
}

AgohyaParser::InitializerContext* AgohyaParser::StatementContext::initializer() {
  return getRuleContext<AgohyaParser::InitializerContext>(0);
}

tree::TerminalNode* AgohyaParser::StatementContext::NEWLINE() {
  return getToken(AgohyaParser::NEWLINE, 0);
}


size_t AgohyaParser::StatementContext::getRuleIndex() const {
  return AgohyaParser::RuleStatement;
}


std::any AgohyaParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::StatementContext* AgohyaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, AgohyaParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(55);
      importRule();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(57);
      initializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(58);
      match(AgohyaParser::NEWLINE);
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

//----------------- ImportRuleContext ------------------------------------------------------------------

AgohyaParser::ImportRuleContext::ImportRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AgohyaParser::ImportRuleContext::IMPORT() {
  return getToken(AgohyaParser::IMPORT, 0);
}

tree::TerminalNode* AgohyaParser::ImportRuleContext::IMPORT_LITERAL() {
  return getToken(AgohyaParser::IMPORT_LITERAL, 0);
}

tree::TerminalNode* AgohyaParser::ImportRuleContext::SEMICOLON() {
  return getToken(AgohyaParser::SEMICOLON, 0);
}


size_t AgohyaParser::ImportRuleContext::getRuleIndex() const {
  return AgohyaParser::RuleImportRule;
}


std::any AgohyaParser::ImportRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitImportRule(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::ImportRuleContext* AgohyaParser::importRule() {
  ImportRuleContext *_localctx = _tracker.createInstance<ImportRuleContext>(_ctx, getState());
  enterRule(_localctx, 6, AgohyaParser::RuleImportRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(AgohyaParser::IMPORT);
    setState(62);
    match(AgohyaParser::IMPORT_LITERAL);
    setState(63);
    match(AgohyaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

AgohyaParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AgohyaParser::VariableDeclarationContext* AgohyaParser::DeclarationContext::variableDeclaration() {
  return getRuleContext<AgohyaParser::VariableDeclarationContext>(0);
}


size_t AgohyaParser::DeclarationContext::getRuleIndex() const {
  return AgohyaParser::RuleDeclaration;
}


std::any AgohyaParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::DeclarationContext* AgohyaParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, AgohyaParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    variableDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

AgohyaParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AgohyaParser::TypeContext* AgohyaParser::VariableDeclarationContext::type() {
  return getRuleContext<AgohyaParser::TypeContext>(0);
}

tree::TerminalNode* AgohyaParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(AgohyaParser::IDENTIFIER, 0);
}

AgohyaParser::InitializerContext* AgohyaParser::VariableDeclarationContext::initializer() {
  return getRuleContext<AgohyaParser::InitializerContext>(0);
}


size_t AgohyaParser::VariableDeclarationContext::getRuleIndex() const {
  return AgohyaParser::RuleVariableDeclaration;
}


std::any AgohyaParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::VariableDeclarationContext* AgohyaParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, AgohyaParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    type();
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(68);
      match(AgohyaParser::IDENTIFIER);
      break;
    }

    case 2: {
      setState(69);
      initializer();
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

//----------------- TypeContext ------------------------------------------------------------------

AgohyaParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AgohyaParser::PrimitiveTypeContext* AgohyaParser::TypeContext::primitiveType() {
  return getRuleContext<AgohyaParser::PrimitiveTypeContext>(0);
}

AgohyaParser::ClassTypeContext* AgohyaParser::TypeContext::classType() {
  return getRuleContext<AgohyaParser::ClassTypeContext>(0);
}

AgohyaParser::NullableTypeContext* AgohyaParser::TypeContext::nullableType() {
  return getRuleContext<AgohyaParser::NullableTypeContext>(0);
}


size_t AgohyaParser::TypeContext::getRuleIndex() const {
  return AgohyaParser::RuleType;
}


std::any AgohyaParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::TypeContext* AgohyaParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, AgohyaParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(72);
      primitiveType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(73);
      classType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(74);
      nullableType();
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

//----------------- InitializerContext ------------------------------------------------------------------

AgohyaParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AgohyaParser::InitializerContext::IDENTIFIER() {
  return getTokens(AgohyaParser::IDENTIFIER);
}

tree::TerminalNode* AgohyaParser::InitializerContext::IDENTIFIER(size_t i) {
  return getToken(AgohyaParser::IDENTIFIER, i);
}

tree::TerminalNode* AgohyaParser::InitializerContext::ASSIGN() {
  return getToken(AgohyaParser::ASSIGN, 0);
}

tree::TerminalNode* AgohyaParser::InitializerContext::SEMICOLON() {
  return getToken(AgohyaParser::SEMICOLON, 0);
}

tree::TerminalNode* AgohyaParser::InitializerContext::INT_LITERAL() {
  return getToken(AgohyaParser::INT_LITERAL, 0);
}

tree::TerminalNode* AgohyaParser::InitializerContext::DOUBLE_LITERAL() {
  return getToken(AgohyaParser::DOUBLE_LITERAL, 0);
}

tree::TerminalNode* AgohyaParser::InitializerContext::HEX_LITERAL() {
  return getToken(AgohyaParser::HEX_LITERAL, 0);
}

tree::TerminalNode* AgohyaParser::InitializerContext::STRING_LITERAL() {
  return getToken(AgohyaParser::STRING_LITERAL, 0);
}

tree::TerminalNode* AgohyaParser::InitializerContext::BOOL_LITERAL() {
  return getToken(AgohyaParser::BOOL_LITERAL, 0);
}

AgohyaParser::NewObjDeclarationContext* AgohyaParser::InitializerContext::newObjDeclaration() {
  return getRuleContext<AgohyaParser::NewObjDeclarationContext>(0);
}

tree::TerminalNode* AgohyaParser::InitializerContext::NULL_LITERAL() {
  return getToken(AgohyaParser::NULL_LITERAL, 0);
}


size_t AgohyaParser::InitializerContext::getRuleIndex() const {
  return AgohyaParser::RuleInitializer;
}


std::any AgohyaParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::InitializerContext* AgohyaParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 14, AgohyaParser::RuleInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      match(AgohyaParser::IDENTIFIER);
      setState(78);
      match(AgohyaParser::ASSIGN);
      setState(86);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case AgohyaParser::IDENTIFIER: {
          setState(79);
          match(AgohyaParser::IDENTIFIER);
          break;
        }

        case AgohyaParser::INT_LITERAL: {
          setState(80);
          match(AgohyaParser::INT_LITERAL);
          break;
        }

        case AgohyaParser::DOUBLE_LITERAL: {
          setState(81);
          match(AgohyaParser::DOUBLE_LITERAL);
          break;
        }

        case AgohyaParser::HEX_LITERAL: {
          setState(82);
          match(AgohyaParser::HEX_LITERAL);
          break;
        }

        case AgohyaParser::STRING_LITERAL: {
          setState(83);
          match(AgohyaParser::STRING_LITERAL);
          break;
        }

        case AgohyaParser::BOOL_LITERAL: {
          setState(84);
          match(AgohyaParser::BOOL_LITERAL);
          break;
        }

        case AgohyaParser::CLASS: {
          setState(85);
          newObjDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(88);
      match(AgohyaParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      match(AgohyaParser::IDENTIFIER);
      setState(90);
      match(AgohyaParser::ASSIGN);
      setState(99);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case AgohyaParser::IDENTIFIER: {
          setState(91);
          match(AgohyaParser::IDENTIFIER);
          break;
        }

        case AgohyaParser::INT_LITERAL: {
          setState(92);
          match(AgohyaParser::INT_LITERAL);
          break;
        }

        case AgohyaParser::DOUBLE_LITERAL: {
          setState(93);
          match(AgohyaParser::DOUBLE_LITERAL);
          break;
        }

        case AgohyaParser::HEX_LITERAL: {
          setState(94);
          match(AgohyaParser::HEX_LITERAL);
          break;
        }

        case AgohyaParser::STRING_LITERAL: {
          setState(95);
          match(AgohyaParser::STRING_LITERAL);
          break;
        }

        case AgohyaParser::BOOL_LITERAL: {
          setState(96);
          match(AgohyaParser::BOOL_LITERAL);
          break;
        }

        case AgohyaParser::NULL_LITERAL: {
          setState(97);
          match(AgohyaParser::NULL_LITERAL);
          break;
        }

        case AgohyaParser::CLASS: {
          setState(98);
          newObjDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(101);
      match(AgohyaParser::SEMICOLON);
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

//----------------- NonPrimitiveTypesContext ------------------------------------------------------------------

AgohyaParser::NonPrimitiveTypesContext::NonPrimitiveTypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AgohyaParser::ClassTypeContext* AgohyaParser::NonPrimitiveTypesContext::classType() {
  return getRuleContext<AgohyaParser::ClassTypeContext>(0);
}

tree::TerminalNode* AgohyaParser::NonPrimitiveTypesContext::QuestionMark() {
  return getToken(AgohyaParser::QuestionMark, 0);
}


size_t AgohyaParser::NonPrimitiveTypesContext::getRuleIndex() const {
  return AgohyaParser::RuleNonPrimitiveTypes;
}


std::any AgohyaParser::NonPrimitiveTypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitNonPrimitiveTypes(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::NonPrimitiveTypesContext* AgohyaParser::nonPrimitiveTypes() {
  NonPrimitiveTypesContext *_localctx = _tracker.createInstance<NonPrimitiveTypesContext>(_ctx, getState());
  enterRule(_localctx, 16, AgohyaParser::RuleNonPrimitiveTypes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      classType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      classType();
      setState(106);
      match(AgohyaParser::QuestionMark);
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

//----------------- TypeListContext ------------------------------------------------------------------

AgohyaParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AgohyaParser::NonPrimitiveTypesContext *> AgohyaParser::TypeListContext::nonPrimitiveTypes() {
  return getRuleContexts<AgohyaParser::NonPrimitiveTypesContext>();
}

AgohyaParser::NonPrimitiveTypesContext* AgohyaParser::TypeListContext::nonPrimitiveTypes(size_t i) {
  return getRuleContext<AgohyaParser::NonPrimitiveTypesContext>(i);
}


size_t AgohyaParser::TypeListContext::getRuleIndex() const {
  return AgohyaParser::RuleTypeList;
}


std::any AgohyaParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitTypeList(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::TypeListContext* AgohyaParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 18, AgohyaParser::RuleTypeList);
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
    setState(111); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(110);
      nonPrimitiveTypes();
      setState(113); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AgohyaParser::STRING || _la == AgohyaParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

AgohyaParser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AgohyaParser::TypeContext *> AgohyaParser::TypeParametersContext::type() {
  return getRuleContexts<AgohyaParser::TypeContext>();
}

AgohyaParser::TypeContext* AgohyaParser::TypeParametersContext::type(size_t i) {
  return getRuleContext<AgohyaParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> AgohyaParser::TypeParametersContext::COMMA() {
  return getTokens(AgohyaParser::COMMA);
}

tree::TerminalNode* AgohyaParser::TypeParametersContext::COMMA(size_t i) {
  return getToken(AgohyaParser::COMMA, i);
}


size_t AgohyaParser::TypeParametersContext::getRuleIndex() const {
  return AgohyaParser::RuleTypeParameters;
}


std::any AgohyaParser::TypeParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameters(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::TypeParametersContext* AgohyaParser::typeParameters() {
  TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 20, AgohyaParser::RuleTypeParameters);
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
    setState(118); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(115);
      type();
      setState(116);
      match(AgohyaParser::COMMA);
      setState(120); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AgohyaParser::INT)
      | (1ULL << AgohyaParser::DOUBLE)
      | (1ULL << AgohyaParser::BOOL)
      | (1ULL << AgohyaParser::STRING))) != 0) || _la == AgohyaParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

AgohyaParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AgohyaParser::ClassDeclarationContext::CLASS() {
  return getToken(AgohyaParser::CLASS, 0);
}

tree::TerminalNode* AgohyaParser::ClassDeclarationContext::IDENTIFIER() {
  return getToken(AgohyaParser::IDENTIFIER, 0);
}

AgohyaParser::ClassBodyContext* AgohyaParser::ClassDeclarationContext::classBody() {
  return getRuleContext<AgohyaParser::ClassBodyContext>(0);
}

AgohyaParser::TypeParametersContext* AgohyaParser::ClassDeclarationContext::typeParameters() {
  return getRuleContext<AgohyaParser::TypeParametersContext>(0);
}

tree::TerminalNode* AgohyaParser::ClassDeclarationContext::EXTENDS() {
  return getToken(AgohyaParser::EXTENDS, 0);
}

std::vector<AgohyaParser::TypeListContext *> AgohyaParser::ClassDeclarationContext::typeList() {
  return getRuleContexts<AgohyaParser::TypeListContext>();
}

AgohyaParser::TypeListContext* AgohyaParser::ClassDeclarationContext::typeList(size_t i) {
  return getRuleContext<AgohyaParser::TypeListContext>(i);
}

tree::TerminalNode* AgohyaParser::ClassDeclarationContext::IMPLEMENTS() {
  return getToken(AgohyaParser::IMPLEMENTS, 0);
}


size_t AgohyaParser::ClassDeclarationContext::getRuleIndex() const {
  return AgohyaParser::RuleClassDeclaration;
}


std::any AgohyaParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::ClassDeclarationContext* AgohyaParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, AgohyaParser::RuleClassDeclaration);
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
    setState(122);
    match(AgohyaParser::CLASS);
    setState(123);
    match(AgohyaParser::IDENTIFIER);
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AgohyaParser::INT)
      | (1ULL << AgohyaParser::DOUBLE)
      | (1ULL << AgohyaParser::BOOL)
      | (1ULL << AgohyaParser::STRING))) != 0) || _la == AgohyaParser::IDENTIFIER) {
      setState(124);
      typeParameters();
    }
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AgohyaParser::EXTENDS) {
      setState(127);
      match(AgohyaParser::EXTENDS);
      setState(128);
      typeList();
    }
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AgohyaParser::IMPLEMENTS) {
      setState(131);
      match(AgohyaParser::IMPLEMENTS);
      setState(132);
      typeList();
    }
    setState(135);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

AgohyaParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AgohyaParser::ClassBodyContext::CURL_BRACK_OPEN() {
  return getTokens(AgohyaParser::CURL_BRACK_OPEN);
}

tree::TerminalNode* AgohyaParser::ClassBodyContext::CURL_BRACK_OPEN(size_t i) {
  return getToken(AgohyaParser::CURL_BRACK_OPEN, i);
}

AgohyaParser::ClassBodyDeclarationContext* AgohyaParser::ClassBodyContext::classBodyDeclaration() {
  return getRuleContext<AgohyaParser::ClassBodyDeclarationContext>(0);
}


size_t AgohyaParser::ClassBodyContext::getRuleIndex() const {
  return AgohyaParser::RuleClassBody;
}


std::any AgohyaParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::ClassBodyContext* AgohyaParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 24, AgohyaParser::RuleClassBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(AgohyaParser::CURL_BRACK_OPEN);
    setState(138);
    classBodyDeclaration();
    setState(139);
    match(AgohyaParser::CURL_BRACK_OPEN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyDeclarationContext ------------------------------------------------------------------

AgohyaParser::ClassBodyDeclarationContext::ClassBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AgohyaParser::ClassBodyDeclarationContext::getRuleIndex() const {
  return AgohyaParser::RuleClassBodyDeclaration;
}


std::any AgohyaParser::ClassBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitClassBodyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::ClassBodyDeclarationContext* AgohyaParser::classBodyDeclaration() {
  ClassBodyDeclarationContext *_localctx = _tracker.createInstance<ClassBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, AgohyaParser::RuleClassBodyDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewObjDeclarationContext ------------------------------------------------------------------

AgohyaParser::NewObjDeclarationContext::NewObjDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AgohyaParser::NewObjDeclarationContext::CLASS() {
  return getToken(AgohyaParser::CLASS, 0);
}

AgohyaParser::ClassTypeContext* AgohyaParser::NewObjDeclarationContext::classType() {
  return getRuleContext<AgohyaParser::ClassTypeContext>(0);
}

tree::TerminalNode* AgohyaParser::NewObjDeclarationContext::EXTENDS() {
  return getToken(AgohyaParser::EXTENDS, 0);
}


size_t AgohyaParser::NewObjDeclarationContext::getRuleIndex() const {
  return AgohyaParser::RuleNewObjDeclaration;
}


std::any AgohyaParser::NewObjDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitNewObjDeclaration(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::NewObjDeclarationContext* AgohyaParser::newObjDeclaration() {
  NewObjDeclarationContext *_localctx = _tracker.createInstance<NewObjDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, AgohyaParser::RuleNewObjDeclaration);
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
    setState(143);
    match(AgohyaParser::CLASS);
    setState(144);
    classType();
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AgohyaParser::EXTENDS) {
      setState(145);
      match(AgohyaParser::EXTENDS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullableTypeContext ------------------------------------------------------------------

AgohyaParser::NullableTypeContext::NullableTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AgohyaParser::NullableTypeContext::QuestionMark() {
  return getToken(AgohyaParser::QuestionMark, 0);
}

AgohyaParser::PrimitiveTypeContext* AgohyaParser::NullableTypeContext::primitiveType() {
  return getRuleContext<AgohyaParser::PrimitiveTypeContext>(0);
}

AgohyaParser::ClassTypeContext* AgohyaParser::NullableTypeContext::classType() {
  return getRuleContext<AgohyaParser::ClassTypeContext>(0);
}


size_t AgohyaParser::NullableTypeContext::getRuleIndex() const {
  return AgohyaParser::RuleNullableType;
}


std::any AgohyaParser::NullableTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitNullableType(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::NullableTypeContext* AgohyaParser::nullableType() {
  NullableTypeContext *_localctx = _tracker.createInstance<NullableTypeContext>(_ctx, getState());
  enterRule(_localctx, 30, AgohyaParser::RuleNullableType);

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
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AgohyaParser::INT:
      case AgohyaParser::DOUBLE:
      case AgohyaParser::BOOL: {
        setState(148);
        primitiveType();
        break;
      }

      case AgohyaParser::STRING:
      case AgohyaParser::IDENTIFIER: {
        setState(149);
        classType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(152);
    match(AgohyaParser::QuestionMark);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

AgohyaParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AgohyaParser::PrimitiveTypeContext::INT() {
  return getToken(AgohyaParser::INT, 0);
}

tree::TerminalNode* AgohyaParser::PrimitiveTypeContext::DOUBLE() {
  return getToken(AgohyaParser::DOUBLE, 0);
}

tree::TerminalNode* AgohyaParser::PrimitiveTypeContext::BOOL() {
  return getToken(AgohyaParser::BOOL, 0);
}


size_t AgohyaParser::PrimitiveTypeContext::getRuleIndex() const {
  return AgohyaParser::RulePrimitiveType;
}


std::any AgohyaParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::PrimitiveTypeContext* AgohyaParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 32, AgohyaParser::RulePrimitiveType);
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
    setState(154);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AgohyaParser::INT)
      | (1ULL << AgohyaParser::DOUBLE)
      | (1ULL << AgohyaParser::BOOL))) != 0))) {
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

//----------------- ClassTypeContext ------------------------------------------------------------------

AgohyaParser::ClassTypeContext::ClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AgohyaParser::ClassTypeContext::STRING() {
  return getToken(AgohyaParser::STRING, 0);
}

tree::TerminalNode* AgohyaParser::ClassTypeContext::IDENTIFIER() {
  return getToken(AgohyaParser::IDENTIFIER, 0);
}


size_t AgohyaParser::ClassTypeContext::getRuleIndex() const {
  return AgohyaParser::RuleClassType;
}


std::any AgohyaParser::ClassTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AgohyaParserVisitor*>(visitor))
    return parserVisitor->visitClassType(this);
  else
    return visitor->visitChildren(this);
}

AgohyaParser::ClassTypeContext* AgohyaParser::classType() {
  ClassTypeContext *_localctx = _tracker.createInstance<ClassTypeContext>(_ctx, getState());
  enterRule(_localctx, 34, AgohyaParser::RuleClassType);
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
    setState(156);
    _la = _input->LA(1);
    if (!(_la == AgohyaParser::STRING || _la == AgohyaParser::IDENTIFIER)) {
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

void AgohyaParser::initialize() {
  std::call_once(agohyaparserParserOnceFlag, agohyaparserParserInitialize);
}

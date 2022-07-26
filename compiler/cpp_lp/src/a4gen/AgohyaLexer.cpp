
// Generated from AgohyaLexer.g4 by ANTLR 4.10.1


#include "AgohyaLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct AgohyaLexerStaticData final {
  AgohyaLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AgohyaLexerStaticData(const AgohyaLexerStaticData&) = delete;
  AgohyaLexerStaticData(AgohyaLexerStaticData&&) = delete;
  AgohyaLexerStaticData& operator=(const AgohyaLexerStaticData&) = delete;
  AgohyaLexerStaticData& operator=(AgohyaLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag agohyalexerLexerOnceFlag;
AgohyaLexerStaticData *agohyalexerLexerStaticData = nullptr;

void agohyalexerLexerInitialize() {
  assert(agohyalexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<AgohyaLexerStaticData>(
    std::vector<std::string>{
      "NON_CLASS_MODIFIER", "PRIMITIVE_TYPES", "OTHER_BUILT_IN_TYPES", "INT", 
      "DOUBLE", "BOOL", "STRING", "OBJECT", "FUNCTION", "PLUS", "MINUS", 
      "MULTIPLY", "DIVIDE", "MODULUS", "AND", "ASSIGN", "EQUALS", "NOT_EQUALS", 
      "NOT", "MUST_NOT_BE_NULL", "NULL_THEN_EVAL_TO_NULL", "IF_NULL_THEN_ASSIGN", 
      "LAMBDA_FUNC_IDENTIFIER", "OR", "IN", "LESS_THAN", "GREATER_THAN", 
      "GREATER_THAN_EQUALS", "LESS_THAN_EQUALS", "INCREMENT", "DECREMENT", 
      "PLUS_EQUALS", "MINUS_EQUALS", "MULTIPLY_EQUALS", "DIVIDE_EQUALS", 
      "MODULUS_EQUALS", "SQR_BRACK_OPEN", "SQR_BRACK_CLOSE", "CURL_BRACK_OPEN", 
      "CURL_BRACK_CLOSE", "PAREN_OPEN", "PAREN_CLOSE", "NULLABLE_TYPE_IDENTIFIER", 
      "ANNOTATION", "AT", "ABSTRACT", "AS", "ASSERT", "ASYNC", "AWAIT", 
      "BREAK", "CASE", "CATCH", "CLASS", "CONST", "CONTINUE", "DEFAULT", 
      "DO", "ELSE", "ENUM", "EXTENDS_OR_EXTENSION_OF", "EXTERNAL", "FACTORY", 
      "FALSE", "FINAL", "FINALLY", "FOR", "IF", "IMPLEMENTS", "IMPORT", 
      "IS", "LET", "LIB", "NEW", "ON", "OPERATOR", "PRIVATE", "PUBLIC", 
      "RETURN", "STATIC", "SUPER", "SWITCH", "THIS", "THROW", "TRUE", "TRY", 
      "TYPEDEF", "VISIBILITY_MODIFIERS", "VOID", "WHILE", "WHITESPACE", 
      "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "LITERAL", "BOOL_LITERAL", 
      "DOUBLE_LITERAL", "HEX_LITERAL", "INT_LITERAL", "NULL_LITERAL", "STRING_LITERAL", 
      "LIB_OR_IMPORT_LITERAL", "CAPITAL_LETTER", "IDENTIFIER", "NEWLINE", 
      "Underscore", "Dollar", "QuestionMark", "COMMA", "Dot", "COLON", "SEMICOLON", 
      "EscapeSequence", "HexDigits", "Digits", "Letters", "LetterOrDigit", 
      "UnicodeLetter", "Letter", "Digit", "HexDigit"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "'int'", "'double'", "'bool'", "'String'", "'OBJECT'", 
      "'Function'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&&'", "'='", "'=='", 
      "'!='", "'!'", "'!.'", "'\\u003F.'", "'\\u003F\\u003F='", "'=>'", 
      "'||'", "", "'<'", "'>'", "'>='", "'<='", "'++'", "'--'", "'+='", 
      "'-='", "'*='", "'/='", "'%='", "'['", "']'", "'{'", "'}'", "'('", 
      "')'", "", "'annotation'", "'@'", "'abstract'", "'as'", "'assert'", 
      "'async'", "'await'", "'break'", "'case'", "'catch'", "'class'", "'const'", 
      "'continue'", "'default'", "'do'", "'else'", "'enum'", "", "'external'", 
      "'factory'", "'false'", "'final'", "'finally'", "'for'", "'if'", "'implements'", 
      "'import'", "'is'", "'let'", "'lib'", "'new'", "'on'", "'operator'", 
      "'private'", "'public'", "'return'", "'static'", "'super'", "'switch'", 
      "'this'", "'throw'", "'true'", "'try'", "'typedef'", "", "'void'", 
      "'while'", "", "", "", "", "", "", "", "", "'null'", "", "", "", "", 
      "", "'_'", "'$'", "'\\u003F'", "','", "'.'", "':'", "';'"
    },
    std::vector<std::string>{
      "", "NON_CLASS_MODIFIER", "PRIMITIVE_TYPES", "OTHER_BUILT_IN_TYPES", 
      "INT", "DOUBLE", "BOOL", "STRING", "OBJECT", "FUNCTION", "PLUS", "MINUS", 
      "MULTIPLY", "DIVIDE", "MODULUS", "AND", "ASSIGN", "EQUALS", "NOT_EQUALS", 
      "NOT", "MUST_NOT_BE_NULL", "NULL_THEN_EVAL_TO_NULL", "IF_NULL_THEN_ASSIGN", 
      "LAMBDA_FUNC_IDENTIFIER", "OR", "IN", "LESS_THAN", "GREATER_THAN", 
      "GREATER_THAN_EQUALS", "LESS_THAN_EQUALS", "INCREMENT", "DECREMENT", 
      "PLUS_EQUALS", "MINUS_EQUALS", "MULTIPLY_EQUALS", "DIVIDE_EQUALS", 
      "MODULUS_EQUALS", "SQR_BRACK_OPEN", "SQR_BRACK_CLOSE", "CURL_BRACK_OPEN", 
      "CURL_BRACK_CLOSE", "PAREN_OPEN", "PAREN_CLOSE", "NULLABLE_TYPE_IDENTIFIER", 
      "ANNOTATION", "AT", "ABSTRACT", "AS", "ASSERT", "ASYNC", "AWAIT", 
      "BREAK", "CASE", "CATCH", "CLASS", "CONST", "CONTINUE", "DEFAULT", 
      "DO", "ELSE", "ENUM", "EXTENDS_OR_EXTENSION_OF", "EXTERNAL", "FACTORY", 
      "FALSE", "FINAL", "FINALLY", "FOR", "IF", "IMPLEMENTS", "IMPORT", 
      "IS", "LET", "LIB", "NEW", "ON", "OPERATOR", "PRIVATE", "PUBLIC", 
      "RETURN", "STATIC", "SUPER", "SWITCH", "THIS", "THROW", "TRUE", "TRY", 
      "TYPEDEF", "VISIBILITY_MODIFIERS", "VOID", "WHILE", "WHITESPACE", 
      "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "LITERAL", "BOOL_LITERAL", 
      "DOUBLE_LITERAL", "HEX_LITERAL", "INT_LITERAL", "NULL_LITERAL", "STRING_LITERAL", 
      "LIB_OR_IMPORT_LITERAL", "CAPITAL_LETTER", "IDENTIFIER", "NEWLINE", 
      "Underscore", "Dollar", "QuestionMark", "COMMA", "Dot", "COLON", "SEMICOLON", 
      "HexDigits", "Digits"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,113,830,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,
  	7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,
  	14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,
  	21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,
  	28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,
  	35,7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,
  	42,7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,
  	49,7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,
  	56,7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,
  	63,7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,
  	70,7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,
  	77,7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,
  	84,7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,
  	91,7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,
  	98,7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,2,112,7,112,2,113,7,113,2,114,7,114,2,115,7,115,2,116,
  	7,116,2,117,7,117,2,118,7,118,2,119,7,119,1,0,1,0,1,0,1,0,3,0,246,8,0,
  	1,1,1,1,1,1,3,1,251,8,1,1,2,1,2,1,2,3,2,256,8,2,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,
  	9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,
  	16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,
  	21,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,
  	26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,30,1,
  	31,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,34,1,35,1,35,1,
  	35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,
  	42,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,44,1,44,1,
  	45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,46,1,46,1,46,1,47,1,47,1,
  	47,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,48,1,48,1,49,1,49,1,49,1,
  	49,1,49,1,49,1,50,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,51,1,51,1,51,1,
  	52,1,52,1,52,1,52,1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,53,1,54,1,54,1,
  	54,1,54,1,54,1,54,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,56,1,
  	56,1,56,1,56,1,56,1,56,1,56,1,56,1,57,1,57,1,57,1,58,1,58,1,58,1,58,1,
  	58,1,59,1,59,1,59,1,59,1,59,1,60,1,60,1,61,1,61,1,61,1,61,1,61,1,61,1,
  	61,1,61,1,61,1,62,1,62,1,62,1,62,1,62,1,62,1,62,1,62,1,63,1,63,1,63,1,
  	63,1,63,1,63,1,64,1,64,1,64,1,64,1,64,1,64,1,65,1,65,1,65,1,65,1,65,1,
  	65,1,65,1,65,1,66,1,66,1,66,1,66,1,67,1,67,1,67,1,68,1,68,1,68,1,68,1,
  	68,1,68,1,68,1,68,1,68,1,68,1,68,1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,
  	70,1,70,1,70,1,71,1,71,1,71,1,71,1,72,1,72,1,72,1,72,1,73,1,73,1,73,1,
  	73,1,74,1,74,1,74,1,75,1,75,1,75,1,75,1,75,1,75,1,75,1,75,1,75,1,76,1,
  	76,1,76,1,76,1,76,1,76,1,76,1,76,1,77,1,77,1,77,1,77,1,77,1,77,1,77,1,
  	78,1,78,1,78,1,78,1,78,1,78,1,78,1,79,1,79,1,79,1,79,1,79,1,79,1,79,1,
  	80,1,80,1,80,1,80,1,80,1,80,1,81,1,81,1,81,1,81,1,81,1,81,1,81,1,82,1,
  	82,1,82,1,82,1,82,1,83,1,83,1,83,1,83,1,83,1,83,1,84,1,84,1,84,1,84,1,
  	84,1,85,1,85,1,85,1,85,1,86,1,86,1,86,1,86,1,86,1,86,1,86,1,86,1,87,1,
  	87,3,87,649,8,87,1,88,1,88,1,88,1,88,1,88,1,89,1,89,1,89,1,89,1,89,1,
  	89,1,90,1,90,1,90,4,90,665,8,90,11,90,12,90,666,1,90,1,90,1,91,1,91,1,
  	91,1,91,5,91,675,8,91,10,91,12,91,678,9,91,1,91,1,91,1,92,1,92,1,92,1,
  	92,1,92,5,92,687,8,92,10,92,12,92,690,9,92,1,92,1,92,1,92,1,92,1,92,1,
  	93,1,93,1,93,1,93,1,93,3,93,702,8,93,1,94,1,94,3,94,706,8,94,1,95,3,95,
  	709,8,95,1,95,1,95,1,95,1,95,1,95,3,95,716,8,95,1,95,1,95,3,95,720,8,
  	95,1,96,1,96,1,96,1,96,1,97,3,97,727,8,97,1,97,1,97,1,98,1,98,1,98,1,
  	98,1,98,1,99,1,99,1,99,3,99,739,8,99,1,99,1,99,1,99,1,99,3,99,745,8,99,
  	1,99,3,99,748,8,99,1,100,1,100,3,100,752,8,100,1,101,1,101,1,102,1,102,
  	1,102,5,102,759,8,102,10,102,12,102,762,9,102,1,103,1,103,1,104,1,104,
  	1,105,1,105,1,106,1,106,1,107,1,107,1,108,1,108,1,109,1,109,1,110,1,110,
  	1,111,1,111,1,111,1,111,3,111,784,8,111,1,111,3,111,787,8,111,1,111,1,
  	111,1,111,3,111,792,8,111,1,112,1,112,5,112,796,8,112,10,112,12,112,799,
  	9,112,1,113,4,113,802,8,113,11,113,12,113,803,1,114,4,114,807,8,114,11,
  	114,12,114,808,1,115,1,115,3,115,813,8,115,1,116,4,116,816,8,116,11,116,
  	12,116,817,1,116,1,116,1,116,1,116,1,116,1,117,1,117,1,118,1,118,1,119,
  	1,119,1,688,0,120,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,
  	23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,
  	69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,91,
  	46,93,47,95,48,97,49,99,50,101,51,103,52,105,53,107,54,109,55,111,56,
  	113,57,115,58,117,59,119,60,121,61,123,62,125,63,127,64,129,65,131,66,
  	133,67,135,68,137,69,139,70,141,71,143,72,145,73,147,74,149,75,151,76,
  	153,77,155,78,157,79,159,80,161,81,163,82,165,83,167,84,169,85,171,86,
  	173,87,175,88,177,89,179,90,181,91,183,92,185,93,187,94,189,95,191,96,
  	193,97,195,98,197,99,199,100,201,101,203,102,205,103,207,104,209,105,
  	211,106,213,107,215,108,217,109,219,110,221,111,223,0,225,112,227,113,
  	229,0,231,0,233,0,235,0,237,0,239,0,1,0,12,2,0,9,9,32,32,2,0,10,10,13,
  	13,1,0,45,45,2,0,88,88,120,120,4,0,10,10,13,13,39,39,92,92,1,0,65,90,
  	8,0,34,34,39,39,92,92,98,98,102,102,110,110,114,114,116,116,1,0,48,51,
  	1,0,48,55,2,0,65,90,97,122,1,0,48,57,3,0,48,57,65,70,97,102,859,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,
  	0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,
  	45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,
  	0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,
  	0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,
  	77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,
  	0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,
  	0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,
  	0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,
  	0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,127,1,0,0,
  	0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,0,137,1,0,0,
  	0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,0,147,1,0,0,
  	0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,157,1,0,0,
  	0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,167,1,0,0,
  	0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,0,177,1,0,0,
  	0,0,179,1,0,0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,0,187,1,0,0,
  	0,0,189,1,0,0,0,0,191,1,0,0,0,0,193,1,0,0,0,0,195,1,0,0,0,0,197,1,0,0,
  	0,0,199,1,0,0,0,0,201,1,0,0,0,0,203,1,0,0,0,0,205,1,0,0,0,0,207,1,0,0,
  	0,0,209,1,0,0,0,0,211,1,0,0,0,0,213,1,0,0,0,0,215,1,0,0,0,0,217,1,0,0,
  	0,0,219,1,0,0,0,0,221,1,0,0,0,0,225,1,0,0,0,0,227,1,0,0,0,1,245,1,0,0,
  	0,3,250,1,0,0,0,5,255,1,0,0,0,7,257,1,0,0,0,9,261,1,0,0,0,11,268,1,0,
  	0,0,13,273,1,0,0,0,15,280,1,0,0,0,17,287,1,0,0,0,19,296,1,0,0,0,21,298,
  	1,0,0,0,23,300,1,0,0,0,25,302,1,0,0,0,27,304,1,0,0,0,29,306,1,0,0,0,31,
  	309,1,0,0,0,33,311,1,0,0,0,35,314,1,0,0,0,37,317,1,0,0,0,39,319,1,0,0,
  	0,41,322,1,0,0,0,43,325,1,0,0,0,45,329,1,0,0,0,47,332,1,0,0,0,49,335,
  	1,0,0,0,51,337,1,0,0,0,53,339,1,0,0,0,55,341,1,0,0,0,57,344,1,0,0,0,59,
  	347,1,0,0,0,61,350,1,0,0,0,63,353,1,0,0,0,65,356,1,0,0,0,67,359,1,0,0,
  	0,69,362,1,0,0,0,71,365,1,0,0,0,73,368,1,0,0,0,75,370,1,0,0,0,77,372,
  	1,0,0,0,79,374,1,0,0,0,81,376,1,0,0,0,83,378,1,0,0,0,85,380,1,0,0,0,87,
  	382,1,0,0,0,89,393,1,0,0,0,91,395,1,0,0,0,93,404,1,0,0,0,95,407,1,0,0,
  	0,97,414,1,0,0,0,99,420,1,0,0,0,101,426,1,0,0,0,103,432,1,0,0,0,105,437,
  	1,0,0,0,107,443,1,0,0,0,109,449,1,0,0,0,111,455,1,0,0,0,113,464,1,0,0,
  	0,115,472,1,0,0,0,117,475,1,0,0,0,119,480,1,0,0,0,121,485,1,0,0,0,123,
  	487,1,0,0,0,125,496,1,0,0,0,127,504,1,0,0,0,129,510,1,0,0,0,131,516,1,
  	0,0,0,133,524,1,0,0,0,135,528,1,0,0,0,137,531,1,0,0,0,139,542,1,0,0,0,
  	141,549,1,0,0,0,143,552,1,0,0,0,145,556,1,0,0,0,147,560,1,0,0,0,149,564,
  	1,0,0,0,151,567,1,0,0,0,153,576,1,0,0,0,155,584,1,0,0,0,157,591,1,0,0,
  	0,159,598,1,0,0,0,161,605,1,0,0,0,163,611,1,0,0,0,165,618,1,0,0,0,167,
  	623,1,0,0,0,169,629,1,0,0,0,171,634,1,0,0,0,173,638,1,0,0,0,175,648,1,
  	0,0,0,177,650,1,0,0,0,179,655,1,0,0,0,181,664,1,0,0,0,183,670,1,0,0,0,
  	185,681,1,0,0,0,187,701,1,0,0,0,189,705,1,0,0,0,191,719,1,0,0,0,193,721,
  	1,0,0,0,195,726,1,0,0,0,197,730,1,0,0,0,199,747,1,0,0,0,201,751,1,0,0,
  	0,203,753,1,0,0,0,205,755,1,0,0,0,207,763,1,0,0,0,209,765,1,0,0,0,211,
  	767,1,0,0,0,213,769,1,0,0,0,215,771,1,0,0,0,217,773,1,0,0,0,219,775,1,
  	0,0,0,221,777,1,0,0,0,223,791,1,0,0,0,225,793,1,0,0,0,227,801,1,0,0,0,
  	229,806,1,0,0,0,231,812,1,0,0,0,233,815,1,0,0,0,235,824,1,0,0,0,237,826,
  	1,0,0,0,239,828,1,0,0,0,241,246,3,159,79,0,242,246,3,129,64,0,243,246,
  	3,153,76,0,244,246,3,155,77,0,245,241,1,0,0,0,245,242,1,0,0,0,245,243,
  	1,0,0,0,245,244,1,0,0,0,246,2,1,0,0,0,247,251,3,7,3,0,248,251,3,9,4,0,
  	249,251,3,11,5,0,250,247,1,0,0,0,250,248,1,0,0,0,250,249,1,0,0,0,251,
  	4,1,0,0,0,252,256,3,13,6,0,253,256,3,15,7,0,254,256,3,17,8,0,255,252,
  	1,0,0,0,255,253,1,0,0,0,255,254,1,0,0,0,256,6,1,0,0,0,257,258,5,105,0,
  	0,258,259,5,110,0,0,259,260,5,116,0,0,260,8,1,0,0,0,261,262,5,100,0,0,
  	262,263,5,111,0,0,263,264,5,117,0,0,264,265,5,98,0,0,265,266,5,108,0,
  	0,266,267,5,101,0,0,267,10,1,0,0,0,268,269,5,98,0,0,269,270,5,111,0,0,
  	270,271,5,111,0,0,271,272,5,108,0,0,272,12,1,0,0,0,273,274,5,83,0,0,274,
  	275,5,116,0,0,275,276,5,114,0,0,276,277,5,105,0,0,277,278,5,110,0,0,278,
  	279,5,103,0,0,279,14,1,0,0,0,280,281,5,79,0,0,281,282,5,66,0,0,282,283,
  	5,74,0,0,283,284,5,69,0,0,284,285,5,67,0,0,285,286,5,84,0,0,286,16,1,
  	0,0,0,287,288,5,70,0,0,288,289,5,117,0,0,289,290,5,110,0,0,290,291,5,
  	99,0,0,291,292,5,116,0,0,292,293,5,105,0,0,293,294,5,111,0,0,294,295,
  	5,110,0,0,295,18,1,0,0,0,296,297,5,43,0,0,297,20,1,0,0,0,298,299,5,45,
  	0,0,299,22,1,0,0,0,300,301,5,42,0,0,301,24,1,0,0,0,302,303,5,47,0,0,303,
  	26,1,0,0,0,304,305,5,37,0,0,305,28,1,0,0,0,306,307,5,38,0,0,307,308,5,
  	38,0,0,308,30,1,0,0,0,309,310,5,61,0,0,310,32,1,0,0,0,311,312,5,61,0,
  	0,312,313,5,61,0,0,313,34,1,0,0,0,314,315,5,33,0,0,315,316,5,61,0,0,316,
  	36,1,0,0,0,317,318,5,33,0,0,318,38,1,0,0,0,319,320,5,33,0,0,320,321,5,
  	46,0,0,321,40,1,0,0,0,322,323,5,63,0,0,323,324,5,46,0,0,324,42,1,0,0,
  	0,325,326,5,63,0,0,326,327,5,63,0,0,327,328,5,61,0,0,328,44,1,0,0,0,329,
  	330,5,61,0,0,330,331,5,62,0,0,331,46,1,0,0,0,332,333,5,124,0,0,333,334,
  	5,124,0,0,334,48,1,0,0,0,335,336,3,219,109,0,336,50,1,0,0,0,337,338,5,
  	60,0,0,338,52,1,0,0,0,339,340,5,62,0,0,340,54,1,0,0,0,341,342,5,62,0,
  	0,342,343,5,61,0,0,343,56,1,0,0,0,344,345,5,60,0,0,345,346,5,61,0,0,346,
  	58,1,0,0,0,347,348,5,43,0,0,348,349,5,43,0,0,349,60,1,0,0,0,350,351,5,
  	45,0,0,351,352,5,45,0,0,352,62,1,0,0,0,353,354,5,43,0,0,354,355,5,61,
  	0,0,355,64,1,0,0,0,356,357,5,45,0,0,357,358,5,61,0,0,358,66,1,0,0,0,359,
  	360,5,42,0,0,360,361,5,61,0,0,361,68,1,0,0,0,362,363,5,47,0,0,363,364,
  	5,61,0,0,364,70,1,0,0,0,365,366,5,37,0,0,366,367,5,61,0,0,367,72,1,0,
  	0,0,368,369,5,91,0,0,369,74,1,0,0,0,370,371,5,93,0,0,371,76,1,0,0,0,372,
  	373,5,123,0,0,373,78,1,0,0,0,374,375,5,125,0,0,375,80,1,0,0,0,376,377,
  	5,40,0,0,377,82,1,0,0,0,378,379,5,41,0,0,379,84,1,0,0,0,380,381,3,213,
  	106,0,381,86,1,0,0,0,382,383,5,97,0,0,383,384,5,110,0,0,384,385,5,110,
  	0,0,385,386,5,111,0,0,386,387,5,116,0,0,387,388,5,97,0,0,388,389,5,116,
  	0,0,389,390,5,105,0,0,390,391,5,111,0,0,391,392,5,110,0,0,392,88,1,0,
  	0,0,393,394,5,64,0,0,394,90,1,0,0,0,395,396,5,97,0,0,396,397,5,98,0,0,
  	397,398,5,115,0,0,398,399,5,116,0,0,399,400,5,114,0,0,400,401,5,97,0,
  	0,401,402,5,99,0,0,402,403,5,116,0,0,403,92,1,0,0,0,404,405,5,97,0,0,
  	405,406,5,115,0,0,406,94,1,0,0,0,407,408,5,97,0,0,408,409,5,115,0,0,409,
  	410,5,115,0,0,410,411,5,101,0,0,411,412,5,114,0,0,412,413,5,116,0,0,413,
  	96,1,0,0,0,414,415,5,97,0,0,415,416,5,115,0,0,416,417,5,121,0,0,417,418,
  	5,110,0,0,418,419,5,99,0,0,419,98,1,0,0,0,420,421,5,97,0,0,421,422,5,
  	119,0,0,422,423,5,97,0,0,423,424,5,105,0,0,424,425,5,116,0,0,425,100,
  	1,0,0,0,426,427,5,98,0,0,427,428,5,114,0,0,428,429,5,101,0,0,429,430,
  	5,97,0,0,430,431,5,107,0,0,431,102,1,0,0,0,432,433,5,99,0,0,433,434,5,
  	97,0,0,434,435,5,115,0,0,435,436,5,101,0,0,436,104,1,0,0,0,437,438,5,
  	99,0,0,438,439,5,97,0,0,439,440,5,116,0,0,440,441,5,99,0,0,441,442,5,
  	104,0,0,442,106,1,0,0,0,443,444,5,99,0,0,444,445,5,108,0,0,445,446,5,
  	97,0,0,446,447,5,115,0,0,447,448,5,115,0,0,448,108,1,0,0,0,449,450,5,
  	99,0,0,450,451,5,111,0,0,451,452,5,110,0,0,452,453,5,115,0,0,453,454,
  	5,116,0,0,454,110,1,0,0,0,455,456,5,99,0,0,456,457,5,111,0,0,457,458,
  	5,110,0,0,458,459,5,116,0,0,459,460,5,105,0,0,460,461,5,110,0,0,461,462,
  	5,117,0,0,462,463,5,101,0,0,463,112,1,0,0,0,464,465,5,100,0,0,465,466,
  	5,101,0,0,466,467,5,102,0,0,467,468,5,97,0,0,468,469,5,117,0,0,469,470,
  	5,108,0,0,470,471,5,116,0,0,471,114,1,0,0,0,472,473,5,100,0,0,473,474,
  	5,111,0,0,474,116,1,0,0,0,475,476,5,101,0,0,476,477,5,108,0,0,477,478,
  	5,115,0,0,478,479,5,101,0,0,479,118,1,0,0,0,480,481,5,101,0,0,481,482,
  	5,110,0,0,482,483,5,117,0,0,483,484,5,109,0,0,484,120,1,0,0,0,485,486,
  	3,219,109,0,486,122,1,0,0,0,487,488,5,101,0,0,488,489,5,120,0,0,489,490,
  	5,116,0,0,490,491,5,101,0,0,491,492,5,114,0,0,492,493,5,110,0,0,493,494,
  	5,97,0,0,494,495,5,108,0,0,495,124,1,0,0,0,496,497,5,102,0,0,497,498,
  	5,97,0,0,498,499,5,99,0,0,499,500,5,116,0,0,500,501,5,111,0,0,501,502,
  	5,114,0,0,502,503,5,121,0,0,503,126,1,0,0,0,504,505,5,102,0,0,505,506,
  	5,97,0,0,506,507,5,108,0,0,507,508,5,115,0,0,508,509,5,101,0,0,509,128,
  	1,0,0,0,510,511,5,102,0,0,511,512,5,105,0,0,512,513,5,110,0,0,513,514,
  	5,97,0,0,514,515,5,108,0,0,515,130,1,0,0,0,516,517,5,102,0,0,517,518,
  	5,105,0,0,518,519,5,110,0,0,519,520,5,97,0,0,520,521,5,108,0,0,521,522,
  	5,108,0,0,522,523,5,121,0,0,523,132,1,0,0,0,524,525,5,102,0,0,525,526,
  	5,111,0,0,526,527,5,114,0,0,527,134,1,0,0,0,528,529,5,105,0,0,529,530,
  	5,102,0,0,530,136,1,0,0,0,531,532,5,105,0,0,532,533,5,109,0,0,533,534,
  	5,112,0,0,534,535,5,108,0,0,535,536,5,101,0,0,536,537,5,109,0,0,537,538,
  	5,101,0,0,538,539,5,110,0,0,539,540,5,116,0,0,540,541,5,115,0,0,541,138,
  	1,0,0,0,542,543,5,105,0,0,543,544,5,109,0,0,544,545,5,112,0,0,545,546,
  	5,111,0,0,546,547,5,114,0,0,547,548,5,116,0,0,548,140,1,0,0,0,549,550,
  	5,105,0,0,550,551,5,115,0,0,551,142,1,0,0,0,552,553,5,108,0,0,553,554,
  	5,101,0,0,554,555,5,116,0,0,555,144,1,0,0,0,556,557,5,108,0,0,557,558,
  	5,105,0,0,558,559,5,98,0,0,559,146,1,0,0,0,560,561,5,110,0,0,561,562,
  	5,101,0,0,562,563,5,119,0,0,563,148,1,0,0,0,564,565,5,111,0,0,565,566,
  	5,110,0,0,566,150,1,0,0,0,567,568,5,111,0,0,568,569,5,112,0,0,569,570,
  	5,101,0,0,570,571,5,114,0,0,571,572,5,97,0,0,572,573,5,116,0,0,573,574,
  	5,111,0,0,574,575,5,114,0,0,575,152,1,0,0,0,576,577,5,112,0,0,577,578,
  	5,114,0,0,578,579,5,105,0,0,579,580,5,118,0,0,580,581,5,97,0,0,581,582,
  	5,116,0,0,582,583,5,101,0,0,583,154,1,0,0,0,584,585,5,112,0,0,585,586,
  	5,117,0,0,586,587,5,98,0,0,587,588,5,108,0,0,588,589,5,105,0,0,589,590,
  	5,99,0,0,590,156,1,0,0,0,591,592,5,114,0,0,592,593,5,101,0,0,593,594,
  	5,116,0,0,594,595,5,117,0,0,595,596,5,114,0,0,596,597,5,110,0,0,597,158,
  	1,0,0,0,598,599,5,115,0,0,599,600,5,116,0,0,600,601,5,97,0,0,601,602,
  	5,116,0,0,602,603,5,105,0,0,603,604,5,99,0,0,604,160,1,0,0,0,605,606,
  	5,115,0,0,606,607,5,117,0,0,607,608,5,112,0,0,608,609,5,101,0,0,609,610,
  	5,114,0,0,610,162,1,0,0,0,611,612,5,115,0,0,612,613,5,119,0,0,613,614,
  	5,105,0,0,614,615,5,116,0,0,615,616,5,99,0,0,616,617,5,104,0,0,617,164,
  	1,0,0,0,618,619,5,116,0,0,619,620,5,104,0,0,620,621,5,105,0,0,621,622,
  	5,115,0,0,622,166,1,0,0,0,623,624,5,116,0,0,624,625,5,104,0,0,625,626,
  	5,114,0,0,626,627,5,111,0,0,627,628,5,119,0,0,628,168,1,0,0,0,629,630,
  	5,116,0,0,630,631,5,114,0,0,631,632,5,117,0,0,632,633,5,101,0,0,633,170,
  	1,0,0,0,634,635,5,116,0,0,635,636,5,114,0,0,636,637,5,121,0,0,637,172,
  	1,0,0,0,638,639,5,116,0,0,639,640,5,121,0,0,640,641,5,112,0,0,641,642,
  	5,101,0,0,642,643,5,100,0,0,643,644,5,101,0,0,644,645,5,102,0,0,645,174,
  	1,0,0,0,646,649,3,155,77,0,647,649,3,153,76,0,648,646,1,0,0,0,648,647,
  	1,0,0,0,649,176,1,0,0,0,650,651,5,118,0,0,651,652,5,111,0,0,652,653,5,
  	105,0,0,653,654,5,100,0,0,654,178,1,0,0,0,655,656,5,119,0,0,656,657,5,
  	104,0,0,657,658,5,105,0,0,658,659,5,108,0,0,659,660,5,101,0,0,660,180,
  	1,0,0,0,661,665,7,0,0,0,662,663,5,10,0,0,663,665,5,13,0,0,664,661,1,0,
  	0,0,664,662,1,0,0,0,665,666,1,0,0,0,666,664,1,0,0,0,666,667,1,0,0,0,667,
  	668,1,0,0,0,668,669,6,90,0,0,669,182,1,0,0,0,670,671,5,47,0,0,671,672,
  	5,47,0,0,672,676,1,0,0,0,673,675,8,1,0,0,674,673,1,0,0,0,675,678,1,0,
  	0,0,676,674,1,0,0,0,676,677,1,0,0,0,677,679,1,0,0,0,678,676,1,0,0,0,679,
  	680,6,91,0,0,680,184,1,0,0,0,681,682,5,47,0,0,682,683,5,42,0,0,683,688,
  	1,0,0,0,684,687,3,185,92,0,685,687,9,0,0,0,686,684,1,0,0,0,686,685,1,
  	0,0,0,687,690,1,0,0,0,688,689,1,0,0,0,688,686,1,0,0,0,689,691,1,0,0,0,
  	690,688,1,0,0,0,691,692,5,42,0,0,692,693,5,47,0,0,693,694,1,0,0,0,694,
  	695,6,92,0,0,695,186,1,0,0,0,696,702,3,189,94,0,697,702,3,191,95,0,698,
  	702,3,193,96,0,699,702,3,195,97,0,700,702,3,199,99,0,701,696,1,0,0,0,
  	701,697,1,0,0,0,701,698,1,0,0,0,701,699,1,0,0,0,701,700,1,0,0,0,702,188,
  	1,0,0,0,703,706,3,169,84,0,704,706,3,127,63,0,705,703,1,0,0,0,705,704,
  	1,0,0,0,706,190,1,0,0,0,707,709,7,2,0,0,708,707,1,0,0,0,708,709,1,0,0,
  	0,709,710,1,0,0,0,710,711,3,227,113,0,711,712,5,46,0,0,712,713,3,227,
  	113,0,713,720,1,0,0,0,714,716,7,2,0,0,715,714,1,0,0,0,715,716,1,0,0,0,
  	716,717,1,0,0,0,717,718,5,46,0,0,718,720,3,227,113,0,719,708,1,0,0,0,
  	719,715,1,0,0,0,720,192,1,0,0,0,721,722,5,48,0,0,722,723,7,3,0,0,723,
  	724,3,225,112,0,724,194,1,0,0,0,725,727,7,2,0,0,726,725,1,0,0,0,726,727,
  	1,0,0,0,727,728,1,0,0,0,728,729,3,227,113,0,729,196,1,0,0,0,730,731,5,
  	110,0,0,731,732,5,117,0,0,732,733,5,108,0,0,733,734,5,108,0,0,734,198,
  	1,0,0,0,735,738,5,39,0,0,736,739,8,4,0,0,737,739,3,223,111,0,738,736,
  	1,0,0,0,738,737,1,0,0,0,739,740,1,0,0,0,740,748,5,39,0,0,741,744,5,34,
  	0,0,742,745,8,4,0,0,743,745,3,223,111,0,744,742,1,0,0,0,744,743,1,0,0,
  	0,745,746,1,0,0,0,746,748,5,34,0,0,747,735,1,0,0,0,747,741,1,0,0,0,748,
  	200,1,0,0,0,749,752,3,205,102,0,750,752,3,217,108,0,751,749,1,0,0,0,751,
  	750,1,0,0,0,752,202,1,0,0,0,753,754,7,5,0,0,754,204,1,0,0,0,755,760,3,
  	235,117,0,756,759,3,231,115,0,757,759,5,95,0,0,758,756,1,0,0,0,758,757,
  	1,0,0,0,759,762,1,0,0,0,760,758,1,0,0,0,760,761,1,0,0,0,761,206,1,0,0,
  	0,762,760,1,0,0,0,763,764,7,1,0,0,764,208,1,0,0,0,765,766,5,95,0,0,766,
  	210,1,0,0,0,767,768,5,36,0,0,768,212,1,0,0,0,769,770,5,63,0,0,770,214,
  	1,0,0,0,771,772,5,44,0,0,772,216,1,0,0,0,773,774,5,46,0,0,774,218,1,0,
  	0,0,775,776,5,58,0,0,776,220,1,0,0,0,777,778,5,59,0,0,778,222,1,0,0,0,
  	779,780,5,92,0,0,780,792,7,6,0,0,781,786,5,92,0,0,782,784,7,7,0,0,783,
  	782,1,0,0,0,783,784,1,0,0,0,784,785,1,0,0,0,785,787,7,8,0,0,786,783,1,
  	0,0,0,786,787,1,0,0,0,787,788,1,0,0,0,788,792,7,8,0,0,789,790,5,92,0,
  	0,790,792,3,233,116,0,791,779,1,0,0,0,791,781,1,0,0,0,791,789,1,0,0,0,
  	792,224,1,0,0,0,793,797,3,239,119,0,794,796,3,239,119,0,795,794,1,0,0,
  	0,796,799,1,0,0,0,797,795,1,0,0,0,797,798,1,0,0,0,798,226,1,0,0,0,799,
  	797,1,0,0,0,800,802,3,237,118,0,801,800,1,0,0,0,802,803,1,0,0,0,803,801,
  	1,0,0,0,803,804,1,0,0,0,804,228,1,0,0,0,805,807,3,235,117,0,806,805,1,
  	0,0,0,807,808,1,0,0,0,808,806,1,0,0,0,808,809,1,0,0,0,809,230,1,0,0,0,
  	810,813,3,235,117,0,811,813,3,237,118,0,812,810,1,0,0,0,812,811,1,0,0,
  	0,813,232,1,0,0,0,814,816,5,117,0,0,815,814,1,0,0,0,816,817,1,0,0,0,817,
  	815,1,0,0,0,817,818,1,0,0,0,818,819,1,0,0,0,819,820,3,239,119,0,820,821,
  	3,239,119,0,821,822,3,239,119,0,822,823,3,239,119,0,823,234,1,0,0,0,824,
  	825,7,9,0,0,825,236,1,0,0,0,826,827,7,10,0,0,827,238,1,0,0,0,828,829,
  	7,11,0,0,829,240,1,0,0,0,30,0,245,250,255,648,664,666,676,686,688,701,
  	705,708,715,719,726,738,744,747,751,758,760,783,786,791,797,803,808,812,
  	817,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  agohyalexerLexerStaticData = staticData.release();
}

}

AgohyaLexer::AgohyaLexer(CharStream *input) : Lexer(input) {
  AgohyaLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *agohyalexerLexerStaticData->atn, agohyalexerLexerStaticData->decisionToDFA, agohyalexerLexerStaticData->sharedContextCache);
}

AgohyaLexer::~AgohyaLexer() {
  delete _interpreter;
}

std::string AgohyaLexer::getGrammarFileName() const {
  return "AgohyaLexer.g4";
}

const std::vector<std::string>& AgohyaLexer::getRuleNames() const {
  return agohyalexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& AgohyaLexer::getChannelNames() const {
  return agohyalexerLexerStaticData->channelNames;
}

const std::vector<std::string>& AgohyaLexer::getModeNames() const {
  return agohyalexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& AgohyaLexer::getVocabulary() const {
  return agohyalexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AgohyaLexer::getSerializedATN() const {
  return agohyalexerLexerStaticData->serializedATN;
}

const atn::ATN& AgohyaLexer::getATN() const {
  return *agohyalexerLexerStaticData->atn;
}




void AgohyaLexer::initialize() {
  std::call_once(agohyalexerLexerOnceFlag, agohyalexerLexerInitialize);
}

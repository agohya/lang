
// Generated from D:\agohya\lang\grammar\AgohyaLexer.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  AgohyaLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, DOUBLE = 2, BOOL = 3, STRING = 4, PLUS = 5, MINUS = 6, MULTIPLY = 7, 
    DIVIDE = 8, MODULUS = 9, AND = 10, ASSIGN = 11, EQUALS = 12, NOT_EQUALS = 13, 
    NOT = 14, MUST_NOT_BE_NULL = 15, NULL_THEN_EVAL_TO_NULL = 16, IF_NULL_THEN_ASSIGN = 17, 
    LAMBDA_FUNC_IDENTIFIER = 18, OR = 19, IN = 20, LESS_THAN = 21, GREATER_THAN = 22, 
    GREATER_THAN_EQUALS = 23, LESS_THAN_EQUALS = 24, INCREMENT = 25, DECREMENT = 26, 
    PLUS_EQUALS = 27, MINUS_EQUALS = 28, MULTIPLY_EQUALS = 29, DIVIDE_EQUALS = 30, 
    MODULUS_EQUALS = 31, SQR_BRACK_OPEN = 32, SQR_BRACK_CLOSE = 33, CURL_BRACK_OPEN = 34, 
    CURL_BRACK_CLOSE = 35, PAREN_OPEN = 36, PAREN_CLOSE = 37, NULLABLE_TYPE_IDENTIFIER = 38, 
    AT = 39, ABSTRACT = 40, AS = 41, ASSERT = 42, ASYNC = 43, AWAIT = 44, 
    BREAK = 45, CASE = 46, CATCH = 47, CLASS = 48, CONST = 49, CONTINUE = 50, 
    DEFAULT = 51, DO = 52, ELSE = 53, ENUM = 54, EXTENDS = 55, EXTENSION = 56, 
    EXTERNAL = 57, FACTORY = 58, FALSE = 59, FINAL = 60, FINALLY = 61, FOR = 62, 
    FUNCTION = 63, IF = 64, IMPLEMENTS = 65, IMPORT = 66, IS = 67, LET = 68, 
    LIB = 69, NEW = 70, ON = 71, OPERATOR = 72, RETURN = 73, STATIC = 74, 
    SUPER = 75, SWITCH = 76, THIS = 77, THROW = 78, TRUE = 79, TRY = 80, 
    TYPEDEF = 81, VOID = 82, WHILE = 83, WHITESPACE = 84, SINGLE_LINE_COMMENT = 85, 
    MULTI_LINE_COMMENT = 86, BOOL_LITERAL = 87, DOUBLE_LITERAL = 88, HEX_LITERAL = 89, 
    INT_LITERAL = 90, NULL_LITERAL = 91, STRING_LITERAL = 92, LIB_LITERAL = 93, 
    IMPORT_LITERAL = 94, IDENTIFIER = 95, NEWLINE = 96, Underscore = 97, 
    Dollar = 98, QuestionMark = 99, COMMA = 100, Dot = 101, COLON = 102, 
    SEMICOLON = 103
  };

  explicit AgohyaLexer(antlr4::CharStream *input);

  ~AgohyaLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};



// Generated from AgohyaLexer.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  AgohyaLexer : public antlr4::Lexer {
public:
  enum {
    NON_CLASS_MODIFIER = 1, PRIMITIVE_TYPES = 2, OTHER_BUILT_IN_TYPES = 3, 
    INT = 4, DOUBLE = 5, BOOL = 6, STRING = 7, OBJECT = 8, FUNCTION = 9, 
    PLUS = 10, MINUS = 11, MULTIPLY = 12, DIVIDE = 13, MODULUS = 14, AND = 15, 
    ASSIGN = 16, EQUALS = 17, NOT_EQUALS = 18, NOT = 19, MUST_NOT_BE_NULL = 20, 
    NULL_THEN_EVAL_TO_NULL = 21, IF_NULL_THEN_ASSIGN = 22, LAMBDA_FUNC_IDENTIFIER = 23, 
    OR = 24, IN = 25, LESS_THAN = 26, GREATER_THAN = 27, GREATER_THAN_EQUALS = 28, 
    LESS_THAN_EQUALS = 29, INCREMENT = 30, DECREMENT = 31, PLUS_EQUALS = 32, 
    MINUS_EQUALS = 33, MULTIPLY_EQUALS = 34, DIVIDE_EQUALS = 35, MODULUS_EQUALS = 36, 
    SQR_BRACK_OPEN = 37, SQR_BRACK_CLOSE = 38, CURL_BRACK_OPEN = 39, CURL_BRACK_CLOSE = 40, 
    PAREN_OPEN = 41, PAREN_CLOSE = 42, NULLABLE_TYPE_IDENTIFIER = 43, ANNOTATION = 44, 
    AT = 45, ABSTRACT = 46, AS = 47, ASSERT = 48, ASYNC = 49, AWAIT = 50, 
    BREAK = 51, CASE = 52, CATCH = 53, CLASS = 54, CONST = 55, CONTINUE = 56, 
    DEFAULT = 57, DO = 58, ELSE = 59, ENUM = 60, EXTENDS_OR_EXTENSION_OF = 61, 
    EXTERNAL = 62, FACTORY = 63, FALSE = 64, FINAL = 65, FINALLY = 66, FOR = 67, 
    IF = 68, IMPLEMENTS = 69, IMPORT = 70, IS = 71, LET = 72, LIB = 73, 
    NEW = 74, ON = 75, OPERATOR = 76, PRIVATE = 77, PUBLIC = 78, RETURN = 79, 
    STATIC = 80, SUPER = 81, SWITCH = 82, THIS = 83, THROW = 84, TRUE = 85, 
    TRY = 86, TYPEDEF = 87, VISIBILITY_MODIFIERS = 88, VOID = 89, WHILE = 90, 
    WHITESPACE = 91, SINGLE_LINE_COMMENT = 92, MULTI_LINE_COMMENT = 93, 
    LITERAL = 94, BOOL_LITERAL = 95, DOUBLE_LITERAL = 96, HEX_LITERAL = 97, 
    INT_LITERAL = 98, NULL_LITERAL = 99, STRING_LITERAL = 100, LIB_OR_IMPORT_LITERAL = 101, 
    CAPITAL_LETTER = 102, IDENTIFIER = 103, NEWLINE = 104, Underscore = 105, 
    Dollar = 106, QuestionMark = 107, COMMA = 108, Dot = 109, COLON = 110, 
    SEMICOLON = 111, HexDigits = 112, Digits = 113
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


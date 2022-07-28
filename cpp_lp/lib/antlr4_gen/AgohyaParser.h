
// Generated from D:\agohya\lang\grammar\AgohyaParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  AgohyaParser : public antlr4::Parser {
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

  enum {
    RuleProg = 0, RuleLibDecl = 1, RuleStatement = 2, RuleImportRule = 3, 
    RuleDeclaration = 4, RuleVariableDeclaration = 5, RuleType = 6, RuleInitializer = 7, 
    RuleNonPrimitiveTypes = 8, RuleTypeList = 9, RuleTypeParameters = 10, 
    RuleClassDeclaration = 11, RuleClassBody = 12, RuleClassBodyDeclaration = 13, 
    RuleNewObjDeclaration = 14, RuleNullableType = 15, RulePrimitiveType = 16, 
    RuleClassType = 17
  };

  explicit AgohyaParser(antlr4::TokenStream *input);

  AgohyaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~AgohyaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class LibDeclContext;
  class StatementContext;
  class ImportRuleContext;
  class DeclarationContext;
  class VariableDeclarationContext;
  class TypeContext;
  class InitializerContext;
  class NonPrimitiveTypesContext;
  class TypeListContext;
  class TypeParametersContext;
  class ClassDeclarationContext;
  class ClassBodyContext;
  class ClassBodyDeclarationContext;
  class NewObjDeclarationContext;
  class NullableTypeContext;
  class PrimitiveTypeContext;
  class ClassTypeContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LibDeclContext *libDecl();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  LibDeclContext : public antlr4::ParserRuleContext {
  public:
    LibDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIB();
    antlr4::tree::TerminalNode *LIB_LITERAL();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LibDeclContext* libDecl();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImportRuleContext *importRule();
    DeclarationContext *declaration();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ImportRuleContext : public antlr4::ParserRuleContext {
  public:
    ImportRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *IMPORT_LITERAL();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportRuleContext* importRule();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();
    InitializerContext *initializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveTypeContext *primitiveType();
    ClassTypeContext *classType();
    NullableTypeContext *nullableType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *DOUBLE_LITERAL();
    antlr4::tree::TerminalNode *HEX_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *BOOL_LITERAL();
    NewObjDeclarationContext *newObjDeclaration();
    antlr4::tree::TerminalNode *NULL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  NonPrimitiveTypesContext : public antlr4::ParserRuleContext {
  public:
    NonPrimitiveTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassTypeContext *classType();
    antlr4::tree::TerminalNode *QuestionMark();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonPrimitiveTypesContext* nonPrimitiveTypes();

  class  TypeListContext : public antlr4::ParserRuleContext {
  public:
    TypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NonPrimitiveTypesContext *> nonPrimitiveTypes();
    NonPrimitiveTypesContext* nonPrimitiveTypes(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeListContext* typeList();

  class  TypeParametersContext : public antlr4::ParserRuleContext {
  public:
    TypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParametersContext* typeParameters();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ClassBodyContext *classBody();
    TypeParametersContext *typeParameters();
    antlr4::tree::TerminalNode *EXTENDS();
    std::vector<TypeListContext *> typeList();
    TypeListContext* typeList(size_t i);
    antlr4::tree::TerminalNode *IMPLEMENTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CURL_BRACK_OPEN();
    antlr4::tree::TerminalNode* CURL_BRACK_OPEN(size_t i);
    ClassBodyDeclarationContext *classBodyDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyContext* classBody();

  class  ClassBodyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyDeclarationContext* classBodyDeclaration();

  class  NewObjDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NewObjDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    ClassTypeContext *classType();
    antlr4::tree::TerminalNode *EXTENDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewObjDeclarationContext* newObjDeclaration();

  class  NullableTypeContext : public antlr4::ParserRuleContext {
  public:
    NullableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QuestionMark();
    PrimitiveTypeContext *primitiveType();
    ClassTypeContext *classType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullableTypeContext* nullableType();

  class  PrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *BOOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveTypeContext* primitiveType();

  class  ClassTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassTypeContext* classType();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


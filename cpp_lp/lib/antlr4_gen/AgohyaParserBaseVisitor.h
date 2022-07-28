
// Generated from D:\agohya\lang\grammar\AgohyaParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "AgohyaParserVisitor.h"


/**
 * This class provides an empty implementation of AgohyaParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  AgohyaParserBaseVisitor : public AgohyaParserVisitor {
public:

  virtual std::any visitProg(AgohyaParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLibDecl(AgohyaParser::LibDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(AgohyaParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportRule(AgohyaParser::ImportRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(AgohyaParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(AgohyaParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(AgohyaParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer(AgohyaParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonPrimitiveTypes(AgohyaParser::NonPrimitiveTypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeList(AgohyaParser::TypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameters(AgohyaParser::TypeParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDeclaration(AgohyaParser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBody(AgohyaParser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBodyDeclaration(AgohyaParser::ClassBodyDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewObjDeclaration(AgohyaParser::NewObjDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullableType(AgohyaParser::NullableTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveType(AgohyaParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassType(AgohyaParser::ClassTypeContext *ctx) override {
    return visitChildren(ctx);
  }


};


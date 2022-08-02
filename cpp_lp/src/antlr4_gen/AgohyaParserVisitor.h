
// Generated from D:\agohya\lang\grammar\AgohyaParser.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "AgohyaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by AgohyaParser.
 */
class  AgohyaParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by AgohyaParser.
   */
    virtual std::any visitProg(AgohyaParser::ProgContext *context) = 0;

    virtual std::any visitLibDecl(AgohyaParser::LibDeclContext *context) = 0;

    virtual std::any visitStatement(AgohyaParser::StatementContext *context) = 0;

    virtual std::any visitImportRule(AgohyaParser::ImportRuleContext *context) = 0;

    virtual std::any visitDeclaration(AgohyaParser::DeclarationContext *context) = 0;

    virtual std::any visitVariableDeclaration(AgohyaParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitType(AgohyaParser::TypeContext *context) = 0;

    virtual std::any visitInitializer(AgohyaParser::InitializerContext *context) = 0;

    virtual std::any visitNonPrimitiveTypes(AgohyaParser::NonPrimitiveTypesContext *context) = 0;

    virtual std::any visitTypeList(AgohyaParser::TypeListContext *context) = 0;

    virtual std::any visitTypeParameters(AgohyaParser::TypeParametersContext *context) = 0;

    virtual std::any visitClassDeclaration(AgohyaParser::ClassDeclarationContext *context) = 0;

    virtual std::any visitClassBody(AgohyaParser::ClassBodyContext *context) = 0;

    virtual std::any visitClassBodyDeclaration(AgohyaParser::ClassBodyDeclarationContext *context) = 0;

    virtual std::any visitNewObjDeclaration(AgohyaParser::NewObjDeclarationContext *context) = 0;

    virtual std::any visitNullableType(AgohyaParser::NullableTypeContext *context) = 0;

    virtual std::any visitPrimitiveType(AgohyaParser::PrimitiveTypeContext *context) = 0;

    virtual std::any visitClassType(AgohyaParser::ClassTypeContext *context) = 0;


};


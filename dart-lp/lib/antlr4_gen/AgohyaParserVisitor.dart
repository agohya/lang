// Generated from D:\agohya\lang\grammar\AgohyaParser.g4 by ANTLR 4.10.1
// ignore_for_file: unused_import, unused_local_variable, prefer_single_quotes
import 'package:antlr4/antlr4.dart';

import 'AgohyaParser.dart';

/// This abstract class defines a complete generic visitor for a parse tree
/// produced by [AgohyaParser].
///
/// [T] is the eturn type of the visit operation. Use `void` for
/// operations with no return type.
abstract class AgohyaParserVisitor<T> extends ParseTreeVisitor<T> {
  /// Visit a parse tree produced by [AgohyaParser.prog].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitProg(ProgContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.libDecl].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitLibDecl(LibDeclContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.statement].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitStatement(StatementContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.importRule].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitImportRule(ImportRuleContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.declaration].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitDeclaration(DeclarationContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.variableDeclaration].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitVariableDeclaration(VariableDeclarationContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.type].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitType(TypeContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.initializer].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitInitializer(InitializerContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.nonPrimitiveTypes].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitNonPrimitiveTypes(NonPrimitiveTypesContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.typeList].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitTypeList(TypeListContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.typeParameters].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitTypeParameters(TypeParametersContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.classDeclaration].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitClassDeclaration(ClassDeclarationContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.classBody].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitClassBody(ClassBodyContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.classBodyDeclaration].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitClassBodyDeclaration(ClassBodyDeclarationContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.newObjDeclaration].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitNewObjDeclaration(NewObjDeclarationContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.nullableType].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitNullableType(NullableTypeContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.primitiveType].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitPrimitiveType(PrimitiveTypeContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.classType].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitClassType(ClassTypeContext ctx);
}
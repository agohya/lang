// Generated from AgohyaParser.g4 by ANTLR 4.10.1
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

  /// Visit a parse tree produced by [AgohyaParser.packageDecl].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitPackageDecl(PackageDeclContext ctx);

  /// Visit a parse tree produced by [AgohyaParser.statement].
  /// [ctx] the parse tree.
  /// Return the visitor result.
  T? visitStatement(StatementContext ctx);
}
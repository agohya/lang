// Generated from AgohyaParser.g4 by ANTLR 4.10.1
// ignore_for_file: unused_import, unused_local_variable, prefer_single_quotes, constant_identifier_names, non_constant_identifier_names, prefer_function_declarations_over_variables, no_leading_underscores_for_local_identifiers
import 'package:antlr4/antlr4.dart';

import 'AgohyaParserVisitor.dart';
import 'AgohyaParserBaseVisitor.dart';

const int RULE_prog = 0, RULE_packageDecl = 1, RULE_statement = 2;

class AgohyaParser extends Parser {
  static final checkVersion =
      () => RuntimeMetaData.checkVersion('4.10.1', RuntimeMetaData.VERSION);
  static const int TOKEN_EOF = IntStream.EOF;

  static final List<DFA> _decisionToDFA = List.generate(
      _ATN.numberOfDecisions, (i) => DFA(_ATN.getDecisionState(i), i));
  static final PredictionContextCache _sharedContextCache =
      PredictionContextCache();
  static const int TOKEN_ABSTRACT = 1,
      TOKEN_ASSERT = 2,
      TOKEN_BOOL = 3,
      TOKEN_BREAK = 4,
      TOKEN_CASE = 5,
      TOKEN_CATCH = 6,
      TOKEN_CLASS = 7,
      TOKEN_CONST = 8,
      TOKEN_CONTINUE = 9,
      TOKEN_DEFAULT = 10,
      TOKEN_DO = 11,
      TOKEN_DOUBLE = 12,
      TOKEN_ELSE = 13,
      TOKEN_ENUM = 14,
      TOKEN_EXTENDS = 15,
      TOKEN_FINAL = 16,
      TOKEN_FOR = 17,
      TOKEN_IF = 18,
      TOKEN_IMPLEMENTS = 19,
      TOKEN_IMPORT = 20,
      TOKEN_INT = 21,
      TOKEN_IS = 22,
      TOKEN_NEW = 23,
      TOKEN_PACKAGE = 24,
      TOKEN_PRIVATE = 25,
      TOKEN_PUBLIC = 26,
      TOKEN_RETURN = 27,
      TOKEN_STATIC = 28,
      TOKEN_SUPER = 29,
      TOKEN_SWITCH = 30,
      TOKEN_THIS = 31,
      TOKEN_THROW = 32,
      TOKEN_TRY = 33,
      TOKEN_VOID = 34,
      TOKEN_WHILE = 35,
      TOKEN_BOOL_LITERAL = 36,
      TOKEN_DECIMAL_LITERAL = 37,
      TOKEN_DOUBLE_LITERAL = 38,
      TOKEN_HEX_LITERAL = 39,
      TOKEN_NULL_LITERAL = 40,
      TOKEN_STRING_LITERAL = 41,
      TOKEN_LPAREN = 42,
      TOKEN_RPAREN = 43,
      TOKEN_LBRACE = 44,
      TOKEN_RBRACE = 45,
      TOKEN_LBRACK = 46,
      TOKEN_RBRACK = 47,
      TOKEN_SEMI = 48,
      TOKEN_COMMA = 49,
      TOKEN_DOT = 50,
      TOKEN_ASSIGN = 51,
      TOKEN_GT = 52,
      TOKEN_LT = 53,
      TOKEN_QUESTION = 54,
      TOKEN_COLON = 55,
      TOKEN_EQUAL = 56,
      TOKEN_LE = 57,
      TOKEN_GE = 58,
      TOKEN_NOTEQUAL = 59,
      TOKEN_AND = 60,
      TOKEN_OR = 61,
      TOKEN_INC = 62,
      TOKEN_DEC = 63,
      TOKEN_ADD = 64,
      TOKEN_SUB = 65,
      TOKEN_MUL = 66,
      TOKEN_DIV = 67,
      TOKEN_BITAND = 68,
      TOKEN_BITOR = 69,
      TOKEN_CARET = 70,
      TOKEN_MOD = 71,
      TOKEN_ADD_ASSIGN = 72,
      TOKEN_SUB_ASSIGN = 73,
      TOKEN_MUL_ASSIGN = 74,
      TOKEN_DIV_ASSIGN = 75,
      TOKEN_AND_ASSIGN = 76,
      TOKEN_OR_ASSIGN = 77,
      TOKEN_XOR_ASSIGN = 78,
      TOKEN_MOD_ASSIGN = 79,
      TOKEN_LSHIFT_ASSIGN = 80,
      TOKEN_RSHIFT_ASSIGN = 81,
      TOKEN_ARROW = 82,
      TOKEN_WS = 83,
      TOKEN_COMMENT = 84,
      TOKEN_LINE_COMMENT = 85,
      TOKEN_NEWLINE = 86,
      TOKEN_IDENTIFIER = 87,
      TOKEN_LetterOrDigitOrDotOrUnderscore = 88;

  @override
  final List<String> ruleNames = ['prog', 'packageDecl', 'statement'];

  static final List<String?> _LITERAL_NAMES = [
    null,
    "'abstract'",
    "'assert'",
    "'bool'",
    "'break'",
    "'case'",
    "'catch'",
    "'class'",
    "'const'",
    "'continue'",
    "'default'",
    "'do'",
    "'double'",
    "'else'",
    "'enum'",
    "'extends'",
    "'final'",
    "'for'",
    "'if'",
    "'implements'",
    "'import'",
    "'int'",
    "'is'",
    "'new'",
    "'package'",
    "'private'",
    "'public'",
    "'return'",
    "'static'",
    "'super'",
    "'switch'",
    "'this'",
    "'throw'",
    "'try'",
    "'void'",
    "'while'",
    null,
    null,
    null,
    null,
    "'null'",
    null,
    "'('",
    "')'",
    "'{'",
    "'}'",
    "'['",
    "']'",
    "';'",
    "','",
    "'.'",
    "'='",
    "'>'",
    "'<'",
    "'?'",
    "':'",
    "'=='",
    "'<='",
    "'>='",
    "'!='",
    "'&&'",
    "'||'",
    "'++'",
    "'--'",
    "'+'",
    "'-'",
    "'*'",
    "'/'",
    "'&'",
    "'|'",
    "'^'",
    "'%'",
    "'+='",
    "'-='",
    "'*='",
    "'/='",
    "'&='",
    "'|='",
    "'^='",
    "'%='",
    "'<<='",
    "'>>='",
    "'=>'"
  ];
  static final List<String?> _SYMBOLIC_NAMES = [
    null,
    "ABSTRACT",
    "ASSERT",
    "BOOL",
    "BREAK",
    "CASE",
    "CATCH",
    "CLASS",
    "CONST",
    "CONTINUE",
    "DEFAULT",
    "DO",
    "DOUBLE",
    "ELSE",
    "ENUM",
    "EXTENDS",
    "FINAL",
    "FOR",
    "IF",
    "IMPLEMENTS",
    "IMPORT",
    "INT",
    "IS",
    "NEW",
    "PACKAGE",
    "PRIVATE",
    "PUBLIC",
    "RETURN",
    "STATIC",
    "SUPER",
    "SWITCH",
    "THIS",
    "THROW",
    "TRY",
    "VOID",
    "WHILE",
    "BOOL_LITERAL",
    "DECIMAL_LITERAL",
    "DOUBLE_LITERAL",
    "HEX_LITERAL",
    "NULL_LITERAL",
    "STRING_LITERAL",
    "LPAREN",
    "RPAREN",
    "LBRACE",
    "RBRACE",
    "LBRACK",
    "RBRACK",
    "SEMI",
    "COMMA",
    "DOT",
    "ASSIGN",
    "GT",
    "LT",
    "QUESTION",
    "COLON",
    "EQUAL",
    "LE",
    "GE",
    "NOTEQUAL",
    "AND",
    "OR",
    "INC",
    "DEC",
    "ADD",
    "SUB",
    "MUL",
    "DIV",
    "BITAND",
    "BITOR",
    "CARET",
    "MOD",
    "ADD_ASSIGN",
    "SUB_ASSIGN",
    "MUL_ASSIGN",
    "DIV_ASSIGN",
    "AND_ASSIGN",
    "OR_ASSIGN",
    "XOR_ASSIGN",
    "MOD_ASSIGN",
    "LSHIFT_ASSIGN",
    "RSHIFT_ASSIGN",
    "ARROW",
    "WS",
    "COMMENT",
    "LINE_COMMENT",
    "NEWLINE",
    "IDENTIFIER",
    "LetterOrDigitOrDotOrUnderscore"
  ];
  static final Vocabulary VOCABULARY =
      VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

  @override
  Vocabulary get vocabulary {
    return VOCABULARY;
  }

  @override
  String get grammarFileName => 'AgohyaParser.g4';

  @override
  List<int> get serializedATN => _serializedATN;

  @override
  ATN getATN() {
    return _ATN;
  }

  AgohyaParser(TokenStream input) : super(input) {
    interpreter =
        ParserATNSimulator(this, _ATN, _decisionToDFA, _sharedContextCache);
  }

  ProgContext prog() {
    dynamic _localctx = ProgContext(context, state);
    enterRule(_localctx, 0, RULE_prog);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 6;
      packageDecl();
      state = 8;
      errorHandler.sync(this);
      switch (interpreter!.adaptivePredict(tokenStream, 0, context)) {
        case 1:
          state = 7;
          match(TOKEN_NEWLINE);
          break;
      }
      state = 11;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      do {
        state = 10;
        statement();
        state = 13;
        errorHandler.sync(this);
        _la = tokenStream.LA(1)!;
      } while (_la == TOKEN_NEWLINE);
      state = 15;
      match(TOKEN_EOF);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  PackageDeclContext packageDecl() {
    dynamic _localctx = PackageDeclContext(context, state);
    enterRule(_localctx, 2, RULE_packageDecl);
    try {
      enterOuterAlt(_localctx, 1);
      state = 17;
      match(TOKEN_PACKAGE);
      state = 18;
      match(TOKEN_LetterOrDigitOrDotOrUnderscore);
      state = 19;
      match(TOKEN_SEMI);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  StatementContext statement() {
    dynamic _localctx = StatementContext(context, state);
    enterRule(_localctx, 4, RULE_statement);
    try {
      enterOuterAlt(_localctx, 1);
      state = 21;
      match(TOKEN_NEWLINE);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  static const List<int> _serializedATN = [
    4,
    1,
    88,
    24,
    2,
    0,
    7,
    0,
    2,
    1,
    7,
    1,
    2,
    2,
    7,
    2,
    1,
    0,
    1,
    0,
    3,
    0,
    9,
    8,
    0,
    1,
    0,
    4,
    0,
    12,
    8,
    0,
    11,
    0,
    12,
    0,
    13,
    1,
    0,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    1,
    2,
    1,
    2,
    0,
    0,
    3,
    0,
    2,
    4,
    0,
    0,
    22,
    0,
    6,
    1,
    0,
    0,
    0,
    2,
    17,
    1,
    0,
    0,
    0,
    4,
    21,
    1,
    0,
    0,
    0,
    6,
    8,
    3,
    2,
    1,
    0,
    7,
    9,
    5,
    86,
    0,
    0,
    8,
    7,
    1,
    0,
    0,
    0,
    8,
    9,
    1,
    0,
    0,
    0,
    9,
    11,
    1,
    0,
    0,
    0,
    10,
    12,
    3,
    4,
    2,
    0,
    11,
    10,
    1,
    0,
    0,
    0,
    12,
    13,
    1,
    0,
    0,
    0,
    13,
    11,
    1,
    0,
    0,
    0,
    13,
    14,
    1,
    0,
    0,
    0,
    14,
    15,
    1,
    0,
    0,
    0,
    15,
    16,
    5,
    0,
    0,
    1,
    16,
    1,
    1,
    0,
    0,
    0,
    17,
    18,
    5,
    24,
    0,
    0,
    18,
    19,
    5,
    88,
    0,
    0,
    19,
    20,
    5,
    48,
    0,
    0,
    20,
    3,
    1,
    0,
    0,
    0,
    21,
    22,
    5,
    86,
    0,
    0,
    22,
    5,
    1,
    0,
    0,
    0,
    2,
    8,
    13
  ];

  static final ATN _ATN = ATNDeserializer().deserialize(_serializedATN);
}

class ProgContext extends ParserRuleContext {
  PackageDeclContext? packageDecl() => getRuleContext<PackageDeclContext>(0);
  TerminalNode? EOF() => getToken(AgohyaParser.TOKEN_EOF, 0);
  TerminalNode? NEWLINE() => getToken(AgohyaParser.TOKEN_NEWLINE, 0);
  List<StatementContext> statements() => getRuleContexts<StatementContext>();
  StatementContext? statement(int i) => getRuleContext<StatementContext>(i);
  ProgContext([ParserRuleContext? parent, int? invokingState])
      : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_prog;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
      return visitor.visitProg(this);
    } else {
      return visitor.visitChildren(this);
    }
  }
}

class PackageDeclContext extends ParserRuleContext {
  TerminalNode? PACKAGE() => getToken(AgohyaParser.TOKEN_PACKAGE, 0);
  TerminalNode? LetterOrDigitOrDotOrUnderscore() =>
      getToken(AgohyaParser.TOKEN_LetterOrDigitOrDotOrUnderscore, 0);
  TerminalNode? SEMI() => getToken(AgohyaParser.TOKEN_SEMI, 0);
  PackageDeclContext([ParserRuleContext? parent, int? invokingState])
      : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_packageDecl;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
      return visitor.visitPackageDecl(this);
    } else {
      return visitor.visitChildren(this);
    }
  }
}

class StatementContext extends ParserRuleContext {
  TerminalNode? NEWLINE() => getToken(AgohyaParser.TOKEN_NEWLINE, 0);
  StatementContext([ParserRuleContext? parent, int? invokingState])
      : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_statement;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
      return visitor.visitStatement(this);
    } else {
      return visitor.visitChildren(this);
    }
  }
}

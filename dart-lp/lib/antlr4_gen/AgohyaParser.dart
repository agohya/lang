// Generated from D:\agohya\lang\grammar\AgohyaParser.g4 by ANTLR 4.10.1
// ignore_for_file: unused_import, unused_local_variable, prefer_single_quotes
import 'package:antlr4/antlr4.dart';

import 'AgohyaParserVisitor.dart';
import 'AgohyaParserBaseVisitor.dart';
const int RULE_prog = 0, RULE_libDecl = 1, RULE_statement = 2, RULE_importRule = 3, 
          RULE_declaration = 4, RULE_variableDeclaration = 5, RULE_type = 6, 
          RULE_initializer = 7, RULE_nonPrimitiveTypes = 8, RULE_typeList = 9, 
          RULE_typeParameters = 10, RULE_classDeclaration = 11, RULE_classBody = 12, 
          RULE_classBodyDeclaration = 13, RULE_newObjDeclaration = 14, RULE_nullableType = 15, 
          RULE_primitiveType = 16, RULE_classType = 17;
class AgohyaParser extends Parser {
  static final checkVersion = () => RuntimeMetaData.checkVersion('4.10.1', RuntimeMetaData.VERSION);
  static const int TOKEN_EOF = IntStream.EOF;

  static final List<DFA> _decisionToDFA = List.generate(
      _ATN.numberOfDecisions, (i) => DFA(_ATN.getDecisionState(i), i));
  static final PredictionContextCache _sharedContextCache = PredictionContextCache();
  static const int TOKEN_INT = 1, TOKEN_DOUBLE = 2, TOKEN_BOOL = 3, TOKEN_STRING = 4, 
                   TOKEN_PLUS = 5, TOKEN_MINUS = 6, TOKEN_MULTIPLY = 7, 
                   TOKEN_DIVIDE = 8, TOKEN_MODULUS = 9, TOKEN_AND = 10, 
                   TOKEN_ASSIGN = 11, TOKEN_EQUALS = 12, TOKEN_NOT_EQUALS = 13, 
                   TOKEN_NOT = 14, TOKEN_MUST_NOT_BE_NULL = 15, TOKEN_NULL_THEN_EVAL_TO_NULL = 16, 
                   TOKEN_IF_NULL_THEN_ASSIGN = 17, TOKEN_LAMBDA_FUNC_IDENTIFIER = 18, 
                   TOKEN_OR = 19, TOKEN_IN = 20, TOKEN_LESS_THAN = 21, TOKEN_GREATER_THAN = 22, 
                   TOKEN_GREATER_THAN_EQUALS = 23, TOKEN_LESS_THAN_EQUALS = 24, 
                   TOKEN_INCREMENT = 25, TOKEN_DECREMENT = 26, TOKEN_PLUS_EQUALS = 27, 
                   TOKEN_MINUS_EQUALS = 28, TOKEN_MULTIPLY_EQUALS = 29, 
                   TOKEN_DIVIDE_EQUALS = 30, TOKEN_MODULUS_EQUALS = 31, 
                   TOKEN_SQR_BRACK_OPEN = 32, TOKEN_SQR_BRACK_CLOSE = 33, 
                   TOKEN_CURL_BRACK_OPEN = 34, TOKEN_CURL_BRACK_CLOSE = 35, 
                   TOKEN_PAREN_OPEN = 36, TOKEN_PAREN_CLOSE = 37, TOKEN_NULLABLE_TYPE_IDENTIFIER = 38, 
                   TOKEN_AT = 39, TOKEN_ABSTRACT = 40, TOKEN_AS = 41, TOKEN_ASSERT = 42, 
                   TOKEN_ASYNC = 43, TOKEN_AWAIT = 44, TOKEN_BREAK = 45, 
                   TOKEN_CASE = 46, TOKEN_CATCH = 47, TOKEN_CLASS = 48, 
                   TOKEN_CONST = 49, TOKEN_CONTINUE = 50, TOKEN_DEFAULT = 51, 
                   TOKEN_DO = 52, TOKEN_ELSE = 53, TOKEN_ENUM = 54, TOKEN_EXTENDS = 55, 
                   TOKEN_EXTENSION = 56, TOKEN_EXTERNAL = 57, TOKEN_FACTORY = 58, 
                   TOKEN_FALSE = 59, TOKEN_FINAL = 60, TOKEN_FINALLY = 61, 
                   TOKEN_FOR = 62, TOKEN_FUNCTION = 63, TOKEN_IF = 64, TOKEN_IMPLEMENTS = 65, 
                   TOKEN_IMPORT = 66, TOKEN_IS = 67, TOKEN_LET = 68, TOKEN_LIB = 69, 
                   TOKEN_NEW = 70, TOKEN_ON = 71, TOKEN_OPERATOR = 72, TOKEN_RETURN = 73, 
                   TOKEN_STATIC = 74, TOKEN_SUPER = 75, TOKEN_SWITCH = 76, 
                   TOKEN_THIS = 77, TOKEN_THROW = 78, TOKEN_TRUE = 79, TOKEN_TRY = 80, 
                   TOKEN_TYPEDEF = 81, TOKEN_VOID = 82, TOKEN_WHILE = 83, 
                   TOKEN_WHITESPACE = 84, TOKEN_SINGLE_LINE_COMMENT = 85, 
                   TOKEN_MULTI_LINE_COMMENT = 86, TOKEN_BOOL_LITERAL = 87, 
                   TOKEN_DOUBLE_LITERAL = 88, TOKEN_HEX_LITERAL = 89, TOKEN_INT_LITERAL = 90, 
                   TOKEN_NULL_LITERAL = 91, TOKEN_STRING_LITERAL = 92, TOKEN_LIB_LITERAL = 93, 
                   TOKEN_IMPORT_LITERAL = 94, TOKEN_IDENTIFIER = 95, TOKEN_NEWLINE = 96, 
                   TOKEN_Underscore = 97, TOKEN_Dollar = 98, TOKEN_QuestionMark = 99, 
                   TOKEN_COMMA = 100, TOKEN_Dot = 101, TOKEN_COLON = 102, 
                   TOKEN_SEMICOLON = 103;

  @override
  final List<String> ruleNames = [
    'prog', 'libDecl', 'statement', 'importRule', 'declaration', 'variableDeclaration', 
    'type', 'initializer', 'nonPrimitiveTypes', 'typeList', 'typeParameters', 
    'classDeclaration', 'classBody', 'classBodyDeclaration', 'newObjDeclaration', 
    'nullableType', 'primitiveType', 'classType'
  ];

  static final List<String?> _LITERAL_NAMES = [
      null, "'int'", "'double'", "'bool'", "'String'", "'+'", "'-'", "'*'", 
      "'/'", "'%'", "'&&'", "'='", "'=='", "'!='", "'!'", "'!.'", "'?.'", 
      "'??='", "'=>'", "'||'", null, "'<'", "'>'", "'>='", "'<='", "'++'", 
      "'--'", "'+='", "'-='", "'*='", "'/='", "'%='", "'['", "']'", "'{'", 
      "'}'", "'('", "')'", null, "'@'", "'abstract'", "'as'", "'assert'", 
      "'async'", "'await'", "'break'", "'case'", "'catch'", "'class'", "'const'", 
      "'continue'", "'default'", "'do'", "'else'", "'enum'", "'extends'", 
      "'extension'", "'external'", "'factory'", "'false'", "'final'", "'finally'", 
      "'for'", "'Function'", "'if'", "'implements'", "'import'", "'is'", 
      "'let'", "'lib'", "'new'", "'on'", "'operator'", "'return'", "'static'", 
      "'super'", "'switch'", "'this'", "'throw'", "'true'", "'try'", "'typedef'", 
      "'void'", "'while'", null, null, null, null, null, null, null, "'null'", 
      null, null, null, null, null, "'_'", "'\$'", "'?'", "','", "'.'", 
      "':'", "';'"
  ];
  static final List<String?> _SYMBOLIC_NAMES = [
      null, "INT", "DOUBLE", "BOOL", "STRING", "PLUS", "MINUS", "MULTIPLY", 
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
  ];
  static final Vocabulary VOCABULARY = VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

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
    interpreter = ParserATNSimulator(this, _ATN, _decisionToDFA, _sharedContextCache);
  }

  ProgContext prog() {
    dynamic _localctx = ProgContext(context, state);
    enterRule(_localctx, 0, RULE_prog);
    int _la;
    try {
      state = 49;
      errorHandler.sync(this);
      switch (tokenStream.LA(1)!) {
      case TOKEN_LIB:
        enterOuterAlt(_localctx, 1);
        state = 36;
        libDecl();
        state = 38;
        errorHandler.sync(this);
        switch (interpreter!.adaptivePredict(tokenStream, 0, context)) {
        case 1:
          state = 37;
          match(TOKEN_NEWLINE);
          break;
        }
        state = 43;
        errorHandler.sync(this);
        _la = tokenStream.LA(1)!;
        while ((((_la) & ~0x3f) == 0 && ((BigInt.one << _la) & ((BigInt.one << TOKEN_INT) | (BigInt.one << TOKEN_DOUBLE) | (BigInt.one << TOKEN_BOOL) | (BigInt.one << TOKEN_STRING))) != BigInt.zero) || ((((_la - 66)) & ~0x3f) == 0 && ((BigInt.one << (_la - 66)) & ((BigInt.one << (TOKEN_IMPORT - 66)) | (BigInt.one << (TOKEN_IDENTIFIER - 66)) | (BigInt.one << (TOKEN_NEWLINE - 66)))) != BigInt.zero)) {
          state = 40;
          statement();
          state = 45;
          errorHandler.sync(this);
          _la = tokenStream.LA(1)!;
        }
        state = 46;
        match(TOKEN_EOF);
        break;
      case TOKEN_EOF:
        enterOuterAlt(_localctx, 2);
        state = 48;
        match(TOKEN_EOF);
        break;
      default:
        throw NoViableAltException(this);
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  LibDeclContext libDecl() {
    dynamic _localctx = LibDeclContext(context, state);
    enterRule(_localctx, 2, RULE_libDecl);
    try {
      enterOuterAlt(_localctx, 1);
      state = 51;
      match(TOKEN_LIB);
      state = 52;
      match(TOKEN_LIB_LITERAL);
      state = 53;
      match(TOKEN_SEMICOLON);
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
      state = 59;
      errorHandler.sync(this);
      switch (interpreter!.adaptivePredict(tokenStream, 3, context)) {
      case 1:
        enterOuterAlt(_localctx, 1);
        state = 55;
        importRule();
        break;
      case 2:
        enterOuterAlt(_localctx, 2);
        state = 56;
        declaration();
        break;
      case 3:
        enterOuterAlt(_localctx, 3);
        state = 57;
        initializer();
        break;
      case 4:
        enterOuterAlt(_localctx, 4);
        state = 58;
        match(TOKEN_NEWLINE);
        break;
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  ImportRuleContext importRule() {
    dynamic _localctx = ImportRuleContext(context, state);
    enterRule(_localctx, 6, RULE_importRule);
    try {
      enterOuterAlt(_localctx, 1);
      state = 61;
      match(TOKEN_IMPORT);
      state = 62;
      match(TOKEN_IMPORT_LITERAL);
      state = 63;
      match(TOKEN_SEMICOLON);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  DeclarationContext declaration() {
    dynamic _localctx = DeclarationContext(context, state);
    enterRule(_localctx, 8, RULE_declaration);
    try {
      enterOuterAlt(_localctx, 1);
      state = 65;
      variableDeclaration();
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  VariableDeclarationContext variableDeclaration() {
    dynamic _localctx = VariableDeclarationContext(context, state);
    enterRule(_localctx, 10, RULE_variableDeclaration);
    try {
      enterOuterAlt(_localctx, 1);
      state = 67;
      type();
      state = 70;
      errorHandler.sync(this);
      switch (interpreter!.adaptivePredict(tokenStream, 4, context)) {
      case 1:
        state = 68;
        match(TOKEN_IDENTIFIER);
        break;
      case 2:
        state = 69;
        initializer();
        break;
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  TypeContext type() {
    dynamic _localctx = TypeContext(context, state);
    enterRule(_localctx, 12, RULE_type);
    try {
      state = 75;
      errorHandler.sync(this);
      switch (interpreter!.adaptivePredict(tokenStream, 5, context)) {
      case 1:
        enterOuterAlt(_localctx, 1);
        state = 72;
        primitiveType();
        break;
      case 2:
        enterOuterAlt(_localctx, 2);
        state = 73;
        classType();
        break;
      case 3:
        enterOuterAlt(_localctx, 3);
        state = 74;
        nullableType();
        break;
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  InitializerContext initializer() {
    dynamic _localctx = InitializerContext(context, state);
    enterRule(_localctx, 14, RULE_initializer);
    try {
      state = 102;
      errorHandler.sync(this);
      switch (interpreter!.adaptivePredict(tokenStream, 8, context)) {
      case 1:
        enterOuterAlt(_localctx, 1);
        state = 77;
        match(TOKEN_IDENTIFIER);
        state = 78;
        match(TOKEN_ASSIGN);
        state = 86;
        errorHandler.sync(this);
        switch (tokenStream.LA(1)!) {
        case TOKEN_IDENTIFIER:
          state = 79;
          match(TOKEN_IDENTIFIER);
          break;
        case TOKEN_INT_LITERAL:
          state = 80;
          match(TOKEN_INT_LITERAL);
          break;
        case TOKEN_DOUBLE_LITERAL:
          state = 81;
          match(TOKEN_DOUBLE_LITERAL);
          break;
        case TOKEN_HEX_LITERAL:
          state = 82;
          match(TOKEN_HEX_LITERAL);
          break;
        case TOKEN_STRING_LITERAL:
          state = 83;
          match(TOKEN_STRING_LITERAL);
          break;
        case TOKEN_BOOL_LITERAL:
          state = 84;
          match(TOKEN_BOOL_LITERAL);
          break;
        case TOKEN_CLASS:
          state = 85;
          newObjDeclaration();
          break;
        default:
          throw NoViableAltException(this);
        }
        state = 88;
        match(TOKEN_SEMICOLON);
        break;
      case 2:
        enterOuterAlt(_localctx, 2);
        state = 89;
        match(TOKEN_IDENTIFIER);
        state = 90;
        match(TOKEN_ASSIGN);
        state = 99;
        errorHandler.sync(this);
        switch (tokenStream.LA(1)!) {
        case TOKEN_IDENTIFIER:
          state = 91;
          match(TOKEN_IDENTIFIER);
          break;
        case TOKEN_INT_LITERAL:
          state = 92;
          match(TOKEN_INT_LITERAL);
          break;
        case TOKEN_DOUBLE_LITERAL:
          state = 93;
          match(TOKEN_DOUBLE_LITERAL);
          break;
        case TOKEN_HEX_LITERAL:
          state = 94;
          match(TOKEN_HEX_LITERAL);
          break;
        case TOKEN_STRING_LITERAL:
          state = 95;
          match(TOKEN_STRING_LITERAL);
          break;
        case TOKEN_BOOL_LITERAL:
          state = 96;
          match(TOKEN_BOOL_LITERAL);
          break;
        case TOKEN_NULL_LITERAL:
          state = 97;
          match(TOKEN_NULL_LITERAL);
          break;
        case TOKEN_CLASS:
          state = 98;
          newObjDeclaration();
          break;
        default:
          throw NoViableAltException(this);
        }
        state = 101;
        match(TOKEN_SEMICOLON);
        break;
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  NonPrimitiveTypesContext nonPrimitiveTypes() {
    dynamic _localctx = NonPrimitiveTypesContext(context, state);
    enterRule(_localctx, 16, RULE_nonPrimitiveTypes);
    try {
      state = 108;
      errorHandler.sync(this);
      switch (interpreter!.adaptivePredict(tokenStream, 9, context)) {
      case 1:
        enterOuterAlt(_localctx, 1);
        state = 104;
        classType();
        break;
      case 2:
        enterOuterAlt(_localctx, 2);
        state = 105;
        classType();
        state = 106;
        match(TOKEN_QuestionMark);
        break;
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  TypeListContext typeList() {
    dynamic _localctx = TypeListContext(context, state);
    enterRule(_localctx, 18, RULE_typeList);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 111; 
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      do {
        state = 110;
        nonPrimitiveTypes();
        state = 113; 
        errorHandler.sync(this);
        _la = tokenStream.LA(1)!;
      } while (_la == TOKEN_STRING || _la == TOKEN_IDENTIFIER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  TypeParametersContext typeParameters() {
    dynamic _localctx = TypeParametersContext(context, state);
    enterRule(_localctx, 20, RULE_typeParameters);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 118; 
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      do {
        state = 115;
        type();
        state = 116;
        match(TOKEN_COMMA);
        state = 120; 
        errorHandler.sync(this);
        _la = tokenStream.LA(1)!;
      } while ((((_la) & ~0x3f) == 0 && ((BigInt.one << _la) & ((BigInt.one << TOKEN_INT) | (BigInt.one << TOKEN_DOUBLE) | (BigInt.one << TOKEN_BOOL) | (BigInt.one << TOKEN_STRING))) != BigInt.zero) || _la == TOKEN_IDENTIFIER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  ClassDeclarationContext classDeclaration() {
    dynamic _localctx = ClassDeclarationContext(context, state);
    enterRule(_localctx, 22, RULE_classDeclaration);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 122;
      match(TOKEN_CLASS);
      state = 123;
      match(TOKEN_IDENTIFIER);
      state = 125;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      if ((((_la) & ~0x3f) == 0 && ((BigInt.one << _la) & ((BigInt.one << TOKEN_INT) | (BigInt.one << TOKEN_DOUBLE) | (BigInt.one << TOKEN_BOOL) | (BigInt.one << TOKEN_STRING))) != BigInt.zero) || _la == TOKEN_IDENTIFIER) {
        state = 124;
        typeParameters();
      }

      state = 129;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      if (_la == TOKEN_EXTENDS) {
        state = 127;
        match(TOKEN_EXTENDS);
        state = 128;
        typeList();
      }

      state = 133;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      if (_la == TOKEN_IMPLEMENTS) {
        state = 131;
        match(TOKEN_IMPLEMENTS);
        state = 132;
        typeList();
      }

      state = 135;
      classBody();
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  ClassBodyContext classBody() {
    dynamic _localctx = ClassBodyContext(context, state);
    enterRule(_localctx, 24, RULE_classBody);
    try {
      enterOuterAlt(_localctx, 1);
      state = 137;
      match(TOKEN_CURL_BRACK_OPEN);
      state = 138;
      classBodyDeclaration();
      state = 139;
      match(TOKEN_CURL_BRACK_OPEN);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  ClassBodyDeclarationContext classBodyDeclaration() {
    dynamic _localctx = ClassBodyDeclarationContext(context, state);
    enterRule(_localctx, 26, RULE_classBodyDeclaration);
    try {
      enterOuterAlt(_localctx, 1);

    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  NewObjDeclarationContext newObjDeclaration() {
    dynamic _localctx = NewObjDeclarationContext(context, state);
    enterRule(_localctx, 28, RULE_newObjDeclaration);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 143;
      match(TOKEN_CLASS);
      state = 144;
      classType();
      state = 146;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      if (_la == TOKEN_EXTENDS) {
        state = 145;
        match(TOKEN_EXTENDS);
      }

    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  NullableTypeContext nullableType() {
    dynamic _localctx = NullableTypeContext(context, state);
    enterRule(_localctx, 30, RULE_nullableType);
    try {
      enterOuterAlt(_localctx, 1);
      state = 150;
      errorHandler.sync(this);
      switch (tokenStream.LA(1)!) {
      case TOKEN_INT:
      case TOKEN_DOUBLE:
      case TOKEN_BOOL:
        state = 148;
        primitiveType();
        break;
      case TOKEN_STRING:
      case TOKEN_IDENTIFIER:
        state = 149;
        classType();
        break;
      default:
        throw NoViableAltException(this);
      }
      state = 152;
      match(TOKEN_QuestionMark);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  PrimitiveTypeContext primitiveType() {
    dynamic _localctx = PrimitiveTypeContext(context, state);
    enterRule(_localctx, 32, RULE_primitiveType);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 154;
      _la = tokenStream.LA(1)!;
      if (!((((_la) & ~0x3f) == 0 && ((BigInt.one << _la) & ((BigInt.one << TOKEN_INT) | (BigInt.one << TOKEN_DOUBLE) | (BigInt.one << TOKEN_BOOL))) != BigInt.zero))) {
      errorHandler.recoverInline(this);
      } else {
        if ( tokenStream.LA(1)! == IntStream.EOF ) matchedEOF = true;
        errorHandler.reportMatch(this);
        consume();
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  ClassTypeContext classType() {
    dynamic _localctx = ClassTypeContext(context, state);
    enterRule(_localctx, 34, RULE_classType);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 156;
      _la = tokenStream.LA(1)!;
      if (!(_la == TOKEN_STRING || _la == TOKEN_IDENTIFIER)) {
      errorHandler.recoverInline(this);
      } else {
        if ( tokenStream.LA(1)! == IntStream.EOF ) matchedEOF = true;
        errorHandler.reportMatch(this);
        consume();
      }
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
      4,1,103,159,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
      6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
      2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,3,0,39,8,0,1,0,5,0,
      42,8,0,10,0,12,0,45,9,0,1,0,1,0,1,0,3,0,50,8,0,1,1,1,1,1,1,1,1,1,2,
      1,2,1,2,1,2,3,2,60,8,2,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,3,5,71,
      8,5,1,6,1,6,1,6,3,6,76,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,
      87,8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,100,8,7,1,7,
      3,7,103,8,7,1,8,1,8,1,8,1,8,3,8,109,8,8,1,9,4,9,112,8,9,11,9,12,9,
      113,1,10,1,10,1,10,4,10,119,8,10,11,10,12,10,120,1,11,1,11,1,11,3,
      11,126,8,11,1,11,1,11,3,11,130,8,11,1,11,1,11,3,11,134,8,11,1,11,1,
      11,1,12,1,12,1,12,1,12,1,13,1,13,1,14,1,14,1,14,3,14,147,8,14,1,15,
      1,15,3,15,151,8,15,1,15,1,15,1,16,1,16,1,17,1,17,1,17,0,0,18,0,2,4,
      6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,0,2,1,0,1,3,2,0,4,4,95,
      95,171,0,49,1,0,0,0,2,51,1,0,0,0,4,59,1,0,0,0,6,61,1,0,0,0,8,65,1,
      0,0,0,10,67,1,0,0,0,12,75,1,0,0,0,14,102,1,0,0,0,16,108,1,0,0,0,18,
      111,1,0,0,0,20,118,1,0,0,0,22,122,1,0,0,0,24,137,1,0,0,0,26,141,1,
      0,0,0,28,143,1,0,0,0,30,150,1,0,0,0,32,154,1,0,0,0,34,156,1,0,0,0,
      36,38,3,2,1,0,37,39,5,96,0,0,38,37,1,0,0,0,38,39,1,0,0,0,39,43,1,0,
      0,0,40,42,3,4,2,0,41,40,1,0,0,0,42,45,1,0,0,0,43,41,1,0,0,0,43,44,
      1,0,0,0,44,46,1,0,0,0,45,43,1,0,0,0,46,47,5,0,0,1,47,50,1,0,0,0,48,
      50,5,0,0,1,49,36,1,0,0,0,49,48,1,0,0,0,50,1,1,0,0,0,51,52,5,69,0,0,
      52,53,5,93,0,0,53,54,5,103,0,0,54,3,1,0,0,0,55,60,3,6,3,0,56,60,3,
      8,4,0,57,60,3,14,7,0,58,60,5,96,0,0,59,55,1,0,0,0,59,56,1,0,0,0,59,
      57,1,0,0,0,59,58,1,0,0,0,60,5,1,0,0,0,61,62,5,66,0,0,62,63,5,94,0,
      0,63,64,5,103,0,0,64,7,1,0,0,0,65,66,3,10,5,0,66,9,1,0,0,0,67,70,3,
      12,6,0,68,71,5,95,0,0,69,71,3,14,7,0,70,68,1,0,0,0,70,69,1,0,0,0,71,
      11,1,0,0,0,72,76,3,32,16,0,73,76,3,34,17,0,74,76,3,30,15,0,75,72,1,
      0,0,0,75,73,1,0,0,0,75,74,1,0,0,0,76,13,1,0,0,0,77,78,5,95,0,0,78,
      86,5,11,0,0,79,87,5,95,0,0,80,87,5,90,0,0,81,87,5,88,0,0,82,87,5,89,
      0,0,83,87,5,92,0,0,84,87,5,87,0,0,85,87,3,28,14,0,86,79,1,0,0,0,86,
      80,1,0,0,0,86,81,1,0,0,0,86,82,1,0,0,0,86,83,1,0,0,0,86,84,1,0,0,0,
      86,85,1,0,0,0,87,88,1,0,0,0,88,103,5,103,0,0,89,90,5,95,0,0,90,99,
      5,11,0,0,91,100,5,95,0,0,92,100,5,90,0,0,93,100,5,88,0,0,94,100,5,
      89,0,0,95,100,5,92,0,0,96,100,5,87,0,0,97,100,5,91,0,0,98,100,3,28,
      14,0,99,91,1,0,0,0,99,92,1,0,0,0,99,93,1,0,0,0,99,94,1,0,0,0,99,95,
      1,0,0,0,99,96,1,0,0,0,99,97,1,0,0,0,99,98,1,0,0,0,100,101,1,0,0,0,
      101,103,5,103,0,0,102,77,1,0,0,0,102,89,1,0,0,0,103,15,1,0,0,0,104,
      109,3,34,17,0,105,106,3,34,17,0,106,107,5,99,0,0,107,109,1,0,0,0,108,
      104,1,0,0,0,108,105,1,0,0,0,109,17,1,0,0,0,110,112,3,16,8,0,111,110,
      1,0,0,0,112,113,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,19,1,0,
      0,0,115,116,3,12,6,0,116,117,5,100,0,0,117,119,1,0,0,0,118,115,1,0,
      0,0,119,120,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,21,1,0,0,0,
      122,123,5,48,0,0,123,125,5,95,0,0,124,126,3,20,10,0,125,124,1,0,0,
      0,125,126,1,0,0,0,126,129,1,0,0,0,127,128,5,55,0,0,128,130,3,18,9,
      0,129,127,1,0,0,0,129,130,1,0,0,0,130,133,1,0,0,0,131,132,5,65,0,0,
      132,134,3,18,9,0,133,131,1,0,0,0,133,134,1,0,0,0,134,135,1,0,0,0,135,
      136,3,24,12,0,136,23,1,0,0,0,137,138,5,34,0,0,138,139,3,26,13,0,139,
      140,5,34,0,0,140,25,1,0,0,0,141,142,1,0,0,0,142,27,1,0,0,0,143,144,
      5,48,0,0,144,146,3,34,17,0,145,147,5,55,0,0,146,145,1,0,0,0,146,147,
      1,0,0,0,147,29,1,0,0,0,148,151,3,32,16,0,149,151,3,34,17,0,150,148,
      1,0,0,0,150,149,1,0,0,0,151,152,1,0,0,0,152,153,5,99,0,0,153,31,1,
      0,0,0,154,155,7,0,0,0,155,33,1,0,0,0,156,157,7,1,0,0,157,35,1,0,0,
      0,17,38,43,49,59,70,75,86,99,102,108,113,120,125,129,133,146,150
  ];

  static final ATN _ATN =
      ATNDeserializer().deserialize(_serializedATN);
}
class ProgContext extends ParserRuleContext {
  LibDeclContext? libDecl() => getRuleContext<LibDeclContext>(0);
  TerminalNode? EOF() => getToken(AgohyaParser.TOKEN_EOF, 0);
  TerminalNode? NEWLINE() => getToken(AgohyaParser.TOKEN_NEWLINE, 0);
  List<StatementContext> statements() => getRuleContexts<StatementContext>();
  StatementContext? statement(int i) => getRuleContext<StatementContext>(i);
  ProgContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
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

class LibDeclContext extends ParserRuleContext {
  TerminalNode? LIB() => getToken(AgohyaParser.TOKEN_LIB, 0);
  TerminalNode? LIB_LITERAL() => getToken(AgohyaParser.TOKEN_LIB_LITERAL, 0);
  TerminalNode? SEMICOLON() => getToken(AgohyaParser.TOKEN_SEMICOLON, 0);
  LibDeclContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_libDecl;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitLibDecl(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class StatementContext extends ParserRuleContext {
  ImportRuleContext? importRule() => getRuleContext<ImportRuleContext>(0);
  DeclarationContext? declaration() => getRuleContext<DeclarationContext>(0);
  InitializerContext? initializer() => getRuleContext<InitializerContext>(0);
  TerminalNode? NEWLINE() => getToken(AgohyaParser.TOKEN_NEWLINE, 0);
  StatementContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
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

class ImportRuleContext extends ParserRuleContext {
  TerminalNode? IMPORT() => getToken(AgohyaParser.TOKEN_IMPORT, 0);
  TerminalNode? IMPORT_LITERAL() => getToken(AgohyaParser.TOKEN_IMPORT_LITERAL, 0);
  TerminalNode? SEMICOLON() => getToken(AgohyaParser.TOKEN_SEMICOLON, 0);
  ImportRuleContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_importRule;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitImportRule(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class DeclarationContext extends ParserRuleContext {
  VariableDeclarationContext? variableDeclaration() => getRuleContext<VariableDeclarationContext>(0);
  DeclarationContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_declaration;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitDeclaration(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class VariableDeclarationContext extends ParserRuleContext {
  TypeContext? type() => getRuleContext<TypeContext>(0);
  TerminalNode? IDENTIFIER() => getToken(AgohyaParser.TOKEN_IDENTIFIER, 0);
  InitializerContext? initializer() => getRuleContext<InitializerContext>(0);
  VariableDeclarationContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_variableDeclaration;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitVariableDeclaration(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class TypeContext extends ParserRuleContext {
  PrimitiveTypeContext? primitiveType() => getRuleContext<PrimitiveTypeContext>(0);
  ClassTypeContext? classType() => getRuleContext<ClassTypeContext>(0);
  NullableTypeContext? nullableType() => getRuleContext<NullableTypeContext>(0);
  TypeContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_type;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitType(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class InitializerContext extends ParserRuleContext {
  List<TerminalNode> IDENTIFIERs() => getTokens(AgohyaParser.TOKEN_IDENTIFIER);
  TerminalNode? IDENTIFIER(int i) => getToken(AgohyaParser.TOKEN_IDENTIFIER, i);
  TerminalNode? ASSIGN() => getToken(AgohyaParser.TOKEN_ASSIGN, 0);
  TerminalNode? SEMICOLON() => getToken(AgohyaParser.TOKEN_SEMICOLON, 0);
  TerminalNode? INT_LITERAL() => getToken(AgohyaParser.TOKEN_INT_LITERAL, 0);
  TerminalNode? DOUBLE_LITERAL() => getToken(AgohyaParser.TOKEN_DOUBLE_LITERAL, 0);
  TerminalNode? HEX_LITERAL() => getToken(AgohyaParser.TOKEN_HEX_LITERAL, 0);
  TerminalNode? STRING_LITERAL() => getToken(AgohyaParser.TOKEN_STRING_LITERAL, 0);
  TerminalNode? BOOL_LITERAL() => getToken(AgohyaParser.TOKEN_BOOL_LITERAL, 0);
  NewObjDeclarationContext? newObjDeclaration() => getRuleContext<NewObjDeclarationContext>(0);
  TerminalNode? NULL_LITERAL() => getToken(AgohyaParser.TOKEN_NULL_LITERAL, 0);
  InitializerContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_initializer;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitInitializer(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class NonPrimitiveTypesContext extends ParserRuleContext {
  ClassTypeContext? classType() => getRuleContext<ClassTypeContext>(0);
  TerminalNode? QuestionMark() => getToken(AgohyaParser.TOKEN_QuestionMark, 0);
  NonPrimitiveTypesContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_nonPrimitiveTypes;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitNonPrimitiveTypes(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class TypeListContext extends ParserRuleContext {
  List<NonPrimitiveTypesContext> nonPrimitiveTypess() => getRuleContexts<NonPrimitiveTypesContext>();
  NonPrimitiveTypesContext? nonPrimitiveTypes(int i) => getRuleContext<NonPrimitiveTypesContext>(i);
  TypeListContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_typeList;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitTypeList(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class TypeParametersContext extends ParserRuleContext {
  List<TypeContext> types() => getRuleContexts<TypeContext>();
  TypeContext? type(int i) => getRuleContext<TypeContext>(i);
  List<TerminalNode> COMMAs() => getTokens(AgohyaParser.TOKEN_COMMA);
  TerminalNode? COMMA(int i) => getToken(AgohyaParser.TOKEN_COMMA, i);
  TypeParametersContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_typeParameters;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitTypeParameters(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class ClassDeclarationContext extends ParserRuleContext {
  TerminalNode? CLASS() => getToken(AgohyaParser.TOKEN_CLASS, 0);
  TerminalNode? IDENTIFIER() => getToken(AgohyaParser.TOKEN_IDENTIFIER, 0);
  ClassBodyContext? classBody() => getRuleContext<ClassBodyContext>(0);
  TypeParametersContext? typeParameters() => getRuleContext<TypeParametersContext>(0);
  TerminalNode? EXTENDS() => getToken(AgohyaParser.TOKEN_EXTENDS, 0);
  List<TypeListContext> typeLists() => getRuleContexts<TypeListContext>();
  TypeListContext? typeList(int i) => getRuleContext<TypeListContext>(i);
  TerminalNode? IMPLEMENTS() => getToken(AgohyaParser.TOKEN_IMPLEMENTS, 0);
  ClassDeclarationContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_classDeclaration;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitClassDeclaration(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class ClassBodyContext extends ParserRuleContext {
  List<TerminalNode> CURL_BRACK_OPENs() => getTokens(AgohyaParser.TOKEN_CURL_BRACK_OPEN);
  TerminalNode? CURL_BRACK_OPEN(int i) => getToken(AgohyaParser.TOKEN_CURL_BRACK_OPEN, i);
  ClassBodyDeclarationContext? classBodyDeclaration() => getRuleContext<ClassBodyDeclarationContext>(0);
  ClassBodyContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_classBody;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitClassBody(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class ClassBodyDeclarationContext extends ParserRuleContext {
  ClassBodyDeclarationContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_classBodyDeclaration;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitClassBodyDeclaration(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class NewObjDeclarationContext extends ParserRuleContext {
  TerminalNode? CLASS() => getToken(AgohyaParser.TOKEN_CLASS, 0);
  ClassTypeContext? classType() => getRuleContext<ClassTypeContext>(0);
  TerminalNode? EXTENDS() => getToken(AgohyaParser.TOKEN_EXTENDS, 0);
  NewObjDeclarationContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_newObjDeclaration;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitNewObjDeclaration(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class NullableTypeContext extends ParserRuleContext {
  TerminalNode? QuestionMark() => getToken(AgohyaParser.TOKEN_QuestionMark, 0);
  PrimitiveTypeContext? primitiveType() => getRuleContext<PrimitiveTypeContext>(0);
  ClassTypeContext? classType() => getRuleContext<ClassTypeContext>(0);
  NullableTypeContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_nullableType;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitNullableType(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class PrimitiveTypeContext extends ParserRuleContext {
  TerminalNode? INT() => getToken(AgohyaParser.TOKEN_INT, 0);
  TerminalNode? DOUBLE() => getToken(AgohyaParser.TOKEN_DOUBLE, 0);
  TerminalNode? BOOL() => getToken(AgohyaParser.TOKEN_BOOL, 0);
  PrimitiveTypeContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_primitiveType;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitPrimitiveType(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}

class ClassTypeContext extends ParserRuleContext {
  TerminalNode? STRING() => getToken(AgohyaParser.TOKEN_STRING, 0);
  TerminalNode? IDENTIFIER() => getToken(AgohyaParser.TOKEN_IDENTIFIER, 0);
  ClassTypeContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_classType;
  @override
  T? accept<T>(ParseTreeVisitor<T> visitor) {
    if (visitor is AgohyaParserVisitor<T>) {
     return visitor.visitClassType(this);
    } else {
    	return visitor.visitChildren(this);
    }
  }
}


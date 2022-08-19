// Generated from d:\agohya\lang\grammar\AgohyaParser.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class AgohyaParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		NON_CLASS_MODIFIER=1, PRIMITIVE_TYPES=2, OTHER_BUILT_IN_TYPES=3, INT=4, 
		DOUBLE=5, BOOL=6, STRING=7, OBJECT=8, PLUS=9, MINUS=10, MULTIPLY=11, DIVIDE=12, 
		MODULUS=13, AND=14, ASSIGN=15, EQUALS=16, NOT_EQUALS=17, NOT=18, MUST_NOT_BE_NULL=19, 
		NULL_THEN_EVAL_TO_NULL=20, IF_NULL_THEN_ASSIGN=21, LAMBDA_FUNC_IDENTIFIER=22, 
		OR=23, IN=24, LESS_THAN=25, GREATER_THAN=26, GREATER_THAN_EQUALS=27, LESS_THAN_EQUALS=28, 
		INCREMENT=29, DECREMENT=30, PLUS_EQUALS=31, MINUS_EQUALS=32, MULTIPLY_EQUALS=33, 
		DIVIDE_EQUALS=34, MODULUS_EQUALS=35, SQR_BRACK_OPEN=36, SQR_BRACK_CLOSE=37, 
		CURL_BRACK_OPEN=38, CURL_BRACK_CLOSE=39, PAREN_OPEN=40, PAREN_CLOSE=41, 
		NULLABLE_TYPE_IDENTIFIER=42, ANNOTATION=43, AT=44, ABSTRACT=45, AS=46, 
		ASSERT=47, ASYNC=48, AWAIT=49, BREAK=50, CASE=51, CATCH=52, CLASS=53, 
		CONST=54, CONTINUE=55, DEFAULT=56, DO=57, ELSE=58, ENUM=59, EXTENDS=60, 
		EXTENSION=61, EXTERNAL=62, FACTORY=63, FALSE=64, FINAL=65, FINALLY=66, 
		FOR=67, FUNCTION=68, IF=69, IMPLEMENTS=70, IMPORT=71, IS=72, LET=73, LIB=74, 
		NEW=75, ON=76, OPERATOR=77, PRIVATE=78, PUBLIC=79, RETURN=80, STATIC=81, 
		SUPER=82, SWITCH=83, THIS=84, THROW=85, TRUE=86, TRY=87, TYPEDEF=88, VOID=89, 
		WHILE=90, WHITESPACE=91, SINGLE_LINE_COMMENT=92, MULTI_LINE_COMMENT=93, 
		LITERAL=94, BOOL_LITERAL=95, DOUBLE_LITERAL=96, HEX_LITERAL=97, INT_LITERAL=98, 
		NULL_LITERAL=99, STRING_LITERAL=100, LIB_OR_IMPORT_LITERAL=101, CAPITAL_LETTER=102, 
		IDENTIFIER=103, NEWLINE=104, Underscore=105, Dollar=106, QuestionMark=107, 
		COMMA=108, Dot=109, COLON=110, SEMICOLON=111;
	public static final int
		RULE_file = 0, RULE_statement = 1, RULE_libDecl = 2, RULE_importDecl = 3, 
		RULE_typeDecl = 4, RULE_annotationDecl = 5, RULE_annotationBody = 6, RULE_annotationFieldDecl = 7, 
		RULE_type = 8, RULE_classType = 9;
	private static String[] makeRuleNames() {
		return new String[] {
			"file", "statement", "libDecl", "importDecl", "typeDecl", "annotationDecl", 
			"annotationBody", "annotationFieldDecl", "type", "classType"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, "'int'", "'double'", "'bool'", "'String'", "'OBJECT'", 
			"'+'", "'-'", "'*'", "'/'", "'%'", "'&&'", "'='", "'=='", "'!='", "'!'", 
			"'!.'", "'?.'", "'??='", "'=>'", "'||'", null, "'<'", "'>'", "'>='", 
			"'<='", "'++'", "'--'", "'+='", "'-='", "'*='", "'/='", "'%='", "'['", 
			"']'", "'{'", "'}'", "'('", "')'", null, "'annotation'", "'@'", "'abstract'", 
			"'as'", "'assert'", "'async'", "'await'", "'break'", "'case'", "'catch'", 
			"'class'", "'const'", "'continue'", "'default'", "'do'", "'else'", "'enum'", 
			"'extends'", "'extension'", "'external'", "'factory'", "'false'", "'final'", 
			"'finally'", "'for'", "'Function'", "'if'", "'implements'", "'import'", 
			"'is'", "'let'", "'lib'", "'new'", "'on'", "'operator'", "'private'", 
			"'public'", "'return'", "'static'", "'super'", "'switch'", "'this'", 
			"'throw'", "'true'", "'try'", "'typedef'", "'void'", "'while'", null, 
			null, null, null, null, null, null, null, "'null'", null, null, null, 
			null, null, "'_'", "'$'", "'?'", "','", "'.'", "':'", "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "NON_CLASS_MODIFIER", "PRIMITIVE_TYPES", "OTHER_BUILT_IN_TYPES", 
			"INT", "DOUBLE", "BOOL", "STRING", "OBJECT", "PLUS", "MINUS", "MULTIPLY", 
			"DIVIDE", "MODULUS", "AND", "ASSIGN", "EQUALS", "NOT_EQUALS", "NOT", 
			"MUST_NOT_BE_NULL", "NULL_THEN_EVAL_TO_NULL", "IF_NULL_THEN_ASSIGN", 
			"LAMBDA_FUNC_IDENTIFIER", "OR", "IN", "LESS_THAN", "GREATER_THAN", "GREATER_THAN_EQUALS", 
			"LESS_THAN_EQUALS", "INCREMENT", "DECREMENT", "PLUS_EQUALS", "MINUS_EQUALS", 
			"MULTIPLY_EQUALS", "DIVIDE_EQUALS", "MODULUS_EQUALS", "SQR_BRACK_OPEN", 
			"SQR_BRACK_CLOSE", "CURL_BRACK_OPEN", "CURL_BRACK_CLOSE", "PAREN_OPEN", 
			"PAREN_CLOSE", "NULLABLE_TYPE_IDENTIFIER", "ANNOTATION", "AT", "ABSTRACT", 
			"AS", "ASSERT", "ASYNC", "AWAIT", "BREAK", "CASE", "CATCH", "CLASS", 
			"CONST", "CONTINUE", "DEFAULT", "DO", "ELSE", "ENUM", "EXTENDS", "EXTENSION", 
			"EXTERNAL", "FACTORY", "FALSE", "FINAL", "FINALLY", "FOR", "FUNCTION", 
			"IF", "IMPLEMENTS", "IMPORT", "IS", "LET", "LIB", "NEW", "ON", "OPERATOR", 
			"PRIVATE", "PUBLIC", "RETURN", "STATIC", "SUPER", "SWITCH", "THIS", "THROW", 
			"TRUE", "TRY", "TYPEDEF", "VOID", "WHILE", "WHITESPACE", "SINGLE_LINE_COMMENT", 
			"MULTI_LINE_COMMENT", "LITERAL", "BOOL_LITERAL", "DOUBLE_LITERAL", "HEX_LITERAL", 
			"INT_LITERAL", "NULL_LITERAL", "STRING_LITERAL", "LIB_OR_IMPORT_LITERAL", 
			"CAPITAL_LETTER", "IDENTIFIER", "NEWLINE", "Underscore", "Dollar", "QuestionMark", 
			"COMMA", "Dot", "COLON", "SEMICOLON"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "AgohyaParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public AgohyaParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class FileContext extends ParserRuleContext {
		public LibDeclContext libDecl() {
			return getRuleContext(LibDeclContext.class,0);
		}
		public TerminalNode EOF() { return getToken(AgohyaParser.EOF, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(AgohyaParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(AgohyaParser.NEWLINE, i);
		}
		public List<ImportDeclContext> importDecl() {
			return getRuleContexts(ImportDeclContext.class);
		}
		public ImportDeclContext importDecl(int i) {
			return getRuleContext(ImportDeclContext.class,i);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public FileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_file; }
	}

	public final FileContext file() throws RecognitionException {
		FileContext _localctx = new FileContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_file);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(20);
			libDecl();
			setState(22);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				{
				setState(21);
				match(NEWLINE);
				}
				break;
			}
			setState(27);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==IMPORT) {
				{
				{
				setState(24);
				importDecl();
				}
				}
				setState(29);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(31);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				setState(30);
				match(NEWLINE);
				}
				break;
			}
			setState(36);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(33);
				statement();
				}
				}
				setState(38);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(39);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public TypeDeclContext typeDecl() {
			return getRuleContext(TypeDeclContext.class,0);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(AgohyaParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(AgohyaParser.NEWLINE, i);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(41);
				match(NEWLINE);
				}
				}
				setState(44); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==NEWLINE );
			setState(46);
			typeDecl();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LibDeclContext extends ParserRuleContext {
		public TerminalNode LIB() { return getToken(AgohyaParser.LIB, 0); }
		public TerminalNode LIB_OR_IMPORT_LITERAL() { return getToken(AgohyaParser.LIB_OR_IMPORT_LITERAL, 0); }
		public TerminalNode SEMICOLON() { return getToken(AgohyaParser.SEMICOLON, 0); }
		public LibDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_libDecl; }
	}

	public final LibDeclContext libDecl() throws RecognitionException {
		LibDeclContext _localctx = new LibDeclContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_libDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(48);
			match(LIB);
			setState(49);
			match(LIB_OR_IMPORT_LITERAL);
			setState(50);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ImportDeclContext extends ParserRuleContext {
		public TerminalNode IMPORT() { return getToken(AgohyaParser.IMPORT, 0); }
		public TerminalNode LIB_OR_IMPORT_LITERAL() { return getToken(AgohyaParser.LIB_OR_IMPORT_LITERAL, 0); }
		public TerminalNode SEMICOLON() { return getToken(AgohyaParser.SEMICOLON, 0); }
		public ImportDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importDecl; }
	}

	public final ImportDeclContext importDecl() throws RecognitionException {
		ImportDeclContext _localctx = new ImportDeclContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_importDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
			match(IMPORT);
			setState(53);
			match(LIB_OR_IMPORT_LITERAL);
			setState(54);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeDeclContext extends ParserRuleContext {
		public AnnotationDeclContext annotationDecl() {
			return getRuleContext(AnnotationDeclContext.class,0);
		}
		public TypeDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDecl; }
	}

	public final TypeDeclContext typeDecl() throws RecognitionException {
		TypeDeclContext _localctx = new TypeDeclContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_typeDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(56);
			annotationDecl();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AnnotationDeclContext extends ParserRuleContext {
		public TerminalNode ANNOTATION() { return getToken(AgohyaParser.ANNOTATION, 0); }
		public TerminalNode IDENTIFIER() { return getToken(AgohyaParser.IDENTIFIER, 0); }
		public AnnotationBodyContext annotationBody() {
			return getRuleContext(AnnotationBodyContext.class,0);
		}
		public AnnotationDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_annotationDecl; }
	}

	public final AnnotationDeclContext annotationDecl() throws RecognitionException {
		AnnotationDeclContext _localctx = new AnnotationDeclContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_annotationDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(58);
			match(ANNOTATION);
			setState(59);
			match(IDENTIFIER);
			setState(60);
			annotationBody();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AnnotationBodyContext extends ParserRuleContext {
		public TerminalNode CURL_BRACK_OPEN() { return getToken(AgohyaParser.CURL_BRACK_OPEN, 0); }
		public TerminalNode CURL_BRACK_CLOSE() { return getToken(AgohyaParser.CURL_BRACK_CLOSE, 0); }
		public List<AnnotationFieldDeclContext> annotationFieldDecl() {
			return getRuleContexts(AnnotationFieldDeclContext.class);
		}
		public AnnotationFieldDeclContext annotationFieldDecl(int i) {
			return getRuleContext(AnnotationFieldDeclContext.class,i);
		}
		public AnnotationBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_annotationBody; }
	}

	public final AnnotationBodyContext annotationBody() throws RecognitionException {
		AnnotationBodyContext _localctx = new AnnotationBodyContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_annotationBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(62);
			match(CURL_BRACK_OPEN);
			setState(64); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(63);
				annotationFieldDecl();
				}
				}
				setState(66); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==FINAL );
			setState(68);
			match(CURL_BRACK_CLOSE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AnnotationFieldDeclContext extends ParserRuleContext {
		public TerminalNode FINAL() { return getToken(AgohyaParser.FINAL, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(AgohyaParser.IDENTIFIER, 0); }
		public TerminalNode COLON() { return getToken(AgohyaParser.COLON, 0); }
		public TerminalNode SEMICOLON() { return getToken(AgohyaParser.SEMICOLON, 0); }
		public TerminalNode LITERAL() { return getToken(AgohyaParser.LITERAL, 0); }
		public TerminalNode PAREN_OPEN() { return getToken(AgohyaParser.PAREN_OPEN, 0); }
		public TerminalNode PAREN_CLOSE() { return getToken(AgohyaParser.PAREN_CLOSE, 0); }
		public AnnotationFieldDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_annotationFieldDecl; }
	}

	public final AnnotationFieldDeclContext annotationFieldDecl() throws RecognitionException {
		AnnotationFieldDeclContext _localctx = new AnnotationFieldDeclContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_annotationFieldDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			match(FINAL);
			setState(71);
			type();
			setState(72);
			match(IDENTIFIER);
			setState(73);
			match(COLON);
			setState(77);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LITERAL:
				{
				setState(74);
				match(LITERAL);
				}
				break;
			case PAREN_OPEN:
				{
				setState(75);
				match(PAREN_OPEN);
				setState(76);
				match(PAREN_CLOSE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(79);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TerminalNode PRIMITIVE_TYPES() { return getToken(AgohyaParser.PRIMITIVE_TYPES, 0); }
		public ClassTypeContext classType() {
			return getRuleContext(ClassTypeContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_type);
		try {
			setState(83);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PRIMITIVE_TYPES:
				enterOuterAlt(_localctx, 1);
				{
				setState(81);
				match(PRIMITIVE_TYPES);
				}
				break;
			case CAPITAL_LETTER:
				enterOuterAlt(_localctx, 2);
				{
				setState(82);
				classType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassTypeContext extends ParserRuleContext {
		public TerminalNode CAPITAL_LETTER() { return getToken(AgohyaParser.CAPITAL_LETTER, 0); }
		public TerminalNode IDENTIFIER() { return getToken(AgohyaParser.IDENTIFIER, 0); }
		public ClassTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classType; }
	}

	public final ClassTypeContext classType() throws RecognitionException {
		ClassTypeContext _localctx = new ClassTypeContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_classType);
		try {
			setState(88);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(85);
				match(CAPITAL_LETTER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(86);
				match(CAPITAL_LETTER);
				setState(87);
				match(IDENTIFIER);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3q]\4\2\t\2\4\3\t\3"+
		"\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\3\2"+
		"\3\2\5\2\31\n\2\3\2\7\2\34\n\2\f\2\16\2\37\13\2\3\2\5\2\"\n\2\3\2\7\2"+
		"%\n\2\f\2\16\2(\13\2\3\2\3\2\3\3\6\3-\n\3\r\3\16\3.\3\3\3\3\3\4\3\4\3"+
		"\4\3\4\3\5\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\b\3\b\6\bC\n\b\r\b\16"+
		"\bD\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\tP\n\t\3\t\3\t\3\n\3\n\5\nV"+
		"\n\n\3\13\3\13\3\13\5\13[\n\13\3\13\2\2\f\2\4\6\b\n\f\16\20\22\24\2\2"+
		"\2[\2\26\3\2\2\2\4,\3\2\2\2\6\62\3\2\2\2\b\66\3\2\2\2\n:\3\2\2\2\f<\3"+
		"\2\2\2\16@\3\2\2\2\20H\3\2\2\2\22U\3\2\2\2\24Z\3\2\2\2\26\30\5\6\4\2\27"+
		"\31\7j\2\2\30\27\3\2\2\2\30\31\3\2\2\2\31\35\3\2\2\2\32\34\5\b\5\2\33"+
		"\32\3\2\2\2\34\37\3\2\2\2\35\33\3\2\2\2\35\36\3\2\2\2\36!\3\2\2\2\37\35"+
		"\3\2\2\2 \"\7j\2\2! \3\2\2\2!\"\3\2\2\2\"&\3\2\2\2#%\5\4\3\2$#\3\2\2\2"+
		"%(\3\2\2\2&$\3\2\2\2&\'\3\2\2\2\')\3\2\2\2(&\3\2\2\2)*\7\2\2\3*\3\3\2"+
		"\2\2+-\7j\2\2,+\3\2\2\2-.\3\2\2\2.,\3\2\2\2./\3\2\2\2/\60\3\2\2\2\60\61"+
		"\5\n\6\2\61\5\3\2\2\2\62\63\7L\2\2\63\64\7g\2\2\64\65\7q\2\2\65\7\3\2"+
		"\2\2\66\67\7I\2\2\678\7g\2\289\7q\2\29\t\3\2\2\2:;\5\f\7\2;\13\3\2\2\2"+
		"<=\7-\2\2=>\7i\2\2>?\5\16\b\2?\r\3\2\2\2@B\7(\2\2AC\5\20\t\2BA\3\2\2\2"+
		"CD\3\2\2\2DB\3\2\2\2DE\3\2\2\2EF\3\2\2\2FG\7)\2\2G\17\3\2\2\2HI\7C\2\2"+
		"IJ\5\22\n\2JK\7i\2\2KO\7p\2\2LP\7`\2\2MN\7*\2\2NP\7+\2\2OL\3\2\2\2OM\3"+
		"\2\2\2PQ\3\2\2\2QR\7q\2\2R\21\3\2\2\2SV\7\4\2\2TV\5\24\13\2US\3\2\2\2"+
		"UT\3\2\2\2V\23\3\2\2\2W[\7h\2\2XY\7h\2\2Y[\7i\2\2ZW\3\2\2\2ZX\3\2\2\2"+
		"[\25\3\2\2\2\13\30\35!&.DOUZ";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
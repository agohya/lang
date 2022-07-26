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
		INT=1, DOUBLE=2, BOOL=3, ABSTRACT=4, ASSERT=5, BREAK=6, CASE=7, CATCH=8, 
		CLASS=9, CONST=10, CONTINUE=11, DEFAULT=12, DO=13, ELSE=14, ENUM=15, EXTENDS=16, 
		FINAL=17, FOR=18, IF=19, IMPLEMENTS=20, IMPORT=21, IS=22, NEW=23, PACKAGE=24, 
		PRIVATE=25, PUBLIC=26, RETURN=27, STATIC=28, SUPER=29, SWITCH=30, THIS=31, 
		THROW=32, TRY=33, VOID=34, WHILE=35, BOOL_LITERAL=36, DECIMAL_LITERAL=37, 
		DOUBLE_LITERAL=38, HEX_LITERAL=39, NULL_LITERAL=40, STRING_LITERAL=41, 
		LPAREN=42, RPAREN=43, LBRACE=44, RBRACE=45, LBRACK=46, RBRACK=47, SEMI=48, 
		COMMA=49, DOT=50, ASSIGN=51, GT=52, LT=53, QUESTION=54, COLON=55, EQUAL=56, 
		LE=57, GE=58, NOTEQUAL=59, AND=60, OR=61, INC=62, DEC=63, ADD=64, SUB=65, 
		MUL=66, DIV=67, BITAND=68, BITOR=69, CARET=70, MOD=71, ADD_ASSIGN=72, 
		SUB_ASSIGN=73, MUL_ASSIGN=74, DIV_ASSIGN=75, AND_ASSIGN=76, OR_ASSIGN=77, 
		XOR_ASSIGN=78, MOD_ASSIGN=79, LSHIFT_ASSIGN=80, RSHIFT_ASSIGN=81, ARROW=82, 
		WS=83, COMMENT=84, LINE_COMMENT=85, NEWLINE=86, IDENTIFIER=87, LetterOrDigitOrDotOrUnderscore=88;
	public static final int
		RULE_prog = 0, RULE_packageDecl = 1, RULE_statement = 2, RULE_decl = 3, 
		RULE_primitiveType = 4;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "packageDecl", "statement", "decl", "primitiveType"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'int'", "'double'", "'bool'", "'abstract'", "'assert'", "'break'", 
			"'case'", "'catch'", "'class'", "'const'", "'continue'", "'default'", 
			"'do'", "'else'", "'enum'", "'extends'", "'final'", "'for'", "'if'", 
			"'implements'", "'import'", "'is'", "'new'", "'package'", "'private'", 
			"'public'", "'return'", "'static'", "'super'", "'switch'", "'this'", 
			"'throw'", "'try'", "'void'", "'while'", null, null, null, null, "'null'", 
			null, "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", "','", "'.'", 
			"'='", "'>'", "'<'", "'?'", "':'", "'=='", "'<='", "'>='", "'!='", "'&&'", 
			"'||'", "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", "'&'", "'|'", "'^'", 
			"'%'", "'+='", "'-='", "'*='", "'/='", "'&='", "'|='", "'^='", "'%='", 
			"'<<='", "'>>='", "'=>'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "INT", "DOUBLE", "BOOL", "ABSTRACT", "ASSERT", "BREAK", "CASE", 
			"CATCH", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "ELSE", "ENUM", 
			"EXTENDS", "FINAL", "FOR", "IF", "IMPLEMENTS", "IMPORT", "IS", "NEW", 
			"PACKAGE", "PRIVATE", "PUBLIC", "RETURN", "STATIC", "SUPER", "SWITCH", 
			"THIS", "THROW", "TRY", "VOID", "WHILE", "BOOL_LITERAL", "DECIMAL_LITERAL", 
			"DOUBLE_LITERAL", "HEX_LITERAL", "NULL_LITERAL", "STRING_LITERAL", "LPAREN", 
			"RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", "DOT", 
			"ASSIGN", "GT", "LT", "QUESTION", "COLON", "EQUAL", "LE", "GE", "NOTEQUAL", 
			"AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", "DIV", "BITAND", "BITOR", 
			"CARET", "MOD", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", 
			"AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "MOD_ASSIGN", "LSHIFT_ASSIGN", 
			"RSHIFT_ASSIGN", "ARROW", "WS", "COMMENT", "LINE_COMMENT", "NEWLINE", 
			"IDENTIFIER", "LetterOrDigitOrDotOrUnderscore"
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

	public static class ProgContext extends ParserRuleContext {
		public PackageDeclContext packageDecl() {
			return getRuleContext(PackageDeclContext.class,0);
		}
		public TerminalNode EOF() { return getToken(AgohyaParser.EOF, 0); }
		public TerminalNode NEWLINE() { return getToken(AgohyaParser.NEWLINE, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(10);
			packageDecl();
			setState(12);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				{
				setState(11);
				match(NEWLINE);
				}
				break;
			}
			setState(15); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(14);
				statement();
				}
				}
				setState(17); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==NEWLINE );
			setState(19);
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

	public static class PackageDeclContext extends ParserRuleContext {
		public TerminalNode PACKAGE() { return getToken(AgohyaParser.PACKAGE, 0); }
		public TerminalNode LetterOrDigitOrDotOrUnderscore() { return getToken(AgohyaParser.LetterOrDigitOrDotOrUnderscore, 0); }
		public TerminalNode SEMI() { return getToken(AgohyaParser.SEMI, 0); }
		public PackageDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_packageDecl; }
	}

	public final PackageDeclContext packageDecl() throws RecognitionException {
		PackageDeclContext _localctx = new PackageDeclContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_packageDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(21);
			match(PACKAGE);
			setState(22);
			match(LetterOrDigitOrDotOrUnderscore);
			setState(23);
			match(SEMI);
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
		public TerminalNode NEWLINE() { return getToken(AgohyaParser.NEWLINE, 0); }
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(25);
			match(NEWLINE);
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

	public static class DeclContext extends ParserRuleContext {
		public DeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decl; }
	}

	public final DeclContext decl() throws RecognitionException {
		DeclContext _localctx = new DeclContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
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

	public static class PrimitiveTypeContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(AgohyaParser.INT, 0); }
		public TerminalNode DOUBLE() { return getToken(AgohyaParser.DOUBLE, 0); }
		public TerminalNode BOOL() { return getToken(AgohyaParser.BOOL, 0); }
		public PrimitiveTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveType; }
	}

	public final PrimitiveTypeContext primitiveType() throws RecognitionException {
		PrimitiveTypeContext _localctx = new PrimitiveTypeContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_primitiveType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(29);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << DOUBLE) | (1L << BOOL))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3Z\"\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\3\2\3\2\5\2\17\n\2\3\2\6\2\22\n\2\r\2\16\2"+
		"\23\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\6\2\2\7\2\4\6\b"+
		"\n\2\3\3\2\3\5\2\36\2\f\3\2\2\2\4\27\3\2\2\2\6\33\3\2\2\2\b\35\3\2\2\2"+
		"\n\37\3\2\2\2\f\16\5\4\3\2\r\17\7X\2\2\16\r\3\2\2\2\16\17\3\2\2\2\17\21"+
		"\3\2\2\2\20\22\5\6\4\2\21\20\3\2\2\2\22\23\3\2\2\2\23\21\3\2\2\2\23\24"+
		"\3\2\2\2\24\25\3\2\2\2\25\26\7\2\2\3\26\3\3\2\2\2\27\30\7\32\2\2\30\31"+
		"\7Z\2\2\31\32\7\62\2\2\32\5\3\2\2\2\33\34\7X\2\2\34\7\3\2\2\2\35\36\3"+
		"\2\2\2\36\t\3\2\2\2\37 \t\2\2\2 \13\3\2\2\2\4\16\23";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
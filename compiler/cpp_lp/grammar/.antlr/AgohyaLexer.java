// Generated from d:\agohya\lang\cpp_lp\grammar\AgohyaLexer.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class AgohyaLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		NON_CLASS_MODIFIER=1, PRIMITIVE_TYPES=2, OTHER_BUILT_IN_TYPES=3, INT=4, 
		DOUBLE=5, BOOL=6, STRING=7, OBJECT=8, FUNCTION=9, PLUS=10, MINUS=11, MULTIPLY=12, 
		DIVIDE=13, MODULUS=14, AND=15, ASSIGN=16, EQUALS=17, NOT_EQUALS=18, NOT=19, 
		MUST_NOT_BE_NULL=20, NULL_THEN_EVAL_TO_NULL=21, IF_NULL_THEN_ASSIGN=22, 
		LAMBDA_FUNC_IDENTIFIER=23, OR=24, IN=25, LESS_THAN=26, GREATER_THAN=27, 
		GREATER_THAN_EQUALS=28, LESS_THAN_EQUALS=29, INCREMENT=30, DECREMENT=31, 
		PLUS_EQUALS=32, MINUS_EQUALS=33, MULTIPLY_EQUALS=34, DIVIDE_EQUALS=35, 
		MODULUS_EQUALS=36, SQR_BRACK_OPEN=37, SQR_BRACK_CLOSE=38, CURL_BRACK_OPEN=39, 
		CURL_BRACK_CLOSE=40, PAREN_OPEN=41, PAREN_CLOSE=42, NULLABLE_TYPE_IDENTIFIER=43, 
		ANNOTATION=44, AT=45, ABSTRACT=46, AS=47, ASSERT=48, ASYNC=49, AWAIT=50, 
		BREAK=51, CASE=52, CATCH=53, CLASS=54, CONST=55, CONTINUE=56, DEFAULT=57, 
		DO=58, ELSE=59, ENUM=60, EXTENDS_OR_EXTENSION_OF=61, EXTERNAL=62, FACTORY=63, 
		FALSE=64, FINAL=65, FINALLY=66, FOR=67, IF=68, IMPLEMENTS=69, IMPORT=70, 
		IS=71, LET=72, LIB=73, NEW=74, ON=75, OPERATOR=76, PRIVATE=77, PUBLIC=78, 
		RETURN=79, STATIC=80, SUPER=81, SWITCH=82, THIS=83, THROW=84, TRUE=85, 
		TRY=86, TYPEDEF=87, VISIBILITY_MODIFIERS=88, VOID=89, WHILE=90, WHITESPACE=91, 
		SINGLE_LINE_COMMENT=92, MULTI_LINE_COMMENT=93, LITERAL=94, BOOL_LITERAL=95, 
		DOUBLE_LITERAL=96, HEX_LITERAL=97, INT_LITERAL=98, NULL_LITERAL=99, STRING_LITERAL=100, 
		LIB_OR_IMPORT_LITERAL=101, CAPITAL_LETTER=102, IDENTIFIER=103, NEWLINE=104, 
		Underscore=105, Dollar=106, QuestionMark=107, COMMA=108, Dot=109, COLON=110, 
		SEMICOLON=111, HexDigits=112, Digits=113;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"NON_CLASS_MODIFIER", "PRIMITIVE_TYPES", "OTHER_BUILT_IN_TYPES", "INT", 
			"DOUBLE", "BOOL", "STRING", "OBJECT", "FUNCTION", "PLUS", "MINUS", "MULTIPLY", 
			"DIVIDE", "MODULUS", "AND", "ASSIGN", "EQUALS", "NOT_EQUALS", "NOT", 
			"MUST_NOT_BE_NULL", "NULL_THEN_EVAL_TO_NULL", "IF_NULL_THEN_ASSIGN", 
			"LAMBDA_FUNC_IDENTIFIER", "OR", "IN", "LESS_THAN", "GREATER_THAN", "GREATER_THAN_EQUALS", 
			"LESS_THAN_EQUALS", "INCREMENT", "DECREMENT", "PLUS_EQUALS", "MINUS_EQUALS", 
			"MULTIPLY_EQUALS", "DIVIDE_EQUALS", "MODULUS_EQUALS", "SQR_BRACK_OPEN", 
			"SQR_BRACK_CLOSE", "CURL_BRACK_OPEN", "CURL_BRACK_CLOSE", "PAREN_OPEN", 
			"PAREN_CLOSE", "NULLABLE_TYPE_IDENTIFIER", "ANNOTATION", "AT", "ABSTRACT", 
			"AS", "ASSERT", "ASYNC", "AWAIT", "BREAK", "CASE", "CATCH", "CLASS", 
			"CONST", "CONTINUE", "DEFAULT", "DO", "ELSE", "ENUM", "EXTENDS_OR_EXTENSION_OF", 
			"EXTERNAL", "FACTORY", "FALSE", "FINAL", "FINALLY", "FOR", "IF", "IMPLEMENTS", 
			"IMPORT", "IS", "LET", "LIB", "NEW", "ON", "OPERATOR", "PRIVATE", "PUBLIC", 
			"RETURN", "STATIC", "SUPER", "SWITCH", "THIS", "THROW", "TRUE", "TRY", 
			"TYPEDEF", "VISIBILITY_MODIFIERS", "VOID", "WHILE", "WHITESPACE", "SINGLE_LINE_COMMENT", 
			"MULTI_LINE_COMMENT", "LITERAL", "BOOL_LITERAL", "DOUBLE_LITERAL", "HEX_LITERAL", 
			"INT_LITERAL", "NULL_LITERAL", "STRING_LITERAL", "LIB_OR_IMPORT_LITERAL", 
			"CAPITAL_LETTER", "IDENTIFIER", "NEWLINE", "Underscore", "Dollar", "QuestionMark", 
			"COMMA", "Dot", "COLON", "SEMICOLON", "EscapeSequence", "HexDigits", 
			"Digits", "Letters", "LetterOrDigit", "UnicodeLetter", "Letter", "Digit", 
			"HexDigit"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, "'int'", "'double'", "'bool'", "'String'", "'OBJECT'", 
			"'Function'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&&'", "'='", "'=='", 
			"'!='", "'!'", "'!.'", "'?.'", "'??='", "'=>'", "'||'", null, "'<'", 
			"'>'", "'>='", "'<='", "'++'", "'--'", "'+='", "'-='", "'*='", "'/='", 
			"'%='", "'['", "']'", "'{'", "'}'", "'('", "')'", null, "'annotation'", 
			"'@'", "'abstract'", "'as'", "'assert'", "'async'", "'await'", "'break'", 
			"'case'", "'catch'", "'class'", "'const'", "'continue'", "'default'", 
			"'do'", "'else'", "'enum'", null, "'external'", "'factory'", "'false'", 
			"'final'", "'finally'", "'for'", "'if'", "'implements'", "'import'", 
			"'is'", "'let'", "'lib'", "'new'", "'on'", "'operator'", "'private'", 
			"'public'", "'return'", "'static'", "'super'", "'switch'", "'this'", 
			"'throw'", "'true'", "'try'", "'typedef'", null, "'void'", "'while'", 
			null, null, null, null, null, null, null, null, "'null'", null, null, 
			null, null, null, "'_'", "'$'", "'?'", "','", "'.'", "':'", "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "NON_CLASS_MODIFIER", "PRIMITIVE_TYPES", "OTHER_BUILT_IN_TYPES", 
			"INT", "DOUBLE", "BOOL", "STRING", "OBJECT", "FUNCTION", "PLUS", "MINUS", 
			"MULTIPLY", "DIVIDE", "MODULUS", "AND", "ASSIGN", "EQUALS", "NOT_EQUALS", 
			"NOT", "MUST_NOT_BE_NULL", "NULL_THEN_EVAL_TO_NULL", "IF_NULL_THEN_ASSIGN", 
			"LAMBDA_FUNC_IDENTIFIER", "OR", "IN", "LESS_THAN", "GREATER_THAN", "GREATER_THAN_EQUALS", 
			"LESS_THAN_EQUALS", "INCREMENT", "DECREMENT", "PLUS_EQUALS", "MINUS_EQUALS", 
			"MULTIPLY_EQUALS", "DIVIDE_EQUALS", "MODULUS_EQUALS", "SQR_BRACK_OPEN", 
			"SQR_BRACK_CLOSE", "CURL_BRACK_OPEN", "CURL_BRACK_CLOSE", "PAREN_OPEN", 
			"PAREN_CLOSE", "NULLABLE_TYPE_IDENTIFIER", "ANNOTATION", "AT", "ABSTRACT", 
			"AS", "ASSERT", "ASYNC", "AWAIT", "BREAK", "CASE", "CATCH", "CLASS", 
			"CONST", "CONTINUE", "DEFAULT", "DO", "ELSE", "ENUM", "EXTENDS_OR_EXTENSION_OF", 
			"EXTERNAL", "FACTORY", "FALSE", "FINAL", "FINALLY", "FOR", "IF", "IMPLEMENTS", 
			"IMPORT", "IS", "LET", "LIB", "NEW", "ON", "OPERATOR", "PRIVATE", "PUBLIC", 
			"RETURN", "STATIC", "SUPER", "SWITCH", "THIS", "THROW", "TRUE", "TRY", 
			"TYPEDEF", "VISIBILITY_MODIFIERS", "VOID", "WHILE", "WHITESPACE", "SINGLE_LINE_COMMENT", 
			"MULTI_LINE_COMMENT", "LITERAL", "BOOL_LITERAL", "DOUBLE_LITERAL", "HEX_LITERAL", 
			"INT_LITERAL", "NULL_LITERAL", "STRING_LITERAL", "LIB_OR_IMPORT_LITERAL", 
			"CAPITAL_LETTER", "IDENTIFIER", "NEWLINE", "Underscore", "Dollar", "QuestionMark", 
			"COMMA", "Dot", "COLON", "SEMICOLON", "HexDigits", "Digits"
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


	public AgohyaLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "AgohyaLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2s\u0340\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k\t"+
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\4r\tr\4s\ts\4t\tt\4u\tu\4v\tv\4"+
		"w\tw\4x\tx\4y\ty\3\2\3\2\3\2\3\2\5\2\u00f8\n\2\3\3\3\3\3\3\5\3\u00fd\n"+
		"\3\3\4\3\4\3\4\5\4\u0102\n\4\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\6\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r"+
		"\3\16\3\16\3\17\3\17\3\20\3\20\3\20\3\21\3\21\3\22\3\22\3\22\3\23\3\23"+
		"\3\23\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\30"+
		"\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\33\3\33\3\34\3\34\3\35\3\35\3\35"+
		"\3\36\3\36\3\36\3\37\3\37\3\37\3 \3 \3 \3!\3!\3!\3\"\3\"\3\"\3#\3#\3#"+
		"\3$\3$\3$\3%\3%\3%\3&\3&\3\'\3\'\3(\3(\3)\3)\3*\3*\3+\3+\3,\3,\3-\3-\3"+
		"-\3-\3-\3-\3-\3-\3-\3-\3-\3.\3.\3/\3/\3/\3/\3/\3/\3/\3/\3/\3\60\3\60\3"+
		"\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\62\3\62\3\62\3\62\3\62\3\62\3"+
		"\63\3\63\3\63\3\63\3\63\3\63\3\64\3\64\3\64\3\64\3\64\3\64\3\65\3\65\3"+
		"\65\3\65\3\65\3\66\3\66\3\66\3\66\3\66\3\66\3\67\3\67\3\67\3\67\3\67\3"+
		"\67\38\38\38\38\38\38\39\39\39\39\39\39\39\39\39\3:\3:\3:\3:\3:\3:\3:"+
		"\3:\3;\3;\3;\3<\3<\3<\3<\3<\3=\3=\3=\3=\3=\3>\3>\3?\3?\3?\3?\3?\3?\3?"+
		"\3?\3?\3@\3@\3@\3@\3@\3@\3@\3@\3A\3A\3A\3A\3A\3A\3B\3B\3B\3B\3B\3B\3C"+
		"\3C\3C\3C\3C\3C\3C\3C\3D\3D\3D\3D\3E\3E\3E\3F\3F\3F\3F\3F\3F\3F\3F\3F"+
		"\3F\3F\3G\3G\3G\3G\3G\3G\3G\3H\3H\3H\3I\3I\3I\3I\3J\3J\3J\3J\3K\3K\3K"+
		"\3K\3L\3L\3L\3M\3M\3M\3M\3M\3M\3M\3M\3M\3N\3N\3N\3N\3N\3N\3N\3N\3O\3O"+
		"\3O\3O\3O\3O\3O\3P\3P\3P\3P\3P\3P\3P\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3R\3R\3R\3R"+
		"\3R\3R\3S\3S\3S\3S\3S\3S\3S\3T\3T\3T\3T\3T\3U\3U\3U\3U\3U\3U\3V\3V\3V"+
		"\3V\3V\3W\3W\3W\3W\3X\3X\3X\3X\3X\3X\3X\3X\3Y\3Y\5Y\u028b\nY\3Z\3Z\3Z"+
		"\3Z\3Z\3[\3[\3[\3[\3[\3[\3\\\3\\\3\\\6\\\u029b\n\\\r\\\16\\\u029c\3\\"+
		"\3\\\3]\3]\3]\3]\7]\u02a5\n]\f]\16]\u02a8\13]\3]\3]\3^\3^\3^\3^\3^\7^"+
		"\u02b1\n^\f^\16^\u02b4\13^\3^\3^\3^\3^\3^\3_\3_\3_\3_\3_\5_\u02c0\n_\3"+
		"`\3`\5`\u02c4\n`\3a\5a\u02c7\na\3a\3a\3a\3a\3a\5a\u02ce\na\3a\3a\5a\u02d2"+
		"\na\3b\3b\3b\3b\3c\5c\u02d9\nc\3c\3c\3d\3d\3d\3d\3d\3e\3e\3e\5e\u02e5"+
		"\ne\3e\3e\3e\3e\5e\u02eb\ne\3e\5e\u02ee\ne\3f\3f\5f\u02f2\nf\3g\3g\3h"+
		"\3h\3h\7h\u02f9\nh\fh\16h\u02fc\13h\3i\3i\3j\3j\3k\3k\3l\3l\3m\3m\3n\3"+
		"n\3o\3o\3p\3p\3q\3q\3q\3q\5q\u0312\nq\3q\5q\u0315\nq\3q\3q\3q\5q\u031a"+
		"\nq\3r\3r\7r\u031e\nr\fr\16r\u0321\13r\3s\6s\u0324\ns\rs\16s\u0325\3t"+
		"\6t\u0329\nt\rt\16t\u032a\3u\3u\5u\u032f\nu\3v\6v\u0332\nv\rv\16v\u0333"+
		"\3v\3v\3v\3v\3v\3w\3w\3x\3x\3y\3y\3\u02b2\2z\3\3\5\4\7\5\t\6\13\7\r\b"+
		"\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26"+
		"+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S"+
		"+U,W-Y.[/]\60_\61a\62c\63e\64g\65i\66k\67m8o9q:s;u<w=y>{?}@\177A\u0081"+
		"B\u0083C\u0085D\u0087E\u0089F\u008bG\u008dH\u008fI\u0091J\u0093K\u0095"+
		"L\u0097M\u0099N\u009bO\u009dP\u009fQ\u00a1R\u00a3S\u00a5T\u00a7U\u00a9"+
		"V\u00abW\u00adX\u00afY\u00b1Z\u00b3[\u00b5\\\u00b7]\u00b9^\u00bb_\u00bd"+
		"`\u00bfa\u00c1b\u00c3c\u00c5d\u00c7e\u00c9f\u00cbg\u00cdh\u00cfi\u00d1"+
		"j\u00d3k\u00d5l\u00d7m\u00d9n\u00dbo\u00ddp\u00dfq\u00e1\2\u00e3r\u00e5"+
		"s\u00e7\2\u00e9\2\u00eb\2\u00ed\2\u00ef\2\u00f1\2\3\2\16\4\2\13\13\"\""+
		"\4\2\f\f\17\17\3\2//\4\2ZZzz\6\2\f\f\17\17))^^\3\2C\\\n\2$$))^^ddhhpp"+
		"ttvv\3\2\62\65\3\2\629\4\2C\\c|\3\2\62;\5\2\62;CHch\2\u035d\2\3\3\2\2"+
		"\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3"+
		"\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2"+
		"\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2"+
		"\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2"+
		"\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3"+
		"\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2"+
		"\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2"+
		"W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3"+
		"\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2"+
		"\2\2q\3\2\2\2\2s\3\2\2\2\2u\3\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2"+
		"}\3\2\2\2\2\177\3\2\2\2\2\u0081\3\2\2\2\2\u0083\3\2\2\2\2\u0085\3\2\2"+
		"\2\2\u0087\3\2\2\2\2\u0089\3\2\2\2\2\u008b\3\2\2\2\2\u008d\3\2\2\2\2\u008f"+
		"\3\2\2\2\2\u0091\3\2\2\2\2\u0093\3\2\2\2\2\u0095\3\2\2\2\2\u0097\3\2\2"+
		"\2\2\u0099\3\2\2\2\2\u009b\3\2\2\2\2\u009d\3\2\2\2\2\u009f\3\2\2\2\2\u00a1"+
		"\3\2\2\2\2\u00a3\3\2\2\2\2\u00a5\3\2\2\2\2\u00a7\3\2\2\2\2\u00a9\3\2\2"+
		"\2\2\u00ab\3\2\2\2\2\u00ad\3\2\2\2\2\u00af\3\2\2\2\2\u00b1\3\2\2\2\2\u00b3"+
		"\3\2\2\2\2\u00b5\3\2\2\2\2\u00b7\3\2\2\2\2\u00b9\3\2\2\2\2\u00bb\3\2\2"+
		"\2\2\u00bd\3\2\2\2\2\u00bf\3\2\2\2\2\u00c1\3\2\2\2\2\u00c3\3\2\2\2\2\u00c5"+
		"\3\2\2\2\2\u00c7\3\2\2\2\2\u00c9\3\2\2\2\2\u00cb\3\2\2\2\2\u00cd\3\2\2"+
		"\2\2\u00cf\3\2\2\2\2\u00d1\3\2\2\2\2\u00d3\3\2\2\2\2\u00d5\3\2\2\2\2\u00d7"+
		"\3\2\2\2\2\u00d9\3\2\2\2\2\u00db\3\2\2\2\2\u00dd\3\2\2\2\2\u00df\3\2\2"+
		"\2\2\u00e3\3\2\2\2\2\u00e5\3\2\2\2\3\u00f7\3\2\2\2\5\u00fc\3\2\2\2\7\u0101"+
		"\3\2\2\2\t\u0103\3\2\2\2\13\u0107\3\2\2\2\r\u010e\3\2\2\2\17\u0113\3\2"+
		"\2\2\21\u011a\3\2\2\2\23\u0121\3\2\2\2\25\u012a\3\2\2\2\27\u012c\3\2\2"+
		"\2\31\u012e\3\2\2\2\33\u0130\3\2\2\2\35\u0132\3\2\2\2\37\u0134\3\2\2\2"+
		"!\u0137\3\2\2\2#\u0139\3\2\2\2%\u013c\3\2\2\2\'\u013f\3\2\2\2)\u0141\3"+
		"\2\2\2+\u0144\3\2\2\2-\u0147\3\2\2\2/\u014b\3\2\2\2\61\u014e\3\2\2\2\63"+
		"\u0151\3\2\2\2\65\u0153\3\2\2\2\67\u0155\3\2\2\29\u0157\3\2\2\2;\u015a"+
		"\3\2\2\2=\u015d\3\2\2\2?\u0160\3\2\2\2A\u0163\3\2\2\2C\u0166\3\2\2\2E"+
		"\u0169\3\2\2\2G\u016c\3\2\2\2I\u016f\3\2\2\2K\u0172\3\2\2\2M\u0174\3\2"+
		"\2\2O\u0176\3\2\2\2Q\u0178\3\2\2\2S\u017a\3\2\2\2U\u017c\3\2\2\2W\u017e"+
		"\3\2\2\2Y\u0180\3\2\2\2[\u018b\3\2\2\2]\u018d\3\2\2\2_\u0196\3\2\2\2a"+
		"\u0199\3\2\2\2c\u01a0\3\2\2\2e\u01a6\3\2\2\2g\u01ac\3\2\2\2i\u01b2\3\2"+
		"\2\2k\u01b7\3\2\2\2m\u01bd\3\2\2\2o\u01c3\3\2\2\2q\u01c9\3\2\2\2s\u01d2"+
		"\3\2\2\2u\u01da\3\2\2\2w\u01dd\3\2\2\2y\u01e2\3\2\2\2{\u01e7\3\2\2\2}"+
		"\u01e9\3\2\2\2\177\u01f2\3\2\2\2\u0081\u01fa\3\2\2\2\u0083\u0200\3\2\2"+
		"\2\u0085\u0206\3\2\2\2\u0087\u020e\3\2\2\2\u0089\u0212\3\2\2\2\u008b\u0215"+
		"\3\2\2\2\u008d\u0220\3\2\2\2\u008f\u0227\3\2\2\2\u0091\u022a\3\2\2\2\u0093"+
		"\u022e\3\2\2\2\u0095\u0232\3\2\2\2\u0097\u0236\3\2\2\2\u0099\u0239\3\2"+
		"\2\2\u009b\u0242\3\2\2\2\u009d\u024a\3\2\2\2\u009f\u0251\3\2\2\2\u00a1"+
		"\u0258\3\2\2\2\u00a3\u025f\3\2\2\2\u00a5\u0265\3\2\2\2\u00a7\u026c\3\2"+
		"\2\2\u00a9\u0271\3\2\2\2\u00ab\u0277\3\2\2\2\u00ad\u027c\3\2\2\2\u00af"+
		"\u0280\3\2\2\2\u00b1\u028a\3\2\2\2\u00b3\u028c\3\2\2\2\u00b5\u0291\3\2"+
		"\2\2\u00b7\u029a\3\2\2\2\u00b9\u02a0\3\2\2\2\u00bb\u02ab\3\2\2\2\u00bd"+
		"\u02bf\3\2\2\2\u00bf\u02c3\3\2\2\2\u00c1\u02d1\3\2\2\2\u00c3\u02d3\3\2"+
		"\2\2\u00c5\u02d8\3\2\2\2\u00c7\u02dc\3\2\2\2\u00c9\u02ed\3\2\2\2\u00cb"+
		"\u02f1\3\2\2\2\u00cd\u02f3\3\2\2\2\u00cf\u02f5\3\2\2\2\u00d1\u02fd\3\2"+
		"\2\2\u00d3\u02ff\3\2\2\2\u00d5\u0301\3\2\2\2\u00d7\u0303\3\2\2\2\u00d9"+
		"\u0305\3\2\2\2\u00db\u0307\3\2\2\2\u00dd\u0309\3\2\2\2\u00df\u030b\3\2"+
		"\2\2\u00e1\u0319\3\2\2\2\u00e3\u031b\3\2\2\2\u00e5\u0323\3\2\2\2\u00e7"+
		"\u0328\3\2\2\2\u00e9\u032e\3\2\2\2\u00eb\u0331\3\2\2\2\u00ed\u033a\3\2"+
		"\2\2\u00ef\u033c\3\2\2\2\u00f1\u033e\3\2\2\2\u00f3\u00f8\5\u00a1Q\2\u00f4"+
		"\u00f8\5\u0083B\2\u00f5\u00f8\5\u009bN\2\u00f6\u00f8\5\u009dO\2\u00f7"+
		"\u00f3\3\2\2\2\u00f7\u00f4\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f7\u00f6\3\2"+
		"\2\2\u00f8\4\3\2\2\2\u00f9\u00fd\5\t\5\2\u00fa\u00fd\5\13\6\2\u00fb\u00fd"+
		"\5\r\7\2\u00fc\u00f9\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fc\u00fb\3\2\2\2\u00fd"+
		"\6\3\2\2\2\u00fe\u0102\5\17\b\2\u00ff\u0102\5\21\t\2\u0100\u0102\5\23"+
		"\n\2\u0101\u00fe\3\2\2\2\u0101\u00ff\3\2\2\2\u0101\u0100\3\2\2\2\u0102"+
		"\b\3\2\2\2\u0103\u0104\7k\2\2\u0104\u0105\7p\2\2\u0105\u0106\7v\2\2\u0106"+
		"\n\3\2\2\2\u0107\u0108\7f\2\2\u0108\u0109\7q\2\2\u0109\u010a\7w\2\2\u010a"+
		"\u010b\7d\2\2\u010b\u010c\7n\2\2\u010c\u010d\7g\2\2\u010d\f\3\2\2\2\u010e"+
		"\u010f\7d\2\2\u010f\u0110\7q\2\2\u0110\u0111\7q\2\2\u0111\u0112\7n\2\2"+
		"\u0112\16\3\2\2\2\u0113\u0114\7U\2\2\u0114\u0115\7v\2\2\u0115\u0116\7"+
		"t\2\2\u0116\u0117\7k\2\2\u0117\u0118\7p\2\2\u0118\u0119\7i\2\2\u0119\20"+
		"\3\2\2\2\u011a\u011b\7Q\2\2\u011b\u011c\7D\2\2\u011c\u011d\7L\2\2\u011d"+
		"\u011e\7G\2\2\u011e\u011f\7E\2\2\u011f\u0120\7V\2\2\u0120\22\3\2\2\2\u0121"+
		"\u0122\7H\2\2\u0122\u0123\7w\2\2\u0123\u0124\7p\2\2\u0124\u0125\7e\2\2"+
		"\u0125\u0126\7v\2\2\u0126\u0127\7k\2\2\u0127\u0128\7q\2\2\u0128\u0129"+
		"\7p\2\2\u0129\24\3\2\2\2\u012a\u012b\7-\2\2\u012b\26\3\2\2\2\u012c\u012d"+
		"\7/\2\2\u012d\30\3\2\2\2\u012e\u012f\7,\2\2\u012f\32\3\2\2\2\u0130\u0131"+
		"\7\61\2\2\u0131\34\3\2\2\2\u0132\u0133\7\'\2\2\u0133\36\3\2\2\2\u0134"+
		"\u0135\7(\2\2\u0135\u0136\7(\2\2\u0136 \3\2\2\2\u0137\u0138\7?\2\2\u0138"+
		"\"\3\2\2\2\u0139\u013a\7?\2\2\u013a\u013b\7?\2\2\u013b$\3\2\2\2\u013c"+
		"\u013d\7#\2\2\u013d\u013e\7?\2\2\u013e&\3\2\2\2\u013f\u0140\7#\2\2\u0140"+
		"(\3\2\2\2\u0141\u0142\7#\2\2\u0142\u0143\7\60\2\2\u0143*\3\2\2\2\u0144"+
		"\u0145\7A\2\2\u0145\u0146\7\60\2\2\u0146,\3\2\2\2\u0147\u0148\7A\2\2\u0148"+
		"\u0149\7A\2\2\u0149\u014a\7?\2\2\u014a.\3\2\2\2\u014b\u014c\7?\2\2\u014c"+
		"\u014d\7@\2\2\u014d\60\3\2\2\2\u014e\u014f\7~\2\2\u014f\u0150\7~\2\2\u0150"+
		"\62\3\2\2\2\u0151\u0152\5\u00ddo\2\u0152\64\3\2\2\2\u0153\u0154\7>\2\2"+
		"\u0154\66\3\2\2\2\u0155\u0156\7@\2\2\u01568\3\2\2\2\u0157\u0158\7@\2\2"+
		"\u0158\u0159\7?\2\2\u0159:\3\2\2\2\u015a\u015b\7>\2\2\u015b\u015c\7?\2"+
		"\2\u015c<\3\2\2\2\u015d\u015e\7-\2\2\u015e\u015f\7-\2\2\u015f>\3\2\2\2"+
		"\u0160\u0161\7/\2\2\u0161\u0162\7/\2\2\u0162@\3\2\2\2\u0163\u0164\7-\2"+
		"\2\u0164\u0165\7?\2\2\u0165B\3\2\2\2\u0166\u0167\7/\2\2\u0167\u0168\7"+
		"?\2\2\u0168D\3\2\2\2\u0169\u016a\7,\2\2\u016a\u016b\7?\2\2\u016bF\3\2"+
		"\2\2\u016c\u016d\7\61\2\2\u016d\u016e\7?\2\2\u016eH\3\2\2\2\u016f\u0170"+
		"\7\'\2\2\u0170\u0171\7?\2\2\u0171J\3\2\2\2\u0172\u0173\7]\2\2\u0173L\3"+
		"\2\2\2\u0174\u0175\7_\2\2\u0175N\3\2\2\2\u0176\u0177\7}\2\2\u0177P\3\2"+
		"\2\2\u0178\u0179\7\177\2\2\u0179R\3\2\2\2\u017a\u017b\7*\2\2\u017bT\3"+
		"\2\2\2\u017c\u017d\7+\2\2\u017dV\3\2\2\2\u017e\u017f\5\u00d7l\2\u017f"+
		"X\3\2\2\2\u0180\u0181\7c\2\2\u0181\u0182\7p\2\2\u0182\u0183\7p\2\2\u0183"+
		"\u0184\7q\2\2\u0184\u0185\7v\2\2\u0185\u0186\7c\2\2\u0186\u0187\7v\2\2"+
		"\u0187\u0188\7k\2\2\u0188\u0189\7q\2\2\u0189\u018a\7p\2\2\u018aZ\3\2\2"+
		"\2\u018b\u018c\7B\2\2\u018c\\\3\2\2\2\u018d\u018e\7c\2\2\u018e\u018f\7"+
		"d\2\2\u018f\u0190\7u\2\2\u0190\u0191\7v\2\2\u0191\u0192\7t\2\2\u0192\u0193"+
		"\7c\2\2\u0193\u0194\7e\2\2\u0194\u0195\7v\2\2\u0195^\3\2\2\2\u0196\u0197"+
		"\7c\2\2\u0197\u0198\7u\2\2\u0198`\3\2\2\2\u0199\u019a\7c\2\2\u019a\u019b"+
		"\7u\2\2\u019b\u019c\7u\2\2\u019c\u019d\7g\2\2\u019d\u019e\7t\2\2\u019e"+
		"\u019f\7v\2\2\u019fb\3\2\2\2\u01a0\u01a1\7c\2\2\u01a1\u01a2\7u\2\2\u01a2"+
		"\u01a3\7{\2\2\u01a3\u01a4\7p\2\2\u01a4\u01a5\7e\2\2\u01a5d\3\2\2\2\u01a6"+
		"\u01a7\7c\2\2\u01a7\u01a8\7y\2\2\u01a8\u01a9\7c\2\2\u01a9\u01aa\7k\2\2"+
		"\u01aa\u01ab\7v\2\2\u01abf\3\2\2\2\u01ac\u01ad\7d\2\2\u01ad\u01ae\7t\2"+
		"\2\u01ae\u01af\7g\2\2\u01af\u01b0\7c\2\2\u01b0\u01b1\7m\2\2\u01b1h\3\2"+
		"\2\2\u01b2\u01b3\7e\2\2\u01b3\u01b4\7c\2\2\u01b4\u01b5\7u\2\2\u01b5\u01b6"+
		"\7g\2\2\u01b6j\3\2\2\2\u01b7\u01b8\7e\2\2\u01b8\u01b9\7c\2\2\u01b9\u01ba"+
		"\7v\2\2\u01ba\u01bb\7e\2\2\u01bb\u01bc\7j\2\2\u01bcl\3\2\2\2\u01bd\u01be"+
		"\7e\2\2\u01be\u01bf\7n\2\2\u01bf\u01c0\7c\2\2\u01c0\u01c1\7u\2\2\u01c1"+
		"\u01c2\7u\2\2\u01c2n\3\2\2\2\u01c3\u01c4\7e\2\2\u01c4\u01c5\7q\2\2\u01c5"+
		"\u01c6\7p\2\2\u01c6\u01c7\7u\2\2\u01c7\u01c8\7v\2\2\u01c8p\3\2\2\2\u01c9"+
		"\u01ca\7e\2\2\u01ca\u01cb\7q\2\2\u01cb\u01cc\7p\2\2\u01cc\u01cd\7v\2\2"+
		"\u01cd\u01ce\7k\2\2\u01ce\u01cf\7p\2\2\u01cf\u01d0\7w\2\2\u01d0\u01d1"+
		"\7g\2\2\u01d1r\3\2\2\2\u01d2\u01d3\7f\2\2\u01d3\u01d4\7g\2\2\u01d4\u01d5"+
		"\7h\2\2\u01d5\u01d6\7c\2\2\u01d6\u01d7\7w\2\2\u01d7\u01d8\7n\2\2\u01d8"+
		"\u01d9\7v\2\2\u01d9t\3\2\2\2\u01da\u01db\7f\2\2\u01db\u01dc\7q\2\2\u01dc"+
		"v\3\2\2\2\u01dd\u01de\7g\2\2\u01de\u01df\7n\2\2\u01df\u01e0\7u\2\2\u01e0"+
		"\u01e1\7g\2\2\u01e1x\3\2\2\2\u01e2\u01e3\7g\2\2\u01e3\u01e4\7p\2\2\u01e4"+
		"\u01e5\7w\2\2\u01e5\u01e6\7o\2\2\u01e6z\3\2\2\2\u01e7\u01e8\5\u00ddo\2"+
		"\u01e8|\3\2\2\2\u01e9\u01ea\7g\2\2\u01ea\u01eb\7z\2\2\u01eb\u01ec\7v\2"+
		"\2\u01ec\u01ed\7g\2\2\u01ed\u01ee\7t\2\2\u01ee\u01ef\7p\2\2\u01ef\u01f0"+
		"\7c\2\2\u01f0\u01f1\7n\2\2\u01f1~\3\2\2\2\u01f2\u01f3\7h\2\2\u01f3\u01f4"+
		"\7c\2\2\u01f4\u01f5\7e\2\2\u01f5\u01f6\7v\2\2\u01f6\u01f7\7q\2\2\u01f7"+
		"\u01f8\7t\2\2\u01f8\u01f9\7{\2\2\u01f9\u0080\3\2\2\2\u01fa\u01fb\7h\2"+
		"\2\u01fb\u01fc\7c\2\2\u01fc\u01fd\7n\2\2\u01fd\u01fe\7u\2\2\u01fe\u01ff"+
		"\7g\2\2\u01ff\u0082\3\2\2\2\u0200\u0201\7h\2\2\u0201\u0202\7k\2\2\u0202"+
		"\u0203\7p\2\2\u0203\u0204\7c\2\2\u0204\u0205\7n\2\2\u0205\u0084\3\2\2"+
		"\2\u0206\u0207\7h\2\2\u0207\u0208\7k\2\2\u0208\u0209\7p\2\2\u0209\u020a"+
		"\7c\2\2\u020a\u020b\7n\2\2\u020b\u020c\7n\2\2\u020c\u020d\7{\2\2\u020d"+
		"\u0086\3\2\2\2\u020e\u020f\7h\2\2\u020f\u0210\7q\2\2\u0210\u0211\7t\2"+
		"\2\u0211\u0088\3\2\2\2\u0212\u0213\7k\2\2\u0213\u0214\7h\2\2\u0214\u008a"+
		"\3\2\2\2\u0215\u0216\7k\2\2\u0216\u0217\7o\2\2\u0217\u0218\7r\2\2\u0218"+
		"\u0219\7n\2\2\u0219\u021a\7g\2\2\u021a\u021b\7o\2\2\u021b\u021c\7g\2\2"+
		"\u021c\u021d\7p\2\2\u021d\u021e\7v\2\2\u021e\u021f\7u\2\2\u021f\u008c"+
		"\3\2\2\2\u0220\u0221\7k\2\2\u0221\u0222\7o\2\2\u0222\u0223\7r\2\2\u0223"+
		"\u0224\7q\2\2\u0224\u0225\7t\2\2\u0225\u0226\7v\2\2\u0226\u008e\3\2\2"+
		"\2\u0227\u0228\7k\2\2\u0228\u0229\7u\2\2\u0229\u0090\3\2\2\2\u022a\u022b"+
		"\7n\2\2\u022b\u022c\7g\2\2\u022c\u022d\7v\2\2\u022d\u0092\3\2\2\2\u022e"+
		"\u022f\7n\2\2\u022f\u0230\7k\2\2\u0230\u0231\7d\2\2\u0231\u0094\3\2\2"+
		"\2\u0232\u0233\7p\2\2\u0233\u0234\7g\2\2\u0234\u0235\7y\2\2\u0235\u0096"+
		"\3\2\2\2\u0236\u0237\7q\2\2\u0237\u0238\7p\2\2\u0238\u0098\3\2\2\2\u0239"+
		"\u023a\7q\2\2\u023a\u023b\7r\2\2\u023b\u023c\7g\2\2\u023c\u023d\7t\2\2"+
		"\u023d\u023e\7c\2\2\u023e\u023f\7v\2\2\u023f\u0240\7q\2\2\u0240\u0241"+
		"\7t\2\2\u0241\u009a\3\2\2\2\u0242\u0243\7r\2\2\u0243\u0244\7t\2\2\u0244"+
		"\u0245\7k\2\2\u0245\u0246\7x\2\2\u0246\u0247\7c\2\2\u0247\u0248\7v\2\2"+
		"\u0248\u0249\7g\2\2\u0249\u009c\3\2\2\2\u024a\u024b\7r\2\2\u024b\u024c"+
		"\7w\2\2\u024c\u024d\7d\2\2\u024d\u024e\7n\2\2\u024e\u024f\7k\2\2\u024f"+
		"\u0250\7e\2\2\u0250\u009e\3\2\2\2\u0251\u0252\7t\2\2\u0252\u0253\7g\2"+
		"\2\u0253\u0254\7v\2\2\u0254\u0255\7w\2\2\u0255\u0256\7t\2\2\u0256\u0257"+
		"\7p\2\2\u0257\u00a0\3\2\2\2\u0258\u0259\7u\2\2\u0259\u025a\7v\2\2\u025a"+
		"\u025b\7c\2\2\u025b\u025c\7v\2\2\u025c\u025d\7k\2\2\u025d\u025e\7e\2\2"+
		"\u025e\u00a2\3\2\2\2\u025f\u0260\7u\2\2\u0260\u0261\7w\2\2\u0261\u0262"+
		"\7r\2\2\u0262\u0263\7g\2\2\u0263\u0264\7t\2\2\u0264\u00a4\3\2\2\2\u0265"+
		"\u0266\7u\2\2\u0266\u0267\7y\2\2\u0267\u0268\7k\2\2\u0268\u0269\7v\2\2"+
		"\u0269\u026a\7e\2\2\u026a\u026b\7j\2\2\u026b\u00a6\3\2\2\2\u026c\u026d"+
		"\7v\2\2\u026d\u026e\7j\2\2\u026e\u026f\7k\2\2\u026f\u0270\7u\2\2\u0270"+
		"\u00a8\3\2\2\2\u0271\u0272\7v\2\2\u0272\u0273\7j\2\2\u0273\u0274\7t\2"+
		"\2\u0274\u0275\7q\2\2\u0275\u0276\7y\2\2\u0276\u00aa\3\2\2\2\u0277\u0278"+
		"\7v\2\2\u0278\u0279\7t\2\2\u0279\u027a\7w\2\2\u027a\u027b\7g\2\2\u027b"+
		"\u00ac\3\2\2\2\u027c\u027d\7v\2\2\u027d\u027e\7t\2\2\u027e\u027f\7{\2"+
		"\2\u027f\u00ae\3\2\2\2\u0280\u0281\7v\2\2\u0281\u0282\7{\2\2\u0282\u0283"+
		"\7r\2\2\u0283\u0284\7g\2\2\u0284\u0285\7f\2\2\u0285\u0286\7g\2\2\u0286"+
		"\u0287\7h\2\2\u0287\u00b0\3\2\2\2\u0288\u028b\5\u009dO\2\u0289\u028b\5"+
		"\u009bN\2\u028a\u0288\3\2\2\2\u028a\u0289\3\2\2\2\u028b\u00b2\3\2\2\2"+
		"\u028c\u028d\7x\2\2\u028d\u028e\7q\2\2\u028e\u028f\7k\2\2\u028f\u0290"+
		"\7f\2\2\u0290\u00b4\3\2\2\2\u0291\u0292\7y\2\2\u0292\u0293\7j\2\2\u0293"+
		"\u0294\7k\2\2\u0294\u0295\7n\2\2\u0295\u0296\7g\2\2\u0296\u00b6\3\2\2"+
		"\2\u0297\u029b\t\2\2\2\u0298\u0299\7\f\2\2\u0299\u029b\7\17\2\2\u029a"+
		"\u0297\3\2\2\2\u029a\u0298\3\2\2\2\u029b\u029c\3\2\2\2\u029c\u029a\3\2"+
		"\2\2\u029c\u029d\3\2\2\2\u029d\u029e\3\2\2\2\u029e\u029f\b\\\2\2\u029f"+
		"\u00b8\3\2\2\2\u02a0\u02a1\7\61\2\2\u02a1\u02a2\7\61\2\2\u02a2\u02a6\3"+
		"\2\2\2\u02a3\u02a5\n\3\2\2\u02a4\u02a3\3\2\2\2\u02a5\u02a8\3\2\2\2\u02a6"+
		"\u02a4\3\2\2\2\u02a6\u02a7\3\2\2\2\u02a7\u02a9\3\2\2\2\u02a8\u02a6\3\2"+
		"\2\2\u02a9\u02aa\b]\2\2\u02aa\u00ba\3\2\2\2\u02ab\u02ac\7\61\2\2\u02ac"+
		"\u02ad\7,\2\2\u02ad\u02b2\3\2\2\2\u02ae\u02b1\5\u00bb^\2\u02af\u02b1\13"+
		"\2\2\2\u02b0\u02ae\3\2\2\2\u02b0\u02af\3\2\2\2\u02b1\u02b4\3\2\2\2\u02b2"+
		"\u02b3\3\2\2\2\u02b2\u02b0\3\2\2\2\u02b3\u02b5\3\2\2\2\u02b4\u02b2\3\2"+
		"\2\2\u02b5\u02b6\7,\2\2\u02b6\u02b7\7\61\2\2\u02b7\u02b8\3\2\2\2\u02b8"+
		"\u02b9\b^\2\2\u02b9\u00bc\3\2\2\2\u02ba\u02c0\5\u00bf`\2\u02bb\u02c0\5"+
		"\u00c1a\2\u02bc\u02c0\5\u00c3b\2\u02bd\u02c0\5\u00c5c\2\u02be\u02c0\5"+
		"\u00c9e\2\u02bf\u02ba\3\2\2\2\u02bf\u02bb\3\2\2\2\u02bf\u02bc\3\2\2\2"+
		"\u02bf\u02bd\3\2\2\2\u02bf\u02be\3\2\2\2\u02c0\u00be\3\2\2\2\u02c1\u02c4"+
		"\5\u00abV\2\u02c2\u02c4\5\u0081A\2\u02c3\u02c1\3\2\2\2\u02c3\u02c2\3\2"+
		"\2\2\u02c4\u00c0\3\2\2\2\u02c5\u02c7\t\4\2\2\u02c6\u02c5\3\2\2\2\u02c6"+
		"\u02c7\3\2\2\2\u02c7\u02c8\3\2\2\2\u02c8\u02c9\5\u00e5s\2\u02c9\u02ca"+
		"\7\60\2\2\u02ca\u02cb\5\u00e5s\2\u02cb\u02d2\3\2\2\2\u02cc\u02ce\t\4\2"+
		"\2\u02cd\u02cc\3\2\2\2\u02cd\u02ce\3\2\2\2\u02ce\u02cf\3\2\2\2\u02cf\u02d0"+
		"\7\60\2\2\u02d0\u02d2\5\u00e5s\2\u02d1\u02c6\3\2\2\2\u02d1\u02cd\3\2\2"+
		"\2\u02d2\u00c2\3\2\2\2\u02d3\u02d4\7\62\2\2\u02d4\u02d5\t\5\2\2\u02d5"+
		"\u02d6\5\u00e3r\2\u02d6\u00c4\3\2\2\2\u02d7\u02d9\t\4\2\2\u02d8\u02d7"+
		"\3\2\2\2\u02d8\u02d9\3\2\2\2\u02d9\u02da\3\2\2\2\u02da\u02db\5\u00e5s"+
		"\2\u02db\u00c6\3\2\2\2\u02dc\u02dd\7p\2\2\u02dd\u02de\7w\2\2\u02de\u02df"+
		"\7n\2\2\u02df\u02e0\7n\2\2\u02e0\u00c8\3\2\2\2\u02e1\u02e4\7)\2\2\u02e2"+
		"\u02e5\n\6\2\2\u02e3\u02e5\5\u00e1q\2\u02e4\u02e2\3\2\2\2\u02e4\u02e3"+
		"\3\2\2\2\u02e5\u02e6\3\2\2\2\u02e6\u02ee\7)\2\2\u02e7\u02ea\7$\2\2\u02e8"+
		"\u02eb\n\6\2\2\u02e9\u02eb\5\u00e1q\2\u02ea\u02e8\3\2\2\2\u02ea\u02e9"+
		"\3\2\2\2\u02eb\u02ec\3\2\2\2\u02ec\u02ee\7$\2\2\u02ed\u02e1\3\2\2\2\u02ed"+
		"\u02e7\3\2\2\2\u02ee\u00ca\3\2\2\2\u02ef\u02f2\5\u00cfh\2\u02f0\u02f2"+
		"\5\u00dbn\2\u02f1\u02ef\3\2\2\2\u02f1\u02f0\3\2\2\2\u02f2\u00cc\3\2\2"+
		"\2\u02f3\u02f4\t\7\2\2\u02f4\u00ce\3\2\2\2\u02f5\u02fa\5\u00edw\2\u02f6"+
		"\u02f9\5\u00e9u\2\u02f7\u02f9\7a\2\2\u02f8\u02f6\3\2\2\2\u02f8\u02f7\3"+
		"\2\2\2\u02f9\u02fc\3\2\2\2\u02fa\u02f8\3\2\2\2\u02fa\u02fb\3\2\2\2\u02fb"+
		"\u00d0\3\2\2\2\u02fc\u02fa\3\2\2\2\u02fd\u02fe\t\3\2\2\u02fe\u00d2\3\2"+
		"\2\2\u02ff\u0300\7a\2\2\u0300\u00d4\3\2\2\2\u0301\u0302\7&\2\2\u0302\u00d6"+
		"\3\2\2\2\u0303\u0304\7A\2\2\u0304\u00d8\3\2\2\2\u0305\u0306\7.\2\2\u0306"+
		"\u00da\3\2\2\2\u0307\u0308\7\60\2\2\u0308\u00dc\3\2\2\2\u0309\u030a\7"+
		"<\2\2\u030a\u00de\3\2\2\2\u030b\u030c\7=\2\2\u030c\u00e0\3\2\2\2\u030d"+
		"\u030e\7^\2\2\u030e\u031a\t\b\2\2\u030f\u0314\7^\2\2\u0310\u0312\t\t\2"+
		"\2\u0311\u0310\3\2\2\2\u0311\u0312\3\2\2\2\u0312\u0313\3\2\2\2\u0313\u0315"+
		"\t\n\2\2\u0314\u0311\3\2\2\2\u0314\u0315\3\2\2\2\u0315\u0316\3\2\2\2\u0316"+
		"\u031a\t\n\2\2\u0317\u0318\7^\2\2\u0318\u031a\5\u00ebv\2\u0319\u030d\3"+
		"\2\2\2\u0319\u030f\3\2\2\2\u0319\u0317\3\2\2\2\u031a\u00e2\3\2\2\2\u031b"+
		"\u031f\5\u00f1y\2\u031c\u031e\5\u00f1y\2\u031d\u031c\3\2\2\2\u031e\u0321"+
		"\3\2\2\2\u031f\u031d\3\2\2\2\u031f\u0320\3\2\2\2\u0320\u00e4\3\2\2\2\u0321"+
		"\u031f\3\2\2\2\u0322\u0324\5\u00efx\2\u0323\u0322\3\2\2\2\u0324\u0325"+
		"\3\2\2\2\u0325\u0323\3\2\2\2\u0325\u0326\3\2\2\2\u0326\u00e6\3\2\2\2\u0327"+
		"\u0329\5\u00edw\2\u0328\u0327\3\2\2\2\u0329\u032a\3\2\2\2\u032a\u0328"+
		"\3\2\2\2\u032a\u032b\3\2\2\2\u032b\u00e8\3\2\2\2\u032c\u032f\5\u00edw"+
		"\2\u032d\u032f\5\u00efx\2\u032e\u032c\3\2\2\2\u032e\u032d\3\2\2\2\u032f"+
		"\u00ea\3\2\2\2\u0330\u0332\7w\2\2\u0331\u0330\3\2\2\2\u0332\u0333\3\2"+
		"\2\2\u0333\u0331\3\2\2\2\u0333\u0334\3\2\2\2\u0334\u0335\3\2\2\2\u0335"+
		"\u0336\5\u00f1y\2\u0336\u0337\5\u00f1y\2\u0337\u0338\5\u00f1y\2\u0338"+
		"\u0339\5\u00f1y\2\u0339\u00ec\3\2\2\2\u033a\u033b\t\13\2\2\u033b\u00ee"+
		"\3\2\2\2\u033c\u033d\t\f\2\2\u033d\u00f0\3\2\2\2\u033e\u033f\t\r\2\2\u033f"+
		"\u00f2\3\2\2\2 \2\u00f7\u00fc\u0101\u028a\u029a\u029c\u02a6\u02b0\u02b2"+
		"\u02bf\u02c3\u02c6\u02cd\u02d1\u02d8\u02e4\u02ea\u02ed\u02f1\u02f8\u02fa"+
		"\u0311\u0314\u0319\u031f\u0325\u032a\u032e\u0333\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
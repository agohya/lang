// Generated from d:\agohya\lang\grammar\AgohyaLexer.g4 by ANTLR 4.9.2
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
		BOOL_LITERAL=1, DOUBLE_LITERAL=2, HEX_LITERAL=3, INT_LITERAL=4, NULL_LITERAL=5, 
		STRING_LITERAL=6, IDENTIFIER=7;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"BOOL_LITERAL", "DOUBLE_LITERAL", "HEX_LITERAL", "INT_LITERAL", "NULL_LITERAL", 
			"STRING_LITERAL", "IDENTIFIER", "EscapeSequence", "HexDigits", "Digits", 
			"Letters", "LetterOrDigit", "UnicodeLetter", "Letter", "Digit", "Underscore", 
			"Dollar", "QuestionMark", "Dot", "HexDigit"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, "'null'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BOOL_LITERAL", "DOUBLE_LITERAL", "HEX_LITERAL", "INT_LITERAL", 
			"NULL_LITERAL", "STRING_LITERAL", "IDENTIFIER"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\t\u00a3\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\5\2"+
		"\65\n\2\3\3\5\38\n\3\3\3\3\3\3\3\3\3\3\3\5\3?\n\3\3\3\3\3\5\3C\n\3\3\4"+
		"\3\4\3\4\3\4\3\5\5\5J\n\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\5\7"+
		"V\n\7\3\7\3\7\3\7\3\7\5\7\\\n\7\3\7\5\7_\n\7\3\b\3\b\3\b\7\bd\n\b\f\b"+
		"\16\bg\13\b\3\t\3\t\3\t\3\t\5\tm\n\t\3\t\5\tp\n\t\3\t\3\t\3\t\5\tu\n\t"+
		"\3\n\3\n\7\ny\n\n\f\n\16\n|\13\n\3\13\6\13\177\n\13\r\13\16\13\u0080\3"+
		"\f\6\f\u0084\n\f\r\f\16\f\u0085\3\r\3\r\5\r\u008a\n\r\3\16\6\16\u008d"+
		"\n\16\r\16\16\16\u008e\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\20\3\20\3"+
		"\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25\2\2\26\3\3\5\4\7\5\t"+
		"\6\13\7\r\b\17\t\21\2\23\2\25\2\27\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2"+
		")\2\3\2\13\3\2//\4\2ZZzz\6\2\f\f\17\17))^^\n\2$$))^^ddhhppttvv\3\2\62"+
		"\65\3\2\629\4\2C\\c|\3\2\62;\5\2\62;CHch\2\u00a8\2\3\3\2\2\2\2\5\3\2\2"+
		"\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\3\64"+
		"\3\2\2\2\5B\3\2\2\2\7D\3\2\2\2\tI\3\2\2\2\13M\3\2\2\2\r^\3\2\2\2\17`\3"+
		"\2\2\2\21t\3\2\2\2\23v\3\2\2\2\25~\3\2\2\2\27\u0083\3\2\2\2\31\u0089\3"+
		"\2\2\2\33\u008c\3\2\2\2\35\u0095\3\2\2\2\37\u0097\3\2\2\2!\u0099\3\2\2"+
		"\2#\u009b\3\2\2\2%\u009d\3\2\2\2\'\u009f\3\2\2\2)\u00a1\3\2\2\2+,\7v\2"+
		"\2,-\7t\2\2-.\7w\2\2.\65\7g\2\2/\60\7h\2\2\60\61\7c\2\2\61\62\7n\2\2\62"+
		"\63\7u\2\2\63\65\7g\2\2\64+\3\2\2\2\64/\3\2\2\2\65\4\3\2\2\2\668\t\2\2"+
		"\2\67\66\3\2\2\2\678\3\2\2\289\3\2\2\29:\5\25\13\2:;\7\60\2\2;<\5\25\13"+
		"\2<C\3\2\2\2=?\t\2\2\2>=\3\2\2\2>?\3\2\2\2?@\3\2\2\2@A\7\60\2\2AC\5\25"+
		"\13\2B\67\3\2\2\2B>\3\2\2\2C\6\3\2\2\2DE\7\62\2\2EF\t\3\2\2FG\5\23\n\2"+
		"G\b\3\2\2\2HJ\t\2\2\2IH\3\2\2\2IJ\3\2\2\2JK\3\2\2\2KL\5\25\13\2L\n\3\2"+
		"\2\2MN\7p\2\2NO\7w\2\2OP\7n\2\2PQ\7n\2\2Q\f\3\2\2\2RU\7)\2\2SV\n\4\2\2"+
		"TV\5\21\t\2US\3\2\2\2UT\3\2\2\2VW\3\2\2\2W_\7)\2\2X[\7$\2\2Y\\\n\4\2\2"+
		"Z\\\5\21\t\2[Y\3\2\2\2[Z\3\2\2\2\\]\3\2\2\2]_\7$\2\2^R\3\2\2\2^X\3\2\2"+
		"\2_\16\3\2\2\2`e\5\35\17\2ad\5\31\r\2bd\7a\2\2ca\3\2\2\2cb\3\2\2\2dg\3"+
		"\2\2\2ec\3\2\2\2ef\3\2\2\2f\20\3\2\2\2ge\3\2\2\2hi\7^\2\2iu\t\5\2\2jo"+
		"\7^\2\2km\t\6\2\2lk\3\2\2\2lm\3\2\2\2mn\3\2\2\2np\t\7\2\2ol\3\2\2\2op"+
		"\3\2\2\2pq\3\2\2\2qu\t\7\2\2rs\7^\2\2su\5\33\16\2th\3\2\2\2tj\3\2\2\2"+
		"tr\3\2\2\2u\22\3\2\2\2vz\5)\25\2wy\5)\25\2xw\3\2\2\2y|\3\2\2\2zx\3\2\2"+
		"\2z{\3\2\2\2{\24\3\2\2\2|z\3\2\2\2}\177\5\37\20\2~}\3\2\2\2\177\u0080"+
		"\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3\2\2\2\u0081\26\3\2\2\2\u0082\u0084"+
		"\5\35\17\2\u0083\u0082\3\2\2\2\u0084\u0085\3\2\2\2\u0085\u0083\3\2\2\2"+
		"\u0085\u0086\3\2\2\2\u0086\30\3\2\2\2\u0087\u008a\5\35\17\2\u0088\u008a"+
		"\5\37\20\2\u0089\u0087\3\2\2\2\u0089\u0088\3\2\2\2\u008a\32\3\2\2\2\u008b"+
		"\u008d\7w\2\2\u008c\u008b\3\2\2\2\u008d\u008e\3\2\2\2\u008e\u008c\3\2"+
		"\2\2\u008e\u008f\3\2\2\2\u008f\u0090\3\2\2\2\u0090\u0091\5)\25\2\u0091"+
		"\u0092\5)\25\2\u0092\u0093\5)\25\2\u0093\u0094\5)\25\2\u0094\34\3\2\2"+
		"\2\u0095\u0096\t\b\2\2\u0096\36\3\2\2\2\u0097\u0098\t\t\2\2\u0098 \3\2"+
		"\2\2\u0099\u009a\7a\2\2\u009a\"\3\2\2\2\u009b\u009c\7&\2\2\u009c$\3\2"+
		"\2\2\u009d\u009e\7A\2\2\u009e&\3\2\2\2\u009f\u00a0\7\60\2\2\u00a0(\3\2"+
		"\2\2\u00a1\u00a2\t\n\2\2\u00a2*\3\2\2\2\25\2\64\67>BIU[^celotz\u0080\u0085"+
		"\u0089\u008e\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
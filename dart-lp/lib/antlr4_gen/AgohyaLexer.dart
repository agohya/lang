// Generated from D:\agohya\lang\grammar\AgohyaLexer.g4 by ANTLR 4.10.1
// ignore_for_file: unused_import, unused_local_variable, prefer_single_quotes
import 'package:antlr4/antlr4.dart';


class AgohyaLexer extends Lexer {
  static final checkVersion = () => RuntimeMetaData.checkVersion('4.10.1', RuntimeMetaData.VERSION);

  static final List<DFA> _decisionToDFA = List.generate(
        _ATN.numberOfDecisions, (i) => DFA(_ATN.getDecisionState(i), i));
  static final PredictionContextCache _sharedContextCache = PredictionContextCache();
  @override
  final List<String> channelNames = [
    'DEFAULT_TOKEN_CHANNEL', 'HIDDEN'
  ];

  @override
  final List<String> modeNames = [
    'DEFAULT_MODE'
  ];

  @override
  final List<String> ruleNames = [
    'Letter', 'Digit', 'Underscore', 'QuestionMark', 'Dot', 'HexDigit'
  ];

  static final List<String?> _LITERAL_NAMES = [
  ];
  static final List<String?> _SYMBOLIC_NAMES = [
  ];
  static final Vocabulary VOCABULARY = VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

  @override
  Vocabulary get vocabulary {
    return VOCABULARY;
  }


  AgohyaLexer(CharStream input) : super(input) {
    interpreter = LexerATNSimulator(_ATN, _decisionToDFA, _sharedContextCache, recog: this);
  }

  @override
  List<int> get serializedATN => _serializedATN;

  @override
  String get grammarFileName => 'AgohyaLexer.g4';

  @override
  ATN getATN() { return _ATN; }

  static const List<int> _serializedATN = [
      4,0,0,25,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,
      1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,0,0,6,1,0,3,0,5,0,7,0,
      9,0,11,0,1,0,1,3,0,48,57,65,70,97,102,18,1,13,1,0,0,0,3,15,1,0,0,0,
      5,17,1,0,0,0,7,19,1,0,0,0,9,21,1,0,0,0,11,23,1,0,0,0,13,14,1,0,0,0,
      14,2,1,0,0,0,15,16,1,0,0,0,16,4,1,0,0,0,17,18,1,0,0,0,18,6,1,0,0,0,
      19,20,1,0,0,0,20,8,1,0,0,0,21,22,1,0,0,0,22,10,1,0,0,0,23,24,7,0,0,
      0,24,12,1,0,0,0,1,0,0
  ];

  static final ATN _ATN =
      ATNDeserializer().deserialize(_serializedATN);
}
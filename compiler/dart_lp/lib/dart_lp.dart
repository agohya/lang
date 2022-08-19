library agohya_dart_phase_compiler;

import 'package:antlr4/antlr4.dart';
import 'package:dart_lp/gen/AgohyaLexer.dart';
import 'package:path/path.dart' as path;

import 'dart:io';

import 'exceptions.dart';

class AgohyaDartPhaseCompiler {
  static AgohyaDartPhaseCompiler? _instance;

  AgohyaDartPhaseCompiler._();

  static AgohyaDartPhaseCompiler get instance =>
      _instance ??= AgohyaDartPhaseCompiler._();

  File? file;

  String? contents;

  Future<void> compile() async {
    fileNotNull();
    print("Compiling file ${path.basename(file!.path)}");

    print("contents: \n$contents");

    var stream = InputStream.fromString(contents!);

    var lexer = AgohyaLexer(stream);

    var tokenStream = CommonTokenStream(lexer);

    List<Token> tokens = [];

    while (!tokenStream.fetchedEOF) {
      tokenStream.consume();
      // fix /r in lexer grammar, put in whitespaces
      var token = tokenStream.get(tokenStream.index);
      tokens.add(token);
    }

    for (Token token in tokens) {
      // token.
      print(token.toString());
    }
  }

  void fileNotNull() {
    if (file == null) throw FileNotSetException();
  }

  Future<bool> setAndLoadFile(String file) {
    setFile(file);
    return loadFile();
  }

  void setFile(String file) {
    clearFile();
    this.file = File(file);
  }

  Future<bool> loadFile() async {
    if (file == null) return false;
    contents = await file!.readAsString();
    return true;
  }

  // Clears file contents.
  void clearFile() {
    file = null;
    contents = null;
  }
}

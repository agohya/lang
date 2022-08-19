import 'package:dart_lp/dart_lp.dart';

void main(List<String> arguments) async {
  AgohyaDartPhaseCompiler compiler = AgohyaDartPhaseCompiler.instance;
  await compiler.setAndLoadFile('../../sample/lib/main.agco');
  compiler.compile();
}

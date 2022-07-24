import 'package:dart_lp/dart_lp.dart';

Future<int> main(List<String> arguments) async {
  if (arguments.isEmpty) {
    return EXITCODES.errNoArgs;
  }
  print(
      'Welcome to Agohya-Lang. Please wait as the compiler compiles your program.');

  if (arguments.length != 1) {
    return EXITCODES.onlySpecPathShouldBeProvided;
  }

  String specPath = arguments[0];

  await Runner.run(
      spec: (await SpecParser(specPath: specPath).parseSpec()).spec!);
  return EXITCODES.success;
}

class EXITCODES {
  /// Error denoting that only the spec path should be provided.
  static int onlySpecPathShouldBeProvided = 2;

  EXITCODES._();

  /// Successful compilation.
  static int success = 0;

  /// No arguments provided to compiler.
  static int errNoArgs = 1;
}

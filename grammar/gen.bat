dir
cd D:\agohya\lang
antlr4 -o compiler/dart_lp/lib/gen -Dlanguage=Dart AgohyaLexer.g4
antlr4 -o compiler/dart_lp/lib/gen -Dlanguage=Dart AgohyaParser.g4

@REM start /B /wait CMD /C call antlr4 -o D:\agohya\lang\cpp_lp\lib\antlr4_gen -Dlanguage=Cpp D:\agohya\lang\grammar\AgohyaLexer.g4 -visitor -no-listener
@REM start /B /wait CMD /C call antlr4 -o D:\agohya\lang\cpp_lp\lib\antlr4_gen -Dlanguage=Cpp D:\agohya\lang\grammar\AgohyaParser.g4 -visitor -no-listener
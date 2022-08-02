start /B /wait CMD /C call antlr4 -o D:\agohya\lang\dart-lp\lib\antlr4_gen -Dlanguage=Dart D:\agohya\lang\grammar\AgohyaLexer.g4 -visitor -no-listener
start /B /wait CMD /C call antlr4 -o D:\agohya\lang\dart-lp\lib\antlr4_gen -Dlanguage=Dart D:\agohya\lang\grammar\AgohyaParser.g4 -visitor -no-listener

@REM start /B /wait CMD /C call antlr4 -o D:\agohya\lang\cpp_lp\lib\antlr4_gen -Dlanguage=Cpp D:\agohya\lang\grammar\AgohyaLexer.g4 -visitor -no-listener
@REM start /B /wait CMD /C call antlr4 -o D:\agohya\lang\cpp_lp\lib\antlr4_gen -Dlanguage=Cpp D:\agohya\lang\grammar\AgohyaParser.g4 -visitor -no-listener
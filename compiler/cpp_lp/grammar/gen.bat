cls
start /B /wait cmd /C call antlr4 -o D:\agohya\lang\cpp_lp\src\a4gen -Dlanguage=Cpp AgohyaLexer.g4 -visitor -listener
start /B /wait cmd /C call antlr4 -o D:\agohya\lang\cpp_lp\src\a4gen -Dlanguage=Cpp AgohyaParser.g4 -visitor -listener
cls
start /B /wait cmd /C call antlr4 -o D:\agohya\lang\compiler_go\grg -Dlanguage=Go AgohyaLexer.g4 -visitor -listener
start /B /wait cmd /C call antlr4 -o D:\agohya\lang\compiler_go\grg -Dlanguage=Go AgohyaParser.g4 -visitor -listener
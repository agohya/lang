#pragma once

#include <iostream>
#include <list>
#include <map>

#include "../tools/cstring/ccuststring.h"

class CompilerError {
 public:
  CompilerError(std::string errStr,
                int errCode,
                std::string errMessage,
                std::string rawErr,
                std::string fileName);
  std::string errStr;
  int errCode;
  std::string errMessage;
  std::string rawError;
  std::string fileName;

  std::string friendlyString();

  static CompilerError noError();
};

class Compiler {
 public:
  Compiler(std::string filePath,
           std::list<std::string> filePaths,
           bool compileSingle);
  bool singleCompile;
  CompilerError* lastError;
  bool compile();

 private:
  std::string filePath;
  std::list<std::string> filePaths;
};

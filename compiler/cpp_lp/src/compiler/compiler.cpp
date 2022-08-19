#include "compiler.h"

// Compiler Constructor Implementation.
Compiler::Compiler(std::string filePath,
                   std::list<std::string> filePaths,
                   bool compileSingle) {
  this->filePath = filePath;
  this->filePaths = filePaths;
  this->singleCompile = compileSingle;
}

bool Compiler::compile() {
  lastError = &CompilerError::noError();
  return true;
}

// Compiler Error Implementation
CompilerError::CompilerError(std::string errStr,
                             int errCode,
                             std::string errMessage,
                             std::string rawErr,
                             std::string fileName) {
  this->errStr = errStr;
  this->errCode = errCode;
  this->errMessage = errMessage;
  this->rawError = rawError;
  this->fileName = fileName;
}

CompilerError CompilerError::noError() {
  return CompilerError("NIL", 0, "NIL", "NIL", "NIL");
}

std::string CompilerError::friendlyString() {
  return CString::format(R"(Compilation error: 
            An error occurred while compiling %0: 
                %1
                Error Code: %2,
                Error Message: %3
                Raw Error has been written to %4
  )",
                         fileName, errStr, errCode, errMessage, rawError);
}
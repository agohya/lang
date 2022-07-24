
// Generated from d:\agohya\lang\test.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "testParser.h"


namespace agohyanbrg {

/**
 * This interface defines an abstract listener for a parse tree produced by testParser.
 */
class  testListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPrule(testParser::PruleContext *ctx) = 0;
  virtual void exitPrule(testParser::PruleContext *ctx) = 0;


};

}  // namespace agohyanbrg

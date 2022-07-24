
// Generated from d:\agohya\lang\test.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "testListener.h"


namespace agohyanbrg {

/**
 * This class provides an empty implementation of testListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  testBaseListener : public testListener {
public:

  virtual void enterPrule(testParser::PruleContext * /*ctx*/) override { }
  virtual void exitPrule(testParser::PruleContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace agohyanbrg


// Generated from d:\agohya\lang\test.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "testVisitor.h"


namespace agohyanbrg {

/**
 * This class provides an empty implementation of testVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  testBaseVisitor : public testVisitor {
public:

  virtual antlrcpp::Any visitPrule(testParser::PruleContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace agohyanbrg

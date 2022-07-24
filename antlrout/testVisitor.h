
// Generated from d:\agohya\lang\test.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "testParser.h"


namespace agohyanbrg {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by testParser.
 */
class  testVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by testParser.
   */
    virtual antlrcpp::Any visitPrule(testParser::PruleContext *context) = 0;


};

}  // namespace agohyanbrg

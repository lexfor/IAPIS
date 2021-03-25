/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/lang/HelloParser.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "HelloParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by HelloParser.
 */
class  HelloParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HelloParser.
   */
    virtual antlrcpp::Any visitMain(HelloParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitSumm(HelloParser::SummContext *context) = 0;

    virtual antlrcpp::Any visitDiff(HelloParser::DiffContext *context) = 0;

    virtual antlrcpp::Any visitMult(HelloParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitDiv(HelloParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitInPow(HelloParser::InPowContext *context) = 0;

    virtual antlrcpp::Any visitInSqrt(HelloParser::InSqrtContext *context) = 0;

    virtual antlrcpp::Any visitOperation(HelloParser::OperationContext *context) = 0;

    virtual antlrcpp::Any visitCreate(HelloParser::CreateContext *context) = 0;

    virtual antlrcpp::Any visitAss(HelloParser::AssContext *context) = 0;

    virtual antlrcpp::Any visitExpr(HelloParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitForCycle(HelloParser::ForCycleContext *context) = 0;

    virtual antlrcpp::Any visitIfExpr(HelloParser::IfExprContext *context) = 0;


};

}  // namespace antlrcpptest

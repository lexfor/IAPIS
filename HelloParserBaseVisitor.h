/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/lang/HelloParser.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "HelloParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of HelloParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HelloParserBaseVisitor : public HelloParserVisitor {
public:

  virtual antlrcpp::Any visitMain(HelloParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSumm(HelloParser::SummContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiff(HelloParser::DiffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(HelloParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(HelloParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInPow(HelloParser::InPowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInSqrt(HelloParser::InSqrtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperation(HelloParser::OperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate(HelloParser::CreateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAss(HelloParser::AssContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(HelloParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForCycle(HelloParser::ForCycleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfExpr(HelloParser::IfExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest

//
// Created by tima on 4.03.21.
//

#ifndef LANG_HELLOVISITOR_H
#define LANG_HELLOVISITOR_H
#include "HelloParserBaseVisitor.h"
#include "Hello.h"
#include "Tree.h"

using namespace antlrcpptest;

class HelloVisitor : public HelloParserBaseVisitor{
private:
    Hello* obj;
    std::vector<std::string> Tokens;
    Tree* tree;
    int level;
public:

    antlrcpp::Any visitMain(HelloParser::MainContext *ctx) override;

    antlrcpp::Any visitSumm(HelloParser::SummContext *ctx) override;

    antlrcpp::Any visitDiff(HelloParser::DiffContext *ctx) override;

    antlrcpp::Any visitMult(HelloParser::MultContext *ctx) override;

    antlrcpp::Any visitDiv(HelloParser::DivContext *ctx) override;

    antlrcpp::Any visitInPow(HelloParser::InPowContext *ctx) override;

    antlrcpp::Any visitInSqrt(HelloParser::InSqrtContext *ctx) override;

    antlrcpp::Any visitOperation(HelloParser::OperationContext *ctx) override;

    antlrcpp::Any visitCreate(HelloParser::CreateContext *ctx) override;

    antlrcpp::Any visitAss(HelloParser::AssContext *ctx) override;

    antlrcpp::Any visitExpr(HelloParser::ExprContext *ctx) override;

    antlrcpp::Any visitForCycle(HelloParser::ForCycleContext *ctx) override;

    antlrcpp::Any visitIfExpr(HelloParser::IfExprContext *ctx) override;

    void SetTree(Tree&);
};


#endif //LANG_HELLOVISITOR_H

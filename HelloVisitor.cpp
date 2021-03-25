//
// Created by tima on 4.03.21.
//

#include "HelloVisitor.h"
using namespace antlrcpptest;

antlrcpp::Any HelloVisitor::visitMain(HelloParser::MainContext *ctx) {
    level = 0;
    Tokens.emplace_back("main");
    tree->addElement(Tokens,level);
    Tokens.clear();
    return visitChildren(ctx);
}

antlrcpp::Any HelloVisitor::visitSumm(HelloParser::SummContext *ctx) {
    level++;
    Tokens.emplace_back("summ");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
return nullptr;
}

antlrcpp::Any HelloVisitor::visitDiff(HelloParser::DiffContext *ctx) {
    level++;
    Tokens.emplace_back("diff");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitMult(HelloParser::MultContext *ctx) {
    level++;
    Tokens.emplace_back("mult");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitDiv(HelloParser::DivContext *ctx) {
    level++;
    Tokens.emplace_back("devide");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitInPow(HelloParser::InPowContext *ctx){
    level++;
    Tokens.emplace_back("inpow");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitInSqrt(HelloParser::InSqrtContext *ctx){
    level++;
    Tokens.emplace_back("insqrt");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitOperation(HelloParser::OperationContext *ctx) {
    level++;
    Tokens.emplace_back("operation");
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitCreate(HelloParser::CreateContext *ctx) {
    level++;
    Tokens.emplace_back("create");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitAss(HelloParser::AssContext *ctx) {
    level++;
    Tokens.emplace_back("assign");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitExpr(HelloParser::ExprContext *ctx) {
    level++;
    Tokens.emplace_back("expr");
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitForCycle(HelloParser::ForCycleContext *ctx) {
    level++;
    Tokens.emplace_back("for");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
        if(i->toString() == "{"){
            break;
        }
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any HelloVisitor::visitIfExpr(HelloParser::IfExprContext *ctx) {
    level++;
    Tokens.emplace_back("if");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
        if(i->toString() == "{"){
            break;
        }
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

void HelloVisitor::SetTree(Tree & myTree){
    tree = &myTree;
}


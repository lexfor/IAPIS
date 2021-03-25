/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/lang/HelloParser.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"


/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


namespace antlrcpptest {


class  HelloParser : public antlr4::Parser {
public:
  enum {
    Tim = 1, Return = 2, Continue = 3, Integer = 4, Float = 5, Long = 6, 
    And = 7, For = 8, IF = 9, Then = 10, Else = 11, INT = 12, Digit = 13, 
    FLT = 14, CompareOperator = 15, LessThan = 16, LessOrEqual = 17, GreaterThan = 18, 
    GreaterOrEqual = 19, Equal = 20, NotEqual = 21, Assign = 22, Colon = 23, 
    Newline = 24, Plus = 25, PlusAss = 26, Minus = 27, MinusAss = 28, Star = 29, 
    StarAss = 30, Devide = 31, DevideAss = 32, OpenPar = 33, ClosePar = 34, 
    FigureOpen = 35, FigureClose = 36, QuestionMark = 37, Comma = 38, Ant = 39, 
    Pow = 40, PowAss = 41, Sqrt = 42, SqrtAss = 43, Foo = 44, Bar = 45, 
    ID = 46, Comment = 47, WS = 48
  };

  enum {
    RuleMain = 0, RuleSumm = 1, RuleDiff = 2, RuleMult = 3, RuleDiv = 4, 
    RuleInPow = 5, RuleInSqrt = 6, RuleOperation = 7, RuleCreate = 8, RuleAss = 9, 
    RuleExpr = 10, RuleForCycle = 11, RuleIfExpr = 12
  };

  explicit HelloParser(antlr4::TokenStream *input);
  ~HelloParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  /* public parser declarations/members section */
  bool myAction() { return true; }
  bool doesItBlend() { return true; }
  void cleanUp() {}
  void doInit() {}
  void doAfter() {}


  class MainContext;
  class SummContext;
  class DiffContext;
  class MultContext;
  class DivContext;
  class InPowContext;
  class InSqrtContext;
  class OperationContext;
  class CreateContext;
  class AssContext;
  class ExprContext;
  class ForCycleContext;
  class IfExprContext; 

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  SummContext : public antlr4::ParserRuleContext {
  public:
    SummContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Plus();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    antlr4::tree::TerminalNode *PlusAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SummContext* summ();

  class  DiffContext : public antlr4::ParserRuleContext {
  public:
    DiffContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Minus();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    antlr4::tree::TerminalNode *MinusAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiffContext* diff();

  class  MultContext : public antlr4::ParserRuleContext {
  public:
    MultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Star();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    antlr4::tree::TerminalNode *StarAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultContext* mult();

  class  DivContext : public antlr4::ParserRuleContext {
  public:
    DivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Devide();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    antlr4::tree::TerminalNode *DevideAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivContext* div();

  class  InPowContext : public antlr4::ParserRuleContext {
  public:
    InPowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Pow();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    antlr4::tree::TerminalNode *PowAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InPowContext* inPow();

  class  InSqrtContext : public antlr4::ParserRuleContext {
  public:
    InSqrtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Sqrt();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InSqrtContext* inSqrt();

  class  OperationContext : public antlr4::ParserRuleContext {
  public:
    OperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SummContext *summ();
    DiffContext *diff();
    MultContext *mult();
    DivContext *div();
    CreateContext *create();
    AssContext *ass();
    InPowContext *inPow();
    InSqrtContext *inSqrt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperationContext* operation();

  class  CreateContext : public antlr4::ParserRuleContext {
  public:
    CreateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateContext* create();

  class  AssContext : public antlr4::ParserRuleContext {
  public:
    AssContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssContext* ass();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForCycleContext *forCycle();
    IfExprContext *ifExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  ForCycleContext : public antlr4::ParserRuleContext {
  public:
    ForCycleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenPar();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *ClosePar();
    antlr4::tree::TerminalNode *FigureOpen();
    antlr4::tree::TerminalNode *FigureClose();
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *CompareOperator();
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForCycleContext* forCycle();

  class  IfExprContext : public antlr4::ParserRuleContext {
  public:
    IfExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OpenPar();
    antlr4::tree::TerminalNode *CompareOperator();
    antlr4::tree::TerminalNode *ClosePar();
    antlr4::tree::TerminalNode *FigureOpen();
    antlr4::tree::TerminalNode *FigureClose();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExprContext* ifExpr();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest

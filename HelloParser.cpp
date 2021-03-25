/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/lang/HelloParser.g4 by ANTLR 4.9.1


#include "HelloParserVisitor.h"

#include "HelloParser.h"


/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

HelloParser::HelloParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HelloParser::~HelloParser() {
  delete _interpreter;
}

std::string HelloParser::getGrammarFileName() const {
  return "HelloParser.g4";
}

const std::vector<std::string>& HelloParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HelloParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MainContext ------------------------------------------------------------------

HelloParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HelloParser::OperationContext *> HelloParser::MainContext::operation() {
  return getRuleContexts<HelloParser::OperationContext>();
}

HelloParser::OperationContext* HelloParser::MainContext::operation(size_t i) {
  return getRuleContext<HelloParser::OperationContext>(i);
}

std::vector<HelloParser::ExprContext *> HelloParser::MainContext::expr() {
  return getRuleContexts<HelloParser::ExprContext>();
}

HelloParser::ExprContext* HelloParser::MainContext::expr(size_t i) {
  return getRuleContext<HelloParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::MainContext::Newline() {
  return getTokens(HelloParser::Newline);
}

tree::TerminalNode* HelloParser::MainContext::Newline(size_t i) {
  return getToken(HelloParser::Newline, i);
}


size_t HelloParser::MainContext::getRuleIndex() const {
  return HelloParser::RuleMain;
}


antlrcpp::Any HelloParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::MainContext* HelloParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 0, HelloParser::RuleMain);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::Integer)
      | (1ULL << HelloParser::Float)
      | (1ULL << HelloParser::Long)
      | (1ULL << HelloParser::For)
      | (1ULL << HelloParser::IF)
      | (1ULL << HelloParser::ID))) != 0)) {
      setState(28);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HelloParser::Integer:
        case HelloParser::Float:
        case HelloParser::Long:
        case HelloParser::ID: {
          setState(26);
          operation();
          break;
        }

        case HelloParser::For:
        case HelloParser::IF: {
          setState(27);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(31);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HelloParser::Newline) {
        setState(30);
        match(HelloParser::Newline);
      }
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SummContext ------------------------------------------------------------------

HelloParser::SummContext::SummContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HelloParser::SummContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::SummContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

tree::TerminalNode* HelloParser::SummContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

tree::TerminalNode* HelloParser::SummContext::Plus() {
  return getToken(HelloParser::Plus, 0);
}

std::vector<tree::TerminalNode *> HelloParser::SummContext::INT() {
  return getTokens(HelloParser::INT);
}

tree::TerminalNode* HelloParser::SummContext::INT(size_t i) {
  return getToken(HelloParser::INT, i);
}

std::vector<tree::TerminalNode *> HelloParser::SummContext::FLT() {
  return getTokens(HelloParser::FLT);
}

tree::TerminalNode* HelloParser::SummContext::FLT(size_t i) {
  return getToken(HelloParser::FLT, i);
}

tree::TerminalNode* HelloParser::SummContext::PlusAss() {
  return getToken(HelloParser::PlusAss, 0);
}


size_t HelloParser::SummContext::getRuleIndex() const {
  return HelloParser::RuleSumm;
}


antlrcpp::Any HelloParser::SummContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitSumm(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::SummContext* HelloParser::summ() {
  SummContext *_localctx = _tracker.createInstance<SummContext>(_ctx, getState());
  enterRule(_localctx, 2, HelloParser::RuleSumm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      match(HelloParser::ID);
      setState(39);
      match(HelloParser::Assign);
      setState(40);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(41);
      match(HelloParser::Plus);
      setState(42);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      match(HelloParser::ID);
      setState(44);
      match(HelloParser::PlusAss);
      setState(45);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiffContext ------------------------------------------------------------------

HelloParser::DiffContext::DiffContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HelloParser::DiffContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::DiffContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

tree::TerminalNode* HelloParser::DiffContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

tree::TerminalNode* HelloParser::DiffContext::Minus() {
  return getToken(HelloParser::Minus, 0);
}

std::vector<tree::TerminalNode *> HelloParser::DiffContext::INT() {
  return getTokens(HelloParser::INT);
}

tree::TerminalNode* HelloParser::DiffContext::INT(size_t i) {
  return getToken(HelloParser::INT, i);
}

std::vector<tree::TerminalNode *> HelloParser::DiffContext::FLT() {
  return getTokens(HelloParser::FLT);
}

tree::TerminalNode* HelloParser::DiffContext::FLT(size_t i) {
  return getToken(HelloParser::FLT, i);
}

tree::TerminalNode* HelloParser::DiffContext::MinusAss() {
  return getToken(HelloParser::MinusAss, 0);
}


size_t HelloParser::DiffContext::getRuleIndex() const {
  return HelloParser::RuleDiff;
}


antlrcpp::Any HelloParser::DiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitDiff(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::DiffContext* HelloParser::diff() {
  DiffContext *_localctx = _tracker.createInstance<DiffContext>(_ctx, getState());
  enterRule(_localctx, 4, HelloParser::RuleDiff);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(48);
      match(HelloParser::ID);
      setState(49);
      match(HelloParser::Assign);
      setState(50);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(51);
      match(HelloParser::Minus);
      setState(52);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(53);
      match(HelloParser::ID);
      setState(54);
      match(HelloParser::MinusAss);
      setState(55);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultContext ------------------------------------------------------------------

HelloParser::MultContext::MultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HelloParser::MultContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::MultContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

tree::TerminalNode* HelloParser::MultContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

tree::TerminalNode* HelloParser::MultContext::Star() {
  return getToken(HelloParser::Star, 0);
}

std::vector<tree::TerminalNode *> HelloParser::MultContext::INT() {
  return getTokens(HelloParser::INT);
}

tree::TerminalNode* HelloParser::MultContext::INT(size_t i) {
  return getToken(HelloParser::INT, i);
}

std::vector<tree::TerminalNode *> HelloParser::MultContext::FLT() {
  return getTokens(HelloParser::FLT);
}

tree::TerminalNode* HelloParser::MultContext::FLT(size_t i) {
  return getToken(HelloParser::FLT, i);
}

tree::TerminalNode* HelloParser::MultContext::StarAss() {
  return getToken(HelloParser::StarAss, 0);
}


size_t HelloParser::MultContext::getRuleIndex() const {
  return HelloParser::RuleMult;
}


antlrcpp::Any HelloParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::MultContext* HelloParser::mult() {
  MultContext *_localctx = _tracker.createInstance<MultContext>(_ctx, getState());
  enterRule(_localctx, 6, HelloParser::RuleMult);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(58);
      match(HelloParser::ID);
      setState(59);
      match(HelloParser::Assign);
      setState(60);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(61);
      match(HelloParser::Star);
      setState(62);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(63);
      match(HelloParser::ID);
      setState(64);
      match(HelloParser::StarAss);
      setState(65);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivContext ------------------------------------------------------------------

HelloParser::DivContext::DivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HelloParser::DivContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::DivContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

tree::TerminalNode* HelloParser::DivContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

tree::TerminalNode* HelloParser::DivContext::Devide() {
  return getToken(HelloParser::Devide, 0);
}

std::vector<tree::TerminalNode *> HelloParser::DivContext::INT() {
  return getTokens(HelloParser::INT);
}

tree::TerminalNode* HelloParser::DivContext::INT(size_t i) {
  return getToken(HelloParser::INT, i);
}

std::vector<tree::TerminalNode *> HelloParser::DivContext::FLT() {
  return getTokens(HelloParser::FLT);
}

tree::TerminalNode* HelloParser::DivContext::FLT(size_t i) {
  return getToken(HelloParser::FLT, i);
}

tree::TerminalNode* HelloParser::DivContext::DevideAss() {
  return getToken(HelloParser::DevideAss, 0);
}


size_t HelloParser::DivContext::getRuleIndex() const {
  return HelloParser::RuleDiv;
}


antlrcpp::Any HelloParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::DivContext* HelloParser::div() {
  DivContext *_localctx = _tracker.createInstance<DivContext>(_ctx, getState());
  enterRule(_localctx, 8, HelloParser::RuleDiv);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(68);
      match(HelloParser::ID);
      setState(69);
      match(HelloParser::Assign);
      setState(70);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(71);
      match(HelloParser::Devide);
      setState(72);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(73);
      match(HelloParser::ID);
      setState(74);
      match(HelloParser::DevideAss);
      setState(75);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InPowContext ------------------------------------------------------------------

HelloParser::InPowContext::InPowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HelloParser::InPowContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::InPowContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

tree::TerminalNode* HelloParser::InPowContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

tree::TerminalNode* HelloParser::InPowContext::Pow() {
  return getToken(HelloParser::Pow, 0);
}

std::vector<tree::TerminalNode *> HelloParser::InPowContext::INT() {
  return getTokens(HelloParser::INT);
}

tree::TerminalNode* HelloParser::InPowContext::INT(size_t i) {
  return getToken(HelloParser::INT, i);
}

std::vector<tree::TerminalNode *> HelloParser::InPowContext::FLT() {
  return getTokens(HelloParser::FLT);
}

tree::TerminalNode* HelloParser::InPowContext::FLT(size_t i) {
  return getToken(HelloParser::FLT, i);
}

tree::TerminalNode* HelloParser::InPowContext::PowAss() {
  return getToken(HelloParser::PowAss, 0);
}


size_t HelloParser::InPowContext::getRuleIndex() const {
  return HelloParser::RuleInPow;
}


antlrcpp::Any HelloParser::InPowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitInPow(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::InPowContext* HelloParser::inPow() {
  InPowContext *_localctx = _tracker.createInstance<InPowContext>(_ctx, getState());
  enterRule(_localctx, 10, HelloParser::RuleInPow);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      match(HelloParser::ID);
      setState(79);
      match(HelloParser::Assign);
      setState(80);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(81);
      match(HelloParser::Pow);
      setState(82);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      match(HelloParser::ID);
      setState(84);
      match(HelloParser::PowAss);
      setState(85);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << HelloParser::INT)
        | (1ULL << HelloParser::FLT)
        | (1ULL << HelloParser::ID))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InSqrtContext ------------------------------------------------------------------

HelloParser::InSqrtContext::InSqrtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HelloParser::InSqrtContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::InSqrtContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

tree::TerminalNode* HelloParser::InSqrtContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

tree::TerminalNode* HelloParser::InSqrtContext::Sqrt() {
  return getToken(HelloParser::Sqrt, 0);
}

tree::TerminalNode* HelloParser::InSqrtContext::INT() {
  return getToken(HelloParser::INT, 0);
}

tree::TerminalNode* HelloParser::InSqrtContext::FLT() {
  return getToken(HelloParser::FLT, 0);
}


size_t HelloParser::InSqrtContext::getRuleIndex() const {
  return HelloParser::RuleInSqrt;
}


antlrcpp::Any HelloParser::InSqrtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitInSqrt(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::InSqrtContext* HelloParser::inSqrt() {
  InSqrtContext *_localctx = _tracker.createInstance<InSqrtContext>(_ctx, getState());
  enterRule(_localctx, 12, HelloParser::RuleInSqrt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(HelloParser::ID);
    setState(89);
    match(HelloParser::Assign);
    setState(90);
    match(HelloParser::Sqrt);
    setState(91);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::INT)
      | (1ULL << HelloParser::FLT)
      | (1ULL << HelloParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContext ------------------------------------------------------------------

HelloParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::SummContext* HelloParser::OperationContext::summ() {
  return getRuleContext<HelloParser::SummContext>(0);
}

HelloParser::DiffContext* HelloParser::OperationContext::diff() {
  return getRuleContext<HelloParser::DiffContext>(0);
}

HelloParser::MultContext* HelloParser::OperationContext::mult() {
  return getRuleContext<HelloParser::MultContext>(0);
}

HelloParser::DivContext* HelloParser::OperationContext::div() {
  return getRuleContext<HelloParser::DivContext>(0);
}

HelloParser::CreateContext* HelloParser::OperationContext::create() {
  return getRuleContext<HelloParser::CreateContext>(0);
}

HelloParser::AssContext* HelloParser::OperationContext::ass() {
  return getRuleContext<HelloParser::AssContext>(0);
}

HelloParser::InPowContext* HelloParser::OperationContext::inPow() {
  return getRuleContext<HelloParser::InPowContext>(0);
}

HelloParser::InSqrtContext* HelloParser::OperationContext::inSqrt() {
  return getRuleContext<HelloParser::InSqrtContext>(0);
}


size_t HelloParser::OperationContext::getRuleIndex() const {
  return HelloParser::RuleOperation;
}


antlrcpp::Any HelloParser::OperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitOperation(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::OperationContext* HelloParser::operation() {
  OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, getState());
  enterRule(_localctx, 14, HelloParser::RuleOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(93);
      summ();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      diff();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(95);
      mult();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(96);
      div();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(97);
      create();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(98);
      ass();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(99);
      inPow();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(100);
      inSqrt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateContext ------------------------------------------------------------------

HelloParser::CreateContext::CreateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::CreateContext::ID() {
  return getToken(HelloParser::ID, 0);
}

tree::TerminalNode* HelloParser::CreateContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

tree::TerminalNode* HelloParser::CreateContext::Integer() {
  return getToken(HelloParser::Integer, 0);
}

tree::TerminalNode* HelloParser::CreateContext::Float() {
  return getToken(HelloParser::Float, 0);
}

tree::TerminalNode* HelloParser::CreateContext::Long() {
  return getToken(HelloParser::Long, 0);
}

tree::TerminalNode* HelloParser::CreateContext::INT() {
  return getToken(HelloParser::INT, 0);
}

tree::TerminalNode* HelloParser::CreateContext::FLT() {
  return getToken(HelloParser::FLT, 0);
}


size_t HelloParser::CreateContext::getRuleIndex() const {
  return HelloParser::RuleCreate;
}


antlrcpp::Any HelloParser::CreateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitCreate(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::CreateContext* HelloParser::create() {
  CreateContext *_localctx = _tracker.createInstance<CreateContext>(_ctx, getState());
  enterRule(_localctx, 16, HelloParser::RuleCreate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::Integer)
      | (1ULL << HelloParser::Float)
      | (1ULL << HelloParser::Long))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(104);
    match(HelloParser::ID);
    setState(105);
    match(HelloParser::Assign);
    setState(106);
    _la = _input->LA(1);
    if (!(_la == HelloParser::INT

    || _la == HelloParser::FLT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssContext ------------------------------------------------------------------

HelloParser::AssContext::AssContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HelloParser::AssContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::AssContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

tree::TerminalNode* HelloParser::AssContext::Assign() {
  return getToken(HelloParser::Assign, 0);
}

tree::TerminalNode* HelloParser::AssContext::INT() {
  return getToken(HelloParser::INT, 0);
}

tree::TerminalNode* HelloParser::AssContext::FLT() {
  return getToken(HelloParser::FLT, 0);
}


size_t HelloParser::AssContext::getRuleIndex() const {
  return HelloParser::RuleAss;
}


antlrcpp::Any HelloParser::AssContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitAss(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::AssContext* HelloParser::ass() {
  AssContext *_localctx = _tracker.createInstance<AssContext>(_ctx, getState());
  enterRule(_localctx, 18, HelloParser::RuleAss);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(HelloParser::ID);
    setState(109);
    match(HelloParser::Assign);
    setState(110);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::INT)
      | (1ULL << HelloParser::FLT)
      | (1ULL << HelloParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

HelloParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::ForCycleContext* HelloParser::ExprContext::forCycle() {
  return getRuleContext<HelloParser::ForCycleContext>(0);
}

HelloParser::IfExprContext* HelloParser::ExprContext::ifExpr() {
  return getRuleContext<HelloParser::IfExprContext>(0);
}


size_t HelloParser::ExprContext::getRuleIndex() const {
  return HelloParser::RuleExpr;
}


antlrcpp::Any HelloParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ExprContext* HelloParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 20, HelloParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::For: {
        enterOuterAlt(_localctx, 1);
        setState(112);
        forCycle();
        break;
      }

      case HelloParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(113);
        ifExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForCycleContext ------------------------------------------------------------------

HelloParser::ForCycleContext::ForCycleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::ForCycleContext::For() {
  return getToken(HelloParser::For, 0);
}

tree::TerminalNode* HelloParser::ForCycleContext::OpenPar() {
  return getToken(HelloParser::OpenPar, 0);
}

std::vector<tree::TerminalNode *> HelloParser::ForCycleContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::ForCycleContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

std::vector<tree::TerminalNode *> HelloParser::ForCycleContext::Comma() {
  return getTokens(HelloParser::Comma);
}

tree::TerminalNode* HelloParser::ForCycleContext::Comma(size_t i) {
  return getToken(HelloParser::Comma, i);
}

tree::TerminalNode* HelloParser::ForCycleContext::ClosePar() {
  return getToken(HelloParser::ClosePar, 0);
}

tree::TerminalNode* HelloParser::ForCycleContext::FigureOpen() {
  return getToken(HelloParser::FigureOpen, 0);
}

tree::TerminalNode* HelloParser::ForCycleContext::FigureClose() {
  return getToken(HelloParser::FigureClose, 0);
}

std::vector<tree::TerminalNode *> HelloParser::ForCycleContext::FLT() {
  return getTokens(HelloParser::FLT);
}

tree::TerminalNode* HelloParser::ForCycleContext::FLT(size_t i) {
  return getToken(HelloParser::FLT, i);
}

std::vector<tree::TerminalNode *> HelloParser::ForCycleContext::INT() {
  return getTokens(HelloParser::INT);
}

tree::TerminalNode* HelloParser::ForCycleContext::INT(size_t i) {
  return getToken(HelloParser::INT, i);
}

tree::TerminalNode* HelloParser::ForCycleContext::CompareOperator() {
  return getToken(HelloParser::CompareOperator, 0);
}

std::vector<tree::TerminalNode *> HelloParser::ForCycleContext::Newline() {
  return getTokens(HelloParser::Newline);
}

tree::TerminalNode* HelloParser::ForCycleContext::Newline(size_t i) {
  return getToken(HelloParser::Newline, i);
}

std::vector<HelloParser::OperationContext *> HelloParser::ForCycleContext::operation() {
  return getRuleContexts<HelloParser::OperationContext>();
}

HelloParser::OperationContext* HelloParser::ForCycleContext::operation(size_t i) {
  return getRuleContext<HelloParser::OperationContext>(i);
}

std::vector<HelloParser::ExprContext *> HelloParser::ForCycleContext::expr() {
  return getRuleContexts<HelloParser::ExprContext>();
}

HelloParser::ExprContext* HelloParser::ForCycleContext::expr(size_t i) {
  return getRuleContext<HelloParser::ExprContext>(i);
}


size_t HelloParser::ForCycleContext::getRuleIndex() const {
  return HelloParser::RuleForCycle;
}


antlrcpp::Any HelloParser::ForCycleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitForCycle(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ForCycleContext* HelloParser::forCycle() {
  ForCycleContext *_localctx = _tracker.createInstance<ForCycleContext>(_ctx, getState());
  enterRule(_localctx, 22, HelloParser::RuleForCycle);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(HelloParser::For);
    setState(117);
    match(HelloParser::OpenPar);
    setState(118);
    match(HelloParser::ID);
    setState(119);
    match(HelloParser::Comma);
    setState(120);
    match(HelloParser::ID);

    setState(121);
    match(HelloParser::CompareOperator);
    setState(122);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::INT)
      | (1ULL << HelloParser::FLT)
      | (1ULL << HelloParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(123);
    match(HelloParser::Comma);
    setState(124);
    _la = _input->LA(1);
    if (!(_la == HelloParser::INT

    || _la == HelloParser::FLT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(125);
    match(HelloParser::ClosePar);
    setState(126);
    match(HelloParser::FigureOpen);
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::Integer)
      | (1ULL << HelloParser::Float)
      | (1ULL << HelloParser::Long)
      | (1ULL << HelloParser::For)
      | (1ULL << HelloParser::IF)
      | (1ULL << HelloParser::ID))) != 0)) {
      setState(129);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HelloParser::Integer:
        case HelloParser::Float:
        case HelloParser::Long:
        case HelloParser::ID: {
          setState(127);
          operation();
          break;
        }

        case HelloParser::For:
        case HelloParser::IF: {
          setState(128);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(131);
      match(HelloParser::Newline);
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(138);
    match(HelloParser::FigureClose);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfExprContext ------------------------------------------------------------------

HelloParser::IfExprContext::IfExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::IfExprContext::IF() {
  return getToken(HelloParser::IF, 0);
}

tree::TerminalNode* HelloParser::IfExprContext::OpenPar() {
  return getToken(HelloParser::OpenPar, 0);
}

tree::TerminalNode* HelloParser::IfExprContext::CompareOperator() {
  return getToken(HelloParser::CompareOperator, 0);
}

tree::TerminalNode* HelloParser::IfExprContext::ClosePar() {
  return getToken(HelloParser::ClosePar, 0);
}

tree::TerminalNode* HelloParser::IfExprContext::FigureOpen() {
  return getToken(HelloParser::FigureOpen, 0);
}

tree::TerminalNode* HelloParser::IfExprContext::FigureClose() {
  return getToken(HelloParser::FigureClose, 0);
}

std::vector<tree::TerminalNode *> HelloParser::IfExprContext::ID() {
  return getTokens(HelloParser::ID);
}

tree::TerminalNode* HelloParser::IfExprContext::ID(size_t i) {
  return getToken(HelloParser::ID, i);
}

std::vector<tree::TerminalNode *> HelloParser::IfExprContext::INT() {
  return getTokens(HelloParser::INT);
}

tree::TerminalNode* HelloParser::IfExprContext::INT(size_t i) {
  return getToken(HelloParser::INT, i);
}

std::vector<tree::TerminalNode *> HelloParser::IfExprContext::FLT() {
  return getTokens(HelloParser::FLT);
}

tree::TerminalNode* HelloParser::IfExprContext::FLT(size_t i) {
  return getToken(HelloParser::FLT, i);
}

std::vector<HelloParser::OperationContext *> HelloParser::IfExprContext::operation() {
  return getRuleContexts<HelloParser::OperationContext>();
}

HelloParser::OperationContext* HelloParser::IfExprContext::operation(size_t i) {
  return getRuleContext<HelloParser::OperationContext>(i);
}

std::vector<HelloParser::ExprContext *> HelloParser::IfExprContext::expr() {
  return getRuleContexts<HelloParser::ExprContext>();
}

HelloParser::ExprContext* HelloParser::IfExprContext::expr(size_t i) {
  return getRuleContext<HelloParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::IfExprContext::Newline() {
  return getTokens(HelloParser::Newline);
}

tree::TerminalNode* HelloParser::IfExprContext::Newline(size_t i) {
  return getToken(HelloParser::Newline, i);
}


size_t HelloParser::IfExprContext::getRuleIndex() const {
  return HelloParser::RuleIfExpr;
}


antlrcpp::Any HelloParser::IfExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloParserVisitor*>(visitor))
    return parserVisitor->visitIfExpr(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::IfExprContext* HelloParser::ifExpr() {
  IfExprContext *_localctx = _tracker.createInstance<IfExprContext>(_ctx, getState());
  enterRule(_localctx, 24, HelloParser::RuleIfExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(HelloParser::IF);
    setState(141);
    match(HelloParser::OpenPar);
    setState(142);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::INT)
      | (1ULL << HelloParser::FLT)
      | (1ULL << HelloParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(143);
    match(HelloParser::CompareOperator);
    setState(144);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::INT)
      | (1ULL << HelloParser::FLT)
      | (1ULL << HelloParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(145);
    match(HelloParser::ClosePar);
    setState(146);
    match(HelloParser::FigureOpen);
    setState(156);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HelloParser::Integer)
      | (1ULL << HelloParser::Float)
      | (1ULL << HelloParser::Long)
      | (1ULL << HelloParser::For)
      | (1ULL << HelloParser::IF)
      | (1ULL << HelloParser::ID))) != 0)) {
      setState(149);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case HelloParser::Integer:
        case HelloParser::Float:
        case HelloParser::Long:
        case HelloParser::ID: {
          setState(147);
          operation();
          break;
        }

        case HelloParser::For:
        case HelloParser::IF: {
          setState(148);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(152);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HelloParser::Newline) {
        setState(151);
        match(HelloParser::Newline);
      }
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(159);
    match(HelloParser::FigureClose);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> HelloParser::_decisionToDFA;
atn::PredictionContextCache HelloParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HelloParser::_atn;
std::vector<uint16_t> HelloParser::_serializedATN;

std::vector<std::string> HelloParser::_ruleNames = {
  "main", "summ", "diff", "mult", "div", "inPow", "inSqrt", "operation", 
  "create", "ass", "expr", "forCycle", "ifExpr"
};

std::vector<std::string> HelloParser::_literalNames = {
  "", "", "'return'", "'continue'", "'INT'", "'FLT'", "'Long'", "'And'", 
  "'For'", "'If'", "'Then'", "'Else'", "", "", "", "", "'<'", "'<='", "'>'", 
  "'>='", "'=='", "'!='", "'='", "':'", "';'", "'+'", "'+='", "'-'", "'-='", 
  "'*'", "'*='", "'/'", "'/='", "'('", "')'", "'{'", "'}'", "'\u003F'", 
  "','", "'!'", "'^'", "'^='", "'~'", "'~='"
};

std::vector<std::string> HelloParser::_symbolicNames = {
  "", "Tim", "Return", "Continue", "Integer", "Float", "Long", "And", "For", 
  "IF", "Then", "Else", "INT", "Digit", "FLT", "CompareOperator", "LessThan", 
  "LessOrEqual", "GreaterThan", "GreaterOrEqual", "Equal", "NotEqual", "Assign", 
  "Colon", "Newline", "Plus", "PlusAss", "Minus", "MinusAss", "Star", "StarAss", 
  "Devide", "DevideAss", "OpenPar", "ClosePar", "FigureOpen", "FigureClose", 
  "QuestionMark", "Comma", "Ant", "Pow", "PowAss", "Sqrt", "SqrtAss", "Foo", 
  "Bar", "ID", "Comment", "WS"
};

dfa::Vocabulary HelloParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HelloParser::_tokenNames;

HelloParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x32, 0xa4, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x1f, 0xa, 0x2, 0x3, 0x2, 0x5, 0x2, 0x22, 0xa, 
    0x2, 0x7, 0x2, 0x24, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x27, 0xb, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x31, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3b, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x45, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4f, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x59, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x68, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x75, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x84, 0xa, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x88, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x8b, 0xb, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x98, 0xa, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0x9b, 0xa, 0xe, 0x7, 0xe, 0x9d, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
    0xa0, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 0x5, 
    0x5, 0x2, 0xe, 0xe, 0x10, 0x10, 0x30, 0x30, 0x3, 0x2, 0x6, 0x8, 0x4, 
    0x2, 0xe, 0xe, 0x10, 0x10, 0x2, 0xab, 0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x30, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x58, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x10, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x69, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x74, 0x3, 0x2, 0x2, 0x2, 0x18, 0x76, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1f, 0x5, 0x10, 0x9, 0x2, 0x1d, 0x1f, 
    0x5, 0x16, 0xc, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x7, 0x1a, 
    0x2, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x24, 0x3, 0x2, 0x2, 0x2, 0x23, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x27, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x30, 0x2, 0x2, 0x29, 0x2a, 0x7, 
    0x18, 0x2, 0x2, 0x2a, 0x2b, 0x9, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x1b, 
    0x2, 0x2, 0x2c, 0x31, 0x9, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x30, 0x2, 
    0x2, 0x2e, 0x2f, 0x7, 0x1c, 0x2, 0x2, 0x2f, 0x31, 0x9, 0x2, 0x2, 0x2, 
    0x30, 0x28, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x30, 0x2, 0x2, 0x33, 0x34, 
    0x7, 0x18, 0x2, 0x2, 0x34, 0x35, 0x9, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 
    0x1d, 0x2, 0x2, 0x36, 0x3b, 0x9, 0x2, 0x2, 0x2, 0x37, 0x38, 0x7, 0x30, 
    0x2, 0x2, 0x38, 0x39, 0x7, 0x1e, 0x2, 0x2, 0x39, 0x3b, 0x9, 0x2, 0x2, 
    0x2, 0x3a, 0x32, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x30, 0x2, 0x2, 0x3d, 
    0x3e, 0x7, 0x18, 0x2, 0x2, 0x3e, 0x3f, 0x9, 0x2, 0x2, 0x2, 0x3f, 0x40, 
    0x7, 0x1f, 0x2, 0x2, 0x40, 0x45, 0x9, 0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 
    0x30, 0x2, 0x2, 0x42, 0x43, 0x7, 0x20, 0x2, 0x2, 0x43, 0x45, 0x9, 0x2, 
    0x2, 0x2, 0x44, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x44, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x9, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x30, 0x2, 0x2, 
    0x47, 0x48, 0x7, 0x18, 0x2, 0x2, 0x48, 0x49, 0x9, 0x2, 0x2, 0x2, 0x49, 
    0x4a, 0x7, 0x21, 0x2, 0x2, 0x4a, 0x4f, 0x9, 0x2, 0x2, 0x2, 0x4b, 0x4c, 
    0x7, 0x30, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x22, 0x2, 0x2, 0x4d, 0x4f, 0x9, 
    0x2, 0x2, 0x2, 0x4e, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x7, 0x30, 0x2, 
    0x2, 0x51, 0x52, 0x7, 0x18, 0x2, 0x2, 0x52, 0x53, 0x9, 0x2, 0x2, 0x2, 
    0x53, 0x54, 0x7, 0x2a, 0x2, 0x2, 0x54, 0x59, 0x9, 0x2, 0x2, 0x2, 0x55, 
    0x56, 0x7, 0x30, 0x2, 0x2, 0x56, 0x57, 0x7, 0x2b, 0x2, 0x2, 0x57, 0x59, 
    0x9, 0x2, 0x2, 0x2, 0x58, 0x50, 0x3, 0x2, 0x2, 0x2, 0x58, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x30, 
    0x2, 0x2, 0x5b, 0x5c, 0x7, 0x18, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x2c, 0x2, 
    0x2, 0x5d, 0x5e, 0x9, 0x2, 0x2, 0x2, 0x5e, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x68, 0x5, 0x4, 0x3, 0x2, 0x60, 0x68, 0x5, 0x6, 0x4, 0x2, 0x61, 
    0x68, 0x5, 0x8, 0x5, 0x2, 0x62, 0x68, 0x5, 0xa, 0x6, 0x2, 0x63, 0x68, 
    0x5, 0x12, 0xa, 0x2, 0x64, 0x68, 0x5, 0x14, 0xb, 0x2, 0x65, 0x68, 0x5, 
    0xc, 0x7, 0x2, 0x66, 0x68, 0x5, 0xe, 0x8, 0x2, 0x67, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x60, 0x3, 0x2, 0x2, 0x2, 0x67, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x62, 0x3, 0x2, 0x2, 0x2, 0x67, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x11, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x9, 0x3, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x30, 0x2, 0x2, 0x6b, 0x6c, 0x7, 
    0x18, 0x2, 0x2, 0x6c, 0x6d, 0x9, 0x4, 0x2, 0x2, 0x6d, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6f, 0x7, 0x30, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x18, 0x2, 
    0x2, 0x70, 0x71, 0x9, 0x2, 0x2, 0x2, 0x71, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x75, 0x5, 0x18, 0xd, 0x2, 0x73, 0x75, 0x5, 0x1a, 0xe, 0x2, 0x74, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0xa, 0x2, 0x2, 0x77, 0x78, 0x7, 
    0x23, 0x2, 0x2, 0x78, 0x79, 0x7, 0x30, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x28, 
    0x2, 0x2, 0x7a, 0x7b, 0x7, 0x30, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x11, 0x2, 
    0x2, 0x7c, 0x7d, 0x9, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x28, 0x2, 0x2, 
    0x7e, 0x7f, 0x9, 0x4, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x24, 0x2, 0x2, 0x80, 
    0x89, 0x7, 0x25, 0x2, 0x2, 0x81, 0x84, 0x5, 0x10, 0x9, 0x2, 0x82, 0x84, 
    0x5, 0x16, 0xc, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x1a, 
    0x2, 0x2, 0x86, 0x88, 0x3, 0x2, 0x2, 0x2, 0x87, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x26, 0x2, 0x2, 0x8d, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0xb, 0x2, 0x2, 0x8f, 0x90, 0x7, 
    0x23, 0x2, 0x2, 0x90, 0x91, 0x9, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x11, 
    0x2, 0x2, 0x92, 0x93, 0x9, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x24, 0x2, 
    0x2, 0x94, 0x9e, 0x7, 0x25, 0x2, 0x2, 0x95, 0x98, 0x5, 0x10, 0x9, 0x2, 
    0x96, 0x98, 0x5, 0x16, 0xc, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9b, 
    0x7, 0x1a, 0x2, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x26, 0x2, 0x2, 0xa2, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x11, 0x1e, 0x21, 0x25, 0x30, 0x3a, 0x44, 
    0x4e, 0x58, 0x67, 0x74, 0x83, 0x89, 0x97, 0x9a, 0x9e, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HelloParser::Initializer HelloParser::_init;

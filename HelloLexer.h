/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/lang/HelloLexer.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"


/* lexer postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


namespace antlrcpptest {


class  HelloLexer : public antlr4::Lexer {
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
    CommentsChannel = 2, DirectiveChannel = 3
  };

  explicit HelloLexer(antlr4::CharStream *input);
  ~HelloLexer();

  /* public lexer declarations section */
  bool canTestFoo() { return true; }
  bool isItFoo() { return true; }
  bool isItBar() { return true; }

  void myFooLexerAction() { /* do something*/ };
  void myBarLexerAction() { /* do something*/ };

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void FooAction(antlr4::RuleContext *context, size_t actionIndex);
  void BarAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool FooSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BarSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest

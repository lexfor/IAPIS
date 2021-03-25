
#include <iostream>

#include "antlr4-runtime.h"
#include "HelloLexer.h"
#include "HelloParser.h"
#include <string.h>
#include <fstream>
#include "HelloVisitor.h"

using namespace antlrcpptest;
using namespace antlr4;

int main(int , const char **) {
  std::ifstream file;
  file.open("/home/tima/lang/input.hell");
  std::string in = "",temp;
  while(!file.eof()){
      std::getline(file,temp);
      in += temp;
  }
  std::cout << in;
  ANTLRInputStream input(in);
  HelloLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  HelloParser parser(&tokens);
  HelloParser::MainContext* tree = parser.main();
  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
  Tree myTree;
  HelloVisitor visitor;
  visitor.SetTree(myTree);
  visitor.visit(tree);
  myTree.toFile();
  //myTree.showTree();
  system("cd .. && g++ -o rez rez.cpp Longs.h Longs.cpp");
  return 0;
}

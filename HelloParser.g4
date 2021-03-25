parser grammar HelloParser;

options {
	tokenVocab = HelloLexer;
}

// These are all supported parser sections:

// Parser file header. Appears at the top in all parser related files. Use e.g. for copyrights.
@parser::header {/*Author : Tsimofei Kinevich, group : 821703*/}

// Follows directly after the standard #includes in h + cpp files.
@parser::postinclude {
/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif
}

@parser::members {
/* public parser declarations/members section */
bool myAction() { return true; }
bool doesItBlend() { return true; }
void cleanUp() {}
void doInit() {}
void doAfter() {}
}


// Actual grammar start.
main: ((operation | expr) Newline?)*;
summ: ID Assign (ID|INT|FLT) Plus (ID|INT|FLT) | ID PlusAss (ID|INT|FLT);
diff: ID Assign (ID|INT|FLT) Minus (ID|INT|FLT) | ID MinusAss (ID|INT|FLT);
mult: ID Assign (ID|INT|FLT) Star (ID|INT|FLT) | ID StarAss (ID|INT|FLT);
div: ID Assign (ID|INT|FLT) Devide (ID|INT|FLT)  | ID DevideAss (ID|INT|FLT);
inPow: ID Assign (ID|INT|FLT) Pow (ID|INT|FLT) | ID PowAss (ID|INT|FLT);
inSqrt: ID Assign Sqrt (ID|INT|FLT);
operation: summ | diff | mult | div | create | ass | inPow | inSqrt;
create: (Integer|Float|Long) ID Assign (INT|FLT);
ass: ID Assign (ID|INT|FLT);
expr: forCycle | ifExpr;
forCycle: For OpenPar ID Comma ID (CompareOperator) (FLT | INT | ID) Comma (FLT | INT) ClosePar FigureOpen ((operation | expr)Newline)* FigureClose;
ifExpr: IF OpenPar (ID|INT|FLT) CompareOperator (ID|INT|FLT) ClosePar FigureOpen ((operation | expr)Newline?)* FigureClose;


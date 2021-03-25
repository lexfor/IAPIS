lexer grammar HelloLexer;

// These are all supported lexer sections:

// Lexer file header. Appears at the top of h + cpp files. Use e.g. for copyrights.
@lexer::header {/*Author : Tsimofei Kinevich, group : 821703*/}

// Follows directly after the standard #includes in h + cpp files.
@lexer::postinclude {
/* lexer postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif
}

// Appears in the public part of the lexer in the h file.
@lexer::members {/* public lexer declarations section */
bool canTestFoo() { return true; }
bool isItFoo() { return true; }
bool isItBar() { return true; }

void myFooLexerAction() { /* do something*/ };
void myBarLexerAction() { /* do something*/ };
}

channels { CommentsChannel, DirectiveChannel }

tokens {
	Tim
}

Return: 'return';
Continue: 'continue';

Integer: 'INT';
Float: 'FLT';
Long: 'Long';

And: 'And';
For: 'For';
IF: 'If';
Then: 'Then';
Else: 'Else';

INT: Digit+;
Digit: '-'?[0-9];
FLT: Digit+'.'Digit+;




CompareOperator: LessThan | LessOrEqual | GreaterThan | GreaterOrEqual | Equal | NotEqual;
LessThan: '<';
LessOrEqual: '<=';
GreaterThan:  '>';
GreaterOrEqual: '>=';
Equal: '==';
NotEqual: '!=';
Assign: '=';

Colon: ':';
Newline: ';';
Plus: '+';
PlusAss: '+=';
Minus: '-';
MinusAss: '-=';
Star: '*';
StarAss: '*=';
Devide: '/';
DevideAss: '/=';
OpenPar: '(';
ClosePar: ')';
FigureOpen: '{';
FigureClose: '}';
QuestionMark: '?';
Comma: ',';
Ant: '!';
Pow: '^';
PowAss: '^=';
Sqrt: '~';
SqrtAss: '~=';

Foo: {canTestFoo()}? 'foo' {isItFoo()}? { myFooLexerAction(); };
Bar: 'bar' {isItBar()}? { myBarLexerAction(); };

ID: LETTER (LETTER)*;
fragment LETTER : [a-zA-Z0-9];

Comment : '#' ~[\r\n]* '\r'? '\n' -> channel(CommentsChannel);
WS: [ \t\r\n]+ -> channel(99);
fragment Baz: 'Baz';
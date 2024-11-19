all: parser

parser: alot.lex alot.yacc
	lex alot.lex
	yacc -d alot.yacc
	gcc lex.yy.c y.tab.c -o parser

clean:
	rm lex.yy.c y.tab.c y.tab.h parser

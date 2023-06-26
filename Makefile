all: hw3

example: hw3
	./hw3 example.st
	javaa/javaa example.a
	/usr/lib/jvm/java-8-openjdk-amd64/bin/java example

test: hw3
	./hw3 test.st
	javaa/javaa test.a
	/usr/lib/jvm/java-8-openjdk-amd64/bin/java test
	
hw3: yacc lex
	gcc -o hw3 y.tab.c -ll
lex:
	lex hw3.lex
yacc:
	yacc -d hw3.y
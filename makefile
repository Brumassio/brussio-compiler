all: brussio

CPP=gcc
FLEX=flex
BISON=bison

brussio: lex.yy.c syntactic.tab.c
	$(CPP) -o steemit syntactic.tab.c lex.yy.c

lex.yy.c: lexica.l
	$(FLEX) lexica.l

syntactic.tab.c: syntactic.y
	$(BISON) -d syntactic.y

clean:
	rm brussio lex.yy.c syntactic.tab.c syntactic.tab.h

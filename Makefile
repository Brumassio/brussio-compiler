SCANNER := flex
SCANNER_PARAMS := lexica.l
PARSER := bison
PARSER_PARAMS := -d syntactic.y

all: compile translate

compile:
	$(SCANNER) $(SCANNER_PARAMS)
	$(PARSER) $(PARSER_PARAMS)
	gcc -o glf syntactic.tab.c -ll

run: glf
	 clear
	 compile
	 translate

debug: PARSER_PARAMS += -Wcounterexamples -Wconflicts-sr -Wconflicts-rr -Wcex -Wother
debug: all

translate: glf	
	./glf teste.jsc

clear:rm y.tab.c
	   rm y.tab.h
	   rm lex.yy.c
	   rm glf
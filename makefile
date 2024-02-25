# Definições das variáveis
SCANNER := flex
SCANNER_PARAMS := lexica.l
PARSER := bison
PARSER_PARAMS := -v -d syntactic.y

# Regra para construir tudo
all: compile translate

# Regra para compilar o scanner e o parser
compile:
	$(SCANNER) $(SCANNER_PARAMS)
	$(PARSER) $(PARSER_PARAMS)
	gcc -o cassio syntactic.tab.c lex.yy.c 

# Regra para executar o programa
run: cassio
	clear
	./cassio teste.brussio

# Regra para depuração (debug)
debug: PARSER_PARAMS += -Wcounterexamples -Wconflicts-sr -Wconflicts-rr -Wcex -Wother
debug: all

# Regra para traduzir
translate: cassio
	./cassio teste.brussio

# Regra para limpar os arquivos gerados durante a compilação
clear:
	rm -f syntactic.tab.c syntactic.tab.h lex.yy.c cassio


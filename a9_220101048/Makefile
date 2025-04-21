BASE= a9_220101048

output: 220101048 a9_220101048_test.mc
	./a9_220101048 < a9_220101048_test.mc > a9_220101048_output.txt

build: 220101048

220101048: lex.yy.o $(BASE).tab.o $(BASE).o
	g++ lex.yy.o $(BASE).tab.o $(BASE).o -lfl -o a9_220101048

$(BASE).o: $(BASE).cc
	g++ -c -o $(BASE).o $(BASE).cc

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

$(BASE).tab.o: $(BASE).tab.c
	g++ -c $(BASE).tab.c

lex.yy.c: $(BASE).l $(BASE).tab.h
	flex $(BASE).l

$(BASE).tab.c $(BASE).tab.h: $(BASE).y
	bison -dt $(BASE).y

clean:
	rm -f lex.yy.c $(BASE).tab.c $(BASE).tab.h *.o a9_220101048 *.gch 220101048_output.txt


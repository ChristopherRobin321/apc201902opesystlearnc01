
all: learnc01

learnc01: learnc01.o
	gcc -o learnc01 learnc01b.o -lncurses

learnc01.o: learnc01b.c
	gcc -c learnc01b.c

clean:
	rm learnc01b.o learnc01

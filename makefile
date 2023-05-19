vector2.o: vector2.h vector2.c
	gcc -c vector2.h vector2.c -Wall -g

test.o: test.c
	gcc -c test.c -Wall -g

test: test.o vector2.o
	gcc -o test test.o vector2.o -Wall -g
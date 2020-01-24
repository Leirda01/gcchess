run_test : pieces.o board.o test.o
	gcc -o run_test pieces.o board.o test.o

test.o : test.c board.h pieces.h
	gcc -c test.c board.c pieces.c

pieces.o : pieces.c
	gcc -c pieces.c

board.o : board.c pieces.h
	gcc -c board.c pieces.c

clean :
	rm run_test pieces.o board.o test.o

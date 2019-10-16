all: main.o struct.o
	gcc -o  program main.c struct.c
main.o: header.h main.c struct.c
  	gcc -c main.c
struct.o: struct.c header.h
 	gcc -c struct.c
run:
  	./program
clean:
  	rm *.o
  	rm *~

all: list.o main.o
		gcc -o program list.o main.o
		
list.o: list.c list.h
		gcc -c list.c
		
main.o: main.c list.h
		gcc -c main.c
		
run:
		./program
		
clean:
		rm *.o
		rm *~
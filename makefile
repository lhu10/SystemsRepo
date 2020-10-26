all: work02.o
	gcc -o work02 work02.o

work02.o: work02.c
	gcc -c work02.c

run: 
	./work02

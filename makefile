exe: main.o soccer.o
	gcc main.o soccer.o -o exe
main.o: main.c soccer.h
	gcc -c -Wall main.c -o main.o
soccer.o: soccer.c soccer.h
	gcc -c -Wall soccer.c -o soccer.o
clean:
	rm -f *.o
	clear
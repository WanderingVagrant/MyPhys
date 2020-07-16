all: Driver

Driver: Driver.o Vector.o
	g++ -o Driver -Wall -pedantic -g Driver.o Vector.o

Driver.o: Driver.cpp
	g++ -Wall -pedantic -g -c Driver.cpp

Vector.o: Vector.cpp Vector.h
	g++ -Wall -pedantic -g -c Vector.cpp
	

clean:
	rm -f *.o Driver


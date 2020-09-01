all: Driver

Driver: Driver.o Vector.o Object.o World.o
	g++ -o Driver -Wall -pedantic -g Driver.o Vector.o Object.o World.o

Driver.o: Driver.cpp
	g++ -Wall -pedantic -g -c Driver.cpp

Vector.o: Vector.cpp Vector.h
	g++ -Wall -pedantic -g -c Vector.cpp
	
Object.o: Object.cpp Object.h Vector.cpp Vector.h
	g++ -Wall -pedantic -g -c Object.cpp

World.o: World.h Object.cpp Object.h Vector.cpp Vector.h
	g++ -Wall -pedantic -g -c World.cpp

clean:
	rm -f *.o Driver


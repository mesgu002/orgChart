all: main.o base.o
	g++ main.o base.o

base.o: base.cpp
	g++ -c base.cpp

main.o: 
	g++ -c main.cpp

clean:
	rm *.o ./a.out


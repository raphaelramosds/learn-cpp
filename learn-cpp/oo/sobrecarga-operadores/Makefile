all: programa

programa: main.o vetor2d.o
	g++ -o programa main.o vetor2d.o

main.o: main.cpp vetor2d.h
	g++ -c main.cpp -o main.o

vetor2d.o: vetor2d.cpp vetor2d.h
	g++ -c vetor2d.cpp -o vetor2d.o

clean:
	rm -rf *.o programa


cls

g++ -c figurageometrica.cpp -o figurageometrica.o
g++ -c retangulo.cpp -o retangulo.o
g++ -c reta.cpp -o reta.o
g++ -c circulo.cpp -o circulo.o
g++ -c main.cpp -o main.o

g++ -o programa main.o figurageometrica.o reta.o retangulo.o circulo.o

programa

del *.o
del *.exe
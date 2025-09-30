cls

g++ -c equipamento.cpp -o equipamento.o
g++ -c motor.cpp -o motor.o
g++ -c main.cpp -o main.o
g++ -o programa motor.o equipamento.o main.o

programa

del *.o
del *.exe
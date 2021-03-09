#Makefile para Projeto 1 LP1
#Autorer: André Luis Gurgel de Faria Junior

CC = g++
CFLAGS  = -std=c++11  -Wall -pedantic -g

default: exec

exec: main.o  musica.o lista.o playlist.o node.o 
	$(CC) $(CFLAGS) -o exec main.o lista.o musica.o playlist.o node.o


main.o:  main.cpp lista.hpp musica.hpp playlist.hpp node.hpp
	$(CC) $(CFLAGS) -c main.cpp

musica.o:  musica.cpp musica.hpp node.hpp
	$(CC) $(CFLAGS) -c musica.cpp

lista.o:  lista.cpp lista.hpp  musica.hpp node.hpp
	$(CC) $(CFLAGS) -c lista.cpp

playlist.o:  playlist.cpp lista.hpp  musica.hpp playlist.hpp node.hpp
	$(CC) $(CFLAGS) -c playlist.cpp

node.o:  node.cpp node.hpp
	$(CC) $(CFLAGS) -c node.cpp


clean: 
	$(RM) exec *.o *~
#
# Makefile
#

#Flags used to compile files
CFLAGS = -g -Wall --std=c++11 -c
LFLAGS = -g -Wall --std=c++11

#Compile
CC=g++

TARGET=prog

#Files
PROG1 = main.cpp 
OBJ1 = main.o 


DEPS= metaphone.h
LIB= metaphone.cpp
OBJL= metaphone.o

all: $(TARGET)  clear

Metaphone.o : Metaphone.h Metaphone.cpp
	$(CC) $(CFLAGS) Metaphone.cpp

prog:  main.cpp Metaphone.o
	$(CC) $(LFLAGS) -o prog main.cpp Metaphone.o

clear:
	rm -f *.o

clean:
	rm -f $(TARGET)  *.o

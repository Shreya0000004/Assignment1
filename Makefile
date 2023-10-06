# Makefile

CC = g++
CFLAGS = -Wall -g
LDFLAGS =

all: main

main: main.o Car.o
	$(CC) $(CFLAGS) -o main main.o Car.o $(LDFLAGS)

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Car.o: Car.cpp
	$(CC) $(CFLAGS) -c Car.cpp

clean:
	rm -f main main.o Car.o


CC = g++

all: hw01

hw01: a-g.o hw01.cpp a-g.h
	$(CC) hw01.cpp -o hw01 a-g.o

a-g.o: a-g.cpp a-g.h
	$(CC) -c a-g.cpp -o a-g.o

clean:
	rm hw01 *.o

tar:
	tar cf hw01.tar a-g.h a-g.cpp hw01.cpp hw01.src 


all: llista_bid

main.o: main.c LlistaBid.h
	gcc main.c -c -Wall -Wextra

LlistaBid.o: LlistaBid.c LlistaBid.h
	gcc LlistaBid.c -c -Wall -Wextra

llista_bid: main.o LlistaBid.o
	gcc main.o LlistaBid.o -o llista_bid.exe -Wall -Wextra

clean:
	rm *.o llista_bid.exe

tar:
	tar -cvzf llista_bid.tar.gz *.c *.h makefile

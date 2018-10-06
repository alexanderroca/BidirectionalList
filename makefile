all: bidireccional_list

main.o: main.c LlistaBid.h
		gcc main.c -c -Wall -Wextra

LlistaBid.o: LlistaBid.c LlistaBid.h
		gcc LlistaBid.c -c -Wall -Wextra

P3: main.o LlistaBid.o
		gcc main.o LlistaBid.o -o bidireccional_list.exe -Wall -Wextra

clean:
	rm *.o bidireccional_list.exe

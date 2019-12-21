CC= gcc
FLAGS= -Wall -g

all: isort txtfind

isort: mains.o isort.o
	$(CC) $(FLAGS) -o isort mains.o isort.o

txtfind: maintxt.o txtfind.o
	$(CC) $(FLAGS) -o txtfind maintxt.o txtfind.o

mains.o: mains.c  isort.h
	$(CC) $(FLAGS) -c mains.c

maintxt.o: maintxt.c  txtfind.h
	$(CC) $(FLAGS) -c maintxt.c

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -fPIC -c txtfind.c

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -fPIC -c isort.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so isort txtfind

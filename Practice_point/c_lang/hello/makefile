all: a.out

a.out: hello.o
	gcc hello.o

hello.o: hello.c
	gcc -c hello.c

clean:
	rm hello.o a.out

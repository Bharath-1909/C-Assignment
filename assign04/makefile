main: main.o fun.o
	gcc -o main main.o fun.o
main.o:main.c
	gcc -c main.c
fun.o:fun.c
	gcc -c fun.c

run:
	./main
clean:
	rm main main.o fun.o

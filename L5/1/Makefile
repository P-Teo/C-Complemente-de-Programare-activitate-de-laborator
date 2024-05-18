main: main.o header.o
	clang -Wall -lm main.o header.o -o main
main.o: main.c header.h
	clang -c -Wall main.c
header.o: header.c header.h
	clang -c -Wall header.c
	
.PHONY: clean
clean: 
	rm -f*.o
	rm main

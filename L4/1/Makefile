main: main.o functie.o
	clang -Wall main.o functie.o -pthread -o main
	
main.o: main.c functie.h
	clang -c -Wall main.c
	
functie.o: functie.c functie.h
	clang -c -Wall functie.c
	
.PHONY: clean
clean:
	rm -f*.o
	rm main

c3P4: c3P4.o numere.o
	clang -Wall -lm  c3P4.o numere.o -o c3P4
	
c3P4.o: c3P4.c numere.h
	clang -c -Wall c3P4.c
	
numere.o: numere.c numere.h
	clang -c -Wall numere.c
	
.PHONY: clean
clean:
	rm -f*.o
	rm c3P4

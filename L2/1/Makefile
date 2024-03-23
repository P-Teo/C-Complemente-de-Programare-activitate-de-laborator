p1: p1.o 
	clang -Wall p1.o  -o p1
	
p1.o: p1.c 
	clang -c -Wall p1.c
		
.PHONY: clean
clean:
	rm -f*.o
	rm p1

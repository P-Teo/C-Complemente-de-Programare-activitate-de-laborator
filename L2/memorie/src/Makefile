CC = clang #Compilatorul folosit
CFLAGS = -Wall #Optiuni

TARGET = t1 #Executabilul
HEADERS = functii.h
OBJ = t1.o functii.o
LIBS = -lm #Optiuni de biblioteca

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $(TARGET)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $< 

.PHONY: clean
clean:
	rm -f *.o
	rm $(TARGET)




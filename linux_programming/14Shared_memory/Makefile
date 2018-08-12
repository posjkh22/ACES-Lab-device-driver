TARGET = msg2
SRC = msg2.c
OBJ = msg2.o
CC = gcc

all: $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

.c.o:
	$(CC) -c $<

clean:
	rm -rf *.o $(TARGET)

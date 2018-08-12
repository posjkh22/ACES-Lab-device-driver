TARGET = fifo4
SRC = fifo4.c
OBJ = fifo4.o
CC = gcc

all: $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

.c.o:
	$(CC) -c $<

clean:
	rm -rf *.o $(TARGET)

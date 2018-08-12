TARGET = 10ctrlc2
SRC = 10ctrlc2.c
OBJ = 10ctrlc2.o
CC = gcc

all: $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

.c.o:
	$(CC) -c $<

clean:
	rm -rf *.o $(TARGET)

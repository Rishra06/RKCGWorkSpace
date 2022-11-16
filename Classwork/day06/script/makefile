CC = gcc

SRC = src
INC = inc 
OBJ = obj
BIN = bin

all: $(BIN)/app1

$(BIN)/app1: $(OBJ)/strcpy1.o
	$(CC) -o $(BIN)/app1 $(OBJ)/strcpy1.o

$(OBJ)/strcpy1.o: $(SRC)/strcpy.c
	$(CC) -c $(SRC)/strcpy1.c -I $(INC)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

CC = gcc
CFLAGS = -std=c11 -Wall -I. -Ipocketpy 

SRC = main.c levenshtein.c hamming.c pocketpy.c
BIN = main

default: $(BIN) 

$(BIN): $(SRC)
	$(CC) $(CFLAGS) -o $(BIN) $(SRC) -lm


run: $(BIN)
	./$(BIN)

clean:
	rm -f $(BIN)

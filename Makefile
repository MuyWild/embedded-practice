CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -std=c11
SRC = src/main.c src/factorial.c src/fibonacci.c src/math_utils.c
OUT = mi_programa

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT) src/*.o

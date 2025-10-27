CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = src/main.c
OBJ = $(SRC:.c=.o)
TARGET = mi_programa

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean

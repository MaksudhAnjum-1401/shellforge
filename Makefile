CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = shellforge

SRC = src/main.c src/history.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

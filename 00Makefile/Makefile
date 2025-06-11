# Makefile Template

# Compiler
CC = gcc

# Compile option
CFLAGS = -Wall -g

# Program name
TARGET = main

# Source file
SOURCES = main.c

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)
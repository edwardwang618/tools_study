# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Targets
TARGET = hello
OBJS := $(patsubst %.c, %.o, $(wildcard *.c))

# Default target
all: $(TARGET)
	@echo "OBJS=$(OBJS)"
	@echo "TARGET=$(TARGET)"

# Linking the target
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compiling source files to object files
hello.o: hello.c world.h
	$(CC) $(CFLAGS) -c hello.c

world.o: world.c world.h
	$(CC) $(CFLAGS) -c world.c

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
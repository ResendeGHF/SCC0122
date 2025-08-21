# Makefile for compiling and running tarefa-{i}-15457752.c in C

FC = gcc

# Flags for C compile
FFLAGS = -Wall -Wextra

# Program name
SRC = $(wildcard *.c)
EXE = $(basename $(SRC))

# Default target: compile and run
all: run

# Compile
$(EXE): $(SRC)
	$(FC) $(FFLAGS) $(SRC) -o $(EXE)

# Run after compile
run: $(EXE)
	./$(EXE)

# Remove binary
clean:
	rm -f $(EXE)


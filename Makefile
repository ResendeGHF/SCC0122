# Makefile for compiling and running tarefa-{i}-15457752.f77 in strict F77 mode

FC = gfortran

# Flags for strict Fortran 77 fixed-form
FFLAGS = -x f77 -std=legacy -ffixed-form -Wall

# Program name
SRC = $(wildcard tarefa-*-15457752.f77)
EXE = $(basename $(SRC)).exe

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


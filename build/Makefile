# Macros

SRC_FILES = $(wildcard ../src/*.cpp)
SRC_ADD = ../src
HEADER_FILES = $(wildcard ../include/*.h)
CC = g++
FLAGS = -I../include/ -o

.PHONY : clean

# Making executables

functions.out : $(SRC_FILES) $(HEADER_FILES)
	$(CC) $(FLAGS)  $@ ../src/functions.cpp

numbers.out : $(SRC_FILES) $(HEADER_FILES)
	$(CC) $(FLAGS) $@ ../src/numbers.cpp

# Cleaning

clean :
	rm functions.out numbers.out

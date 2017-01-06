#
# Copyright (c) 2016 Jose A. Garcia Sanchez
#

TARGET = sim

SRC = src
INCLUDE = include

RM = rm -f
CC = g++
INCLUDES = -I$(INCLUDE)
CFLAGS = -g -Wall $(INCLUDES)

SCRS = $(SRC)/particle.cpp $(SRC)/main.cpp
OBJS=main.o particle.o

.PHONY: clean $(TARGET)

%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $<

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

clean:
	$(RM) $(TARGET) *.o
	$(RM) -r html

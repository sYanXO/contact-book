# Makefile for Contact Book

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = contact-book
SRC = main.cpp methods.cpp
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)

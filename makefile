CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic

.PHONY : all
all : program

program : main.cpp DateADT.o
	$(CXX) $(CXXFLAGS) -o $@ $^

DateADT.o : DateADT.cpp DateADT.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY : clean
clean :
	rm *.o
	rm *~
	rm program
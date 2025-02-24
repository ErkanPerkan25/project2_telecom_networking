CXX ?= g++

CXXFLAGS := -c -Wall -ansi -pedantic -std=c++20

transmit: transmit.o
	$(CXX) -o transmit transmit.o

flipBit: flipBit.o
	$(CXX) -o flipBit flipBit.o

reciver: reciver.o
	$(CXX) -o reciver reciver.o

transmit.o: transmit.cpp
	$(CC) $(CXXFLAGS) transmit.cpp

flipBit.o: flipBit.cpp
	$(CC) $(CXXFLAGS) flipBit.cpp

reciver.o: reciver.cpp
	$(CC) $(CXXFLAGS) reciver.cpp

clean:
	/bin/rm -f *~ *.o transmit flipBit reciver transmit.o flipBit.o reciver.o

.PHONY: clean

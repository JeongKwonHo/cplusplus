CC=g++
CFLAGS=-W -Wall -O2
OBJS=const2.o Point.o
TARGET=const2

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

const2.o : Point.h Point.cpp const2.cpp
Point.o : Point.h Point.cpp

clean :
	rm -f *.o $(TARGET)
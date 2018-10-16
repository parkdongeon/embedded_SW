CFLAGS= -Wall
OBJS = func1.o myapp.o
TARGET = myapp

$(TARGET) : $(OBJS)
	$(CC)

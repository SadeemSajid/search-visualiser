CC = g++
TARGET = app
OBJFILES = Node.o NodeGraphic.o
IMPFILES = ./imp/Node.cpp ./imp/NodeGraphic.cpp
HEADFILES = ./head/Node.h ./head/NodeGraphic.h
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all: $(TARGET)

$(TARGET): $(OBJFILES) main.o
	$(CC) $(OBJFILES) main.o -o $(TARGET) $(LDFLAGS)

$(OBJFILES): $(IMPFILES) $(HEADFILES)
	$(CC) -c $(IMPFILES)

main.o: main.cpp
	$(CC) -c main.cpp

clean:
	rm -f $(OBJFILES) $(TARGET) main.o

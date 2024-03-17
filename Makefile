TARGET = app
OBJFILES = Node.o NodeGraphic.o
IMPFILES = ./imp/Node.cpp ./imp/NodeGraphic.cpp
HEADFILES = ./head/Node.h ./head/NodeGraphic.h
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all: $(TARGET)

$(TARGET): $(OBJFILES) main.o
	g++ $(OBJFILES) main.o -o $(TARGET) $(LDFLAGS)

$(OBJFILES): $(IMPFILES) $(HEADFILES)
	g++ -c $(IMPFILES)

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f $(OBJFILES) $(TARGET) main.o

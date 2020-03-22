file	:=
ifeq ($(OS),Windows_NT)
	file=main.exe
else
	file=main
endif


TARGET:=bin/$(file)

SRCDIR:=src
OBJDIR:=obj

obj:=$(OBJDIR)/Panel.o $(OBJDIR)/Game.o


all:$(TARGET)

$(TARGET):src/main.cpp $(obj)
	g++ -o $(TARGET) src/main.cpp $(obj)
$(OBJDIR)/Panel.o:src/Panel.cpp src/Panel.hpp src/Game.hpp
	g++ -c src/Panel.cpp -o $(OBJDIR)/Panel.o
$(OBJDIR)/Game.o:src/Game.cpp src/Game.hpp
	g++ -c src/Game.cpp -o $(OBJDIR)/Game.o

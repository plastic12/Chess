file	:=
ifeq ($(OS),Windows_NT)
	file=main.exe
else
	file=main
endif


TARGET:=bin/$(file)

SRCDIR:=src
OBJDIR:=obj

obj:=


all:$(TARGET)

$(TARGET):src/main.cpp $(obj)
	g++ -o $(TARGET) src/main.cpp $(obj)
$(OBJDIR)/Recipe.o:

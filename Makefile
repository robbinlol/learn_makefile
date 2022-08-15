.PHONY: main, cmd, clean
CFLAGS += -ggdb
CFLAGS += -std=c++11
CFLAGS += -Wall
CFLAGS += -I include
CFLAGS += -L library
SRC := src


OBJECTS := $(wildcard $(SRC)/*.cc)
OUTPUT += bin

main: $(SRC)/main.cc $(SRC)/c.o
	g++ $(SRC)/main.cc $(SRC)/c.o $(CFLAGS) -o $(OUTPUT)/test

c.o: $(SRC)/c.cc $(SRC)/c.h
	@echo "compiler C"
	g++ -c $(CFLAGS) $(SRC)/c.cc $(SRC)/c.h -o $(SRC)/c.o

clean:
	@ rm -fr $(OUTPUT)/*
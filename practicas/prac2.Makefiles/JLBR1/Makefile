# Archivo Makefile con objetivos falsos,
# variables automáticas y reglas de patrón

PROYECTO=muestreo
DIRDEST=/usr/local/bin
CFLAGS=-Wall
LDFLAGS=-lm
CC=gcc
objects:=$(patsubst %.c,%.o, $(wildcard *.c))

all: $(PROYECTO)

%.o: %.c
	$(CC) -c $< $(CFLAGS)

$(PROYECTO): $(objects)
	$(CC) $^ -o $@ $(LDFLAGS)

.PHONY: clean

install: all
	if [ ! -d $(DIRDEST) ]; then \
		sudo mkdir $(DIRDEST); \
	fi; \
	sudo cp $(PROYECTO) $(DIRDEST)

uninstall: 
	sudo rm $(DIRDEST)/$(PROYECTO)

clean:
	rm -f *.o $(PROYECTO)


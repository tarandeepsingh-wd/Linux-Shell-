CC = gcc
CFLAGS = -Wall

all:
	$(CC) $(CFLAGS) *.c -o myshell

clean:
	rm -f myshell

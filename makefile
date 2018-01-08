CC = gcc
CFLAGS = -pedantic

src = \
	$(wildcard test/*.c) \
	$(wildcard common/*.c) \
	$(wildcard PIOCIE/*.c) \
	$(wildcard BARCIE/*.c) \
    
obj = $(src:.c=.o)






main: $(obj)
	$(CC) -o $@ $^


all: clean main
    
clean:
	rm -f $(obj) *.exe
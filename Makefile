CC=gcc
CFLAGS=-g -Wall -pg
LDFLAGS=-g -Wall -pg
scc:scc.o arrlib.o
.c.o:
clean:
	rm scc scc.o arrlib.o

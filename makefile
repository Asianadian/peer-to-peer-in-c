CC = gcc

CFLAGS =

EXEC = main.exe

SRCS = DataStructures/Common/Node.c main.c

OBJS = $(SRCS:.c=.o)

all: $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm $(EXEC) $(OBJS)



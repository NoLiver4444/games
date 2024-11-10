CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

TARGET = game/snace

all: $(TARGET)
all: clean 

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
CC=gcc
FLAGS=-Wall -Wextra -Werror -I ./include

TARGET = home_program
TESTTARGET = test_home_program

SRCS = $(wildcard src/*.c)
SRCS := $(filter-out src/seminar_main.c, $(SRCS))

OBJS = $(SRCS:.c=.o)

$(TARGET) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm src/*.o tests/*.o *.o $(TARGET)

install:$(TARGET)
	cp $(TARGET) bin/

uninstall:
	rm bin/$(TARGET)

test:

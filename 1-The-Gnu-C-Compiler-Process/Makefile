CC = gcc
#INCLUDE = include
CFLAGS = -Wall -Wextra -std=c17 -g
SRC    = main.c
TARGET = app

all:
	$(CC) $(SRC) -o $(TARGET) -I $(INCLUDE) $(CFLAGS)
	./$(TARGET)


compile:
	$(CC) $(SRC) -o $(OUT) $(CFLAGS)

run:
	./$(TARGET)

add:
	git add .

status:
	git status

commit:
	git commit -m "updated"

push:
	git push

clean:
	rm -rf $(TARGET)

NAME = libft.a

CC = gcc
CFLAGS =  -Wall -Wextra -Werror 

SRC := $(wildcard *.c) 

OBJ = $(SRC:.c=.o)

all: $(NAME)
	@$(CC) $(CFLAGS) -c $? $(SRC)
	@ar rc $(NAME) $? $(OBJ)
	@ranlib $(NAME)

clean:
	rm -f  $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all




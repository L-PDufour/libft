NAME = libft.a

CC = gcc
CFLAGS =  -Wall -Wextra -Werror 

SRC := *.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $? $(SRC)
	@ar rc $(NAME) $? $(OBJ)
	@ranlib $(NAME)

clean:
	rm -f  $(OBJ)

fclean: clean
	rm libft.a

re: fclean all




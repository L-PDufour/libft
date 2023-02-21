NAME = libft.a
RM = rm -f
CFLAGS =  -Wall -Wextra -Werror 
.PHONY: all clean fclean re
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strcmp.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	@ar -rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME) $(OBJ)


re: fclean all




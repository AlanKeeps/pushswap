NAME = libft.a

SRCS =			ft_memccpy.c ft_memcpy.c ft_memchr.c ft_memset.c ft_strlcpy.c \
				ft_strlcat.c ft_bzero.c ft_memcmp.c ft_memmove.c ft_strlen.c \
				ft_strchr.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_atoi.c \
				ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
				ft_atoi_long ft_lstadd_back ft_lstadd_front ft_lstfind ft_lstnew\
				ft_lstpop ft_lstsort ft_lstlast

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -c 


all:			$(NAME)

$(NAME):		$(OBJS)		
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:  clean fclean all re

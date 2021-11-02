NAME		=	push_swap

SRCS_FILES	= 	push_swap.c \
				parcer.c \
				errors.c \
				operations1.c \
				operations2.c \
				move.c \
				move_in_other_way.c \

SRCS_FOLDER	=	source/
HEADER		=	include/push_swap.h

SRCS		= 	$(addprefix $(SRCS_FOLDER),$(SRCS_FILES))
OBJS		=	$(patsubst %.c,%.o,$(SRCS))

INCLUDE		=	-I./include -I./libs/libft/

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -MMD
RM			=	rm -f

LIB = ./libs/libft/libft.a

all:		$(NAME)

%.o:		%.c
			$(CC) $(CFLAGS) $(INCLUDE) -c -g $< -o $@
		
$(NAME):	$(OBJS)
			$(MAKE) -C $(dir $(LIB))
			$(CC) $(INCLUDE) -o $(NAME) $(OBJS) $(LIB)

clean:
			$(RM) $(OBJS) $(OBJS:.o=.d)
			@make -C $(dir $(LIB)) clean

fclean:		clean
			@make -C $(dir $(LIB)) fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
-include	$(OBJS:.o=.d)
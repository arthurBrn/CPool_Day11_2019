##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Make file
##

SRC	=	my_params_to_list.c	\
		lib/my/my_putstr.c	\
		lib/my/my_putchar.c

OBJ	=	$(SRC:.c=.o)

NAME	=	a.out

RM	=	rm -f

PATH_TO_INCLUDE	=	include/

INCLUDE	=	-I $(PATH_TO_INCLUDE)

#CFLAGS	=	-W -Wall -Wshadow -Wextra -Werror $(INCLUDE)

LIB	=	-L lib/my -lmy

LDFLAGS	=	$(LIB)

CC	=	gcc

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIB) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

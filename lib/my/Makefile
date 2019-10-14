##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Make file
##

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

RM	=	rm -f

DOT_H	=	my.h

PATH_TO_INCLUDE	=	../../include/

LIB_COMPILE	=	ar rc

$(NAME):	$(OBJ)
	$(LIB_COMPILE) $(NAME) $(OBJ)
	cp $(DOT_H) $(PATH_TO_INCLUDE)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

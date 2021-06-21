##
## EPITECH PROJECT, 2020
## B-CPE-100-NAN-1-1-cpoolday10-alexandre.laborde
## File description:
## Makefile
##

SRC		=	src/main.c				\
			requirement.c			\
			src/usage.c				\
			src/parsing.c			\
			src/palindrome.c		\
			src/error_handling.c	\


OBJ		=	$(SRC: .c=.o)

NAME	= 	palindrome

all: 		$(NAME)

$(NAME):	$(OBJ)
			make -C lib/my
			gcc -g -o $(NAME) $(OBJ) -Llib -lmy -Iinclude

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
		make fclean -C lib/my

re:		fclean all
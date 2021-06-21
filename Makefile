##
## EPITECH PROJECT, 2020
## B-CPE-100-NAN-1-1-cpoolday10-alexandre.laborde
## File description:
## Makefile
##

TEST_SRC = 	tests/test_requirement.c		\
			tests/test_palindrome.c			\
			requirement.c					\
			src/parsing.c					\
			src/palindrome.c				\
			src/error_handling.c			\
			src/flag_errors.c				\

TEST_NAME = unit_tests

TEST_FLAGS	=	-lcriterion -lgcov -coverage -fprofile-arcs -ftest-coverage

SRC		=	src/main.c				\
			requirement.c			\
			src/usage.c				\
			src/parsing.c			\
			src/palindrome.c		\
			src/error_handling.c	\
			src/flag_errors.c		\


OBJ		=	$(SRC: .c=.o)

NAME	= 	palindrome

all: 		$(NAME)

$(NAME):	$(OBJ)
			make -C lib/my
			gcc -g -o $(NAME) $(OBJ) -Llib -lmy -Iinclude

tests_run:  clean
			gcc -o $(TEST_NAME) $(TEST_SRC) $(TEST_FLAGS) $(CFLAGS) -Llib/my/-lmy
			./$(TEST_NAME)
			gcovr --exclude tests

clean:
		rm -f *.o
		rm -f tests/*.o

fclean: clean
		rm -f $(NAME)
		rm -f $(TEST_NAME)
		rm *.gcno
		rm *.gcda
		make fclean -C lib/my

re:		fclean all
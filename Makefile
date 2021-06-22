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

SRC		=	src/main.c					\
			requirement.c				\
			src/usage.c					\
			src/parsing.c				\
			src/palindrome.c			\
			src/error_handling.c		\
			src/flag_errors.c			\
			src/int_to_be_transformed.c	\
			src/my_nbr_to_str.c			\
			src/palindrom_finder.c		\
			src/base_converter.c		\

OBJ		=	$(SRC: .c=.o)

NAME	= 	palindrome

all: 		$(NAME)

$(NAME):	$(OBJ)
			make -C lib/my
			gcc -g -o $(NAME) $(OBJ) -Llib -lmy -Iinclude

tests_run:  clean
			make -C lib/my
			gcc -o $(TEST_NAME) $(TEST_SRC) $(TEST_FLAGS) $(CFLAGS) -Llib -lmy -Iinclude
			./$(TEST_NAME)
			gcovr --exclude tests

tclean:
		rm -f *.o
		rm -f tests/*.o

tfclean: tclean
		rm -f $(TEST_NAME)
		make fclean -C lib/my
		rm *.gcno
		rm *.gcda

clean:
		rm -f *.o
		rm -f tests/*.o

fclean: clean
		rm -f $(NAME)
		make fclean -C lib/my

re:		fclean all
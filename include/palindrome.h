/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

typedef struct parsing_s
{
    int n;
    int n_val;
    int p;
    int p_val;
    int b;
    int b_val;
    int imin;
    int imin_val;
    int imax;
    int imax_val;
    int current_inc;
    int sol;
}parsing_t;

int error_handling(int ac, char **av);
int my_factrec_synthesis(int nb);
int my_squareroot_synthesis(int nb);
void usage(void);
parsing_t parsing(int ac, char **av);
int palindrome(parsing_t args);
int error_b(int ac, char **av, int pos);
int error_imin(int ac, char **av, int pos);
int error_imax(int ac, char **av, int pos);
int int_to_be_transformed(int nb, parsing_t args);
char *my_nbr_to_str(int nb);
int is_nb_palindrome(int nb, int base);
int reverse_number(int nb, int base);
void print_solution(int nb, parsing_t args);
int find_this_palindrom(int nb, parsing_t args);
int do_p_flag(parsing_t args);
char *decimal_base_converter(int nb, int base);
int base_to_decimal_converter(char *str, int base, int new_base);

#endif /* !PALINDROME_H_ */

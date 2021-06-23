/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** int_to_be_transformed
*/

#include "palindrome.h"
#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse_number(int nb, int base)
{
    char *reverse = my_nbr_to_str(nb);

    if (base != 10)
        reverse = decimal_base_converter(nb, base);
    reverse = my_revstr(reverse);
    if (base != 10)
        base_to_decimal_converter(reverse, base, 10);
    nb = atoi(reverse);
    return (nb);
}

int is_nb_palindrome(int nb, int base)
{
    char *str = my_nbr_to_str(nb);
    int i = 0;
    int j = my_strlen(str) - 1;
    int limit = my_strlen(str) / 2 - 1;

    if (base != 10) {
        str = decimal_base_converter(nb, base);
        limit = my_strlen(str) / 2 - 1;
        j = my_strlen(str) - 1;
    }
    if (my_strlen(str) % 2 == 1)
        limit++;
    while (i != limit + 1) {
        if (str[i] != str[j])
            return (-1);
        i++;
        j--;
    }
    return (0);
}

void print_solution(int nb, parsing_t args)
{
    printf("%d leads to %d in %d iteration(s) in base %d\n", \
    args.n_val, nb, args.current_inc, args.b_val);
}

int int_to_be_transformed(int nb, parsing_t args)
{
    int reverse = reverse_number(nb, args.b_val);
    int res = 0;

    if (args.current_inc == args.imax_val + 1 || nb > 2147483647) {
        my_putstr("no solution\n");
        return (0);
    }
    if (is_nb_palindrome(nb, args.b_val) == \
    0 && args.current_inc >= args.imin_val) {
        print_solution(nb, args);
        return (0);
    }
    res = nb + reverse;
    args.current_inc = args.current_inc + 1;
    return (int_to_be_transformed(res, args));
}
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

int reverse_number(int nb)
{
    char *reverse = my_nbr_to_str(nb);

    reverse = my_revstr(reverse);
    nb = atoi(reverse);
    return (nb);
}

int is_nb_palindrome(int nb)
{
    char *str = my_nbr_to_str(nb);
    int i = 0;
    int j = my_strlen(str) - 1;
    int limit = my_strlen(str) / 2 - 1;

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

void print_end(void)
{
    my_putstr("done");
}

int int_to_be_transformed(int nb, parsing_t args)
{
    int reverse = reverse_number(nb);

    int res = 0;

    if (is_nb_palindrome(nb) == 0) {
        print_end();
        return (0);
    }
    res = nb + reverse;
    return (int_to_be_transformed(res, args));
}
/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** my_nbr_to_str
*/

#include "my.h"
#include "palindrome.h"
#include <stdlib.h>

int my_int_len(int nb)
{
    int i = 0;
    int div = 1;

    while (1) {
        if ((nb / div) == 0)
            return (i);
        div = div * 10;
        i++;
    }
    return (i);
}

char *my_nbr_to_str(int nb)
{
    int i = 0;
    int size = my_int_len(nb);
    char *str = malloc(sizeof(char) * (size + 1));

    while (i != size) {
        str[i] = (nb % 10) + '0';
        nb = nb / 10;
        i++;
    }
    str[i] = 0;
    str = my_revstr(str);
    return (str);
}
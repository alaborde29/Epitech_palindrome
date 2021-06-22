/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** base_converter
*/

#include "my.h"
#include <stdlib.h>

int base_to_decimal_converter(char *str, int base, int new_base)
{
    int i = 0;
    int res = 0;

    while (str[i] != 0) {
        res = res + str[i] - '0';
        if (str[i + 1])
            res = res * base;
        i++;
    }
    return (res);
}

char *decimal_base_converter(int nb, int base)
{
    int quotient = nb;
    int reste = 0;
    char *res = malloc(sizeof(char) * (11));
    int exit = 0;
    int i = 0;

    while (exit == 0) {
        if ((quotient / base) < base)
            exit = 1;
        reste = quotient % base;
        quotient = quotient / base;
        res[i] = reste + '0';
        i++;
    }
    res[i] = quotient + '0';
    res[i + 1] = 0;
    res = my_revstr(res);
    return (res);
}
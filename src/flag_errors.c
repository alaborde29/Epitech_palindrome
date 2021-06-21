/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** flag_errors
*/

#include "my.h"

int error_b(int ac, char **av, int pos)
{
    if (my_getnbr(av[pos + 1]) < 2 || my_getnbr(av[pos + 1]) > 10)
        return (-1);
}

int error_imin(int ac, char **av, int pos)
{
    int i = 0;
    int num = my_getnbr(av[pos + 1]);

    if (my_getnbr(av[pos + 1]) < 0 || my_getnbr(av[pos + 1]) > 2147483647)
        return (-1);
    while (i != ac) {
        if (my_strcmp(av[i], "-imax") == 0 && my_getnbr(av[i + 1]) < num)
            return (-1);
        i++;
    }
    return (0);
}

int error_imax(int ac, char **av, int pos)
{
    int i = 0;
    int num = my_getnbr(av[pos + 1]);

    if (my_getnbr(av[pos + 1]) < 2 || my_getnbr(av[pos + 1]) > 10)
        return (-1);
    while (i != ac) {
        if (my_strcmp(av[i], "-imin") == 0 && my_getnbr(av[i + 1]) > num)
            return (-1);
        i++;
    }
    return (0);
}
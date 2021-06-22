/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** error_handling
*/

#include "my.h"
#include "palindrome.h"

int verif_flag_val(int ac, char **av)
{
    int i = 0;

    while (i != ac) {
        if (my_strcmp(av[i], "-b") == 0 && error_b(ac, av, i) == -1)
            return (-1);
        if (my_strcmp(av[i], "-imin") == 0 && error_imin(ac, av, i) == -1)
            return (-1);
        if (my_strcmp(av[i], "-imax") == 0 && error_imax(ac, av, i) == -1)
            return (-1);
        i++;
    }
    return (0);
}

int same_flags(int ac, char **av)
{
    if (ac >= 7) {
        if (my_strcmp(av[3], av[5]) == 0)
            return (-1);
    }
    if (ac >= 9) {
        if (my_strcmp(av[3], av[7]) == 0)
            return (-1);
        if (my_strcmp(av[5], av[7]) == 0)
            return (-1);
    }
    return (0);
}

int facult_arg_errors(int ac, char **av)
{
    if (ac % 2 != 1 || ac > 9) {
        my_putstr("invalid argument");
        return (-1);
    }
    if (ac >= 5) {
        if (my_strcmp(av[3], "-b") != 0 && my_strcmp(av[3], "-imin") \
        != 0 && my_strcmp(av[3], "-imax") != 0)
            return (-1);
    }
    if (ac >= 7) {
        if (same_flags(ac, av) == -1 || (my_strcmp(av[5], "-b") != 0 && \
        my_strcmp(av[5], "-imin") != 0 && my_strcmp(av[5], "-imax")) != 0)
            return (-1);
    }
    if (ac == 9) {
        if (same_flags(ac, av) == -1 || (my_strcmp(av[7], "-b") != 0 && \
        my_strcmp(av[7], "-imin") != 0 && my_strcmp(av[7], "-imax")) != 0)
            return (-1);
    }
    return (0);
}

// penser a verifier le palindrome dans la base adequate.

int error_handling(int ac, char **av)
{
    if (ac < 3)
        return (-1);
    if (my_strcmp(av[1], "-n") != 0 && my_strcmp(av[1], "-p") != 0)
        return (-1);
    if (my_getnbr(av[2]) < 0 || my_getnbr(av[2]) > 2147483647 \
    || my_str_isnum(av[2]) == 0)
        return (-1);
    if (my_strcmp(av[1], "-p") == 0 && \
    is_nb_palindrome(my_getnbr(av[2]), 10) == -1)
        return (-1);
    if (ac > 3) {
        if (facult_arg_errors(ac, av) == -1)
            return (-1);
    }
    if (verif_flag_val(ac, av) == -1)
        return (-1);
    return (0);
}
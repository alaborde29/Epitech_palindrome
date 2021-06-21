/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** error_handling
*/

#include "my.h"

int facult_arg_errors(int ac, char **av)
{
    if (ac % 2 != 1 || ac > 9)
        return (-1);
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac < 3)
        return (-1);
    if (my_strcmp(av[1], "-n") != 0 && my_strcmp(av[1], "-p") != 0)
        return (-1);
    if (my_getnbr(av[2]) < 0)
        return (-1);
    if (ac > 3) {
        if (facult_arg_errors(ac, av) == -1)
            return (-1);
    }
    return (0);
}
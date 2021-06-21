/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** requirement
*/

#include "my.h"

int my_factrec_synthesis(int nb)
{
    int res = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (res);
    else {
        res = nb * my_factrec_synthesis(nb - 1);
        return (res);
    }
}

int my_squareroot_synthesis(int nb)
{
    int res = 0;

    if (nb < 0 || nb > 2147483647)
        return (-1);
    while (res * res != nb) {
        if ((res * res) > nb)
            return (-1);
        res++;
    }
    return (res);
}
/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** parsing
*/

#include "my.h"
#include "palindrome.h"

parsing_t init_parsing_struct(void)
{
    parsing_t args;

    args.n = 0;
    args.n_val = 0;
    args.p = 0;
    args.p_val = 0;
    args.b = 0;
    args.b_val = 10;
    args.imin = 1;
    args.imin_val = 0;
    args.imax = 1;
    args.imax_val = 100;
    return (args);
}

parsing_t parsing(int ac, char **av)
{
    parsing_t args = init_parsing_struct();
}
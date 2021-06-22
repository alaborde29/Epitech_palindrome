/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** parsing
*/

#include "my.h"
#include "palindrome.h"
#include <stdio.h>

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
    args.current_inc = 0;
    args.sol = 0;
    return (args);
}

parsing_t parsing_next(int ac, char **av, int i, parsing_t args)
{
    if (my_strcmp(av[i], "-b") == 0) {
        args.b = 1;
        args.b_val = my_getnbr(av[i + 1]);
    }
    if (my_strcmp(av[i], "-imin") == 0) {
        args.imin = 1;
        args.imin_val = my_getnbr(av[i + 1]);
    }
    if (my_strcmp(av[i], "-imax") == 0) {
        args.imax = 1;
        args.imax_val = my_getnbr(av[i + 1]);
    }
    return (args);
}

void print_struct(parsing_t args)
{
    printf("\nargs.b : %d\n", args.b);
    printf("args.bval : %d\n", args.b_val);
    printf("args.n : %d\n", args.n);
    printf("args.n_val : %d\n", args.n_val);
    printf("args.p : %d\n", args.p);
    printf("args.p_val : %d\n", args.p_val);
    printf("args.imax : %d\n", args.imax);
    printf("args.imax_val : %d\n", args.imax_val);
    printf("args.imin : %d\n", args.imin);
    printf("args.imin_val : %d\n", args.imin_val);
    printf("args.current_inc : %d\n", args.current_inc);
}

parsing_t parsing(int ac, char **av)
{
    parsing_t args = init_parsing_struct();
    int i = 0;

    while (i != ac)
    {
        if (my_strcmp(av[i], "-n") == 0) {
            args.n = 1;
            args.n_val = my_getnbr(av[i + 1]);
        }
        if (my_strcmp(av[i], "-p") == 0) {
            args.p = 1;
            args.p_val = my_getnbr(av[i + 1]);
        }
        args = parsing_next(ac, av, i, args);
        i++;
    }
    //print_struct(args);
    return (args);
}
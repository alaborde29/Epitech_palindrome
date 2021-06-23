/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** palindrom_finder
*/

#include "palindrome.h"
#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_this_palindrom(int nb, parsing_t args)
{
    int reverse = reverse_number(nb, args.b_val);
    int res = 0;

    if (nb > args.p_val || args.current_inc == args.imax_val + 1 \
    || nb > 2147483647)
        return (0);
    if (nb == args.p_val && args.current_inc >= args.imin_val) {
        print_solution(nb, args);
        args.sol = 1;
    }
    res = nb + reverse;
    args.current_inc = args.current_inc + 1;
    return (find_this_palindrom(res, args));
}

int do_p_flag(parsing_t args)
{
    args.n_val = 0;
    while (args.n_val != args.p_val + 1) {
        find_this_palindrom(args.n_val, args);
        args.n_val++;
    }
    return (0);
}
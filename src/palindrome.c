/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** palindrome
*/

#include "my.h"
#include "palindrome.h"

int palindrome(parsing_t args)
{
    if (args.p == 1)
        return (do_p_flag(args));
    if (args.n == 1)
        return (int_to_be_transformed(args.n_val, args));
}
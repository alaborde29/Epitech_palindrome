/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** usage
*/

#include "my.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./palinfrome -n number -p palindrome ");
    my_putstr("[-b base] [-imin i] [-imax i]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\t-n n\t\tinteger to be transformed (>=0)\n");
    my_putstr("\t-p pal\t\tpalindromic number to ");
    my_putstr("be obtained (incompatible with the -n\n");
    my_putstr("\t\t\toption) (>=0)\n");
    my_putstr("\t\t\tif defined, all fitting values of n will be output\n");
    my_putstr("\t-b base\t\tbase in which the procedure ");
    my_putstr("will be executed (1<b<=10) [def: 10]\n");
    my_putstr("\t-imin i\t\tminimum number of ");
    my_putstr("iterations, included (>=0) [def: 0]\n");
    my_putstr("\t-immax i\tmaximum number of");
    my_putstr(" iterations, included (>=0) [def: 100]\n");
}
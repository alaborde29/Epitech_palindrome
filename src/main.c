/*
** EPITECH PROJECT, 2020
** B-CPE-101-NAN-1-1-infinadd-alexandre.laborde
** File description:
** main
*/

#include "my.h"

int main(void)
{
    int a = 321;
    char *str = "---++-+-++-++--+++--+-0";
    int res = 0;

    my_put_nbr(a);
    my_putchar('\n');
    res = my_getnbr(str);
    my_put_nbr(res);
    return (0);
}
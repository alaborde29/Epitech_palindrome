/*
** EPITECH PROJECT, 2020
** B-CPE-101-NAN-1-1-infinadd-alexandre.laborde
** File description:
** main
*/

#include "my.h"
#include "palindrome.h"

int main(int ac, char **av)
{
    my_put_nbr(my_factrec_synthesis(my_getnbr(av[1])));
    return (my_factrec_synthesis(my_getnbr(av[1])));
}
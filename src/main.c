/*
** EPITECH PROJECT, 2020
** B-CPE-101-NAN-1-1-infinadd-alexandre.laborde
** File description:
** main
*/

#include "my.h"
#include "palindrome.h"
#include "test.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        usage();
        return (0);
    }
    if (error_handling(ac, av) == -1)
        return (84);
    return (palindrome(parsing(ac, av)));
}
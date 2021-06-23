/*
** EPITECH PROJECT, 2021
** B-SYN-200-NAN-2-1-palindrome-alexandre.laborde
** File description:
** test_palindrome
*/

#include <criterion/criterion.h>
#include "../include/palindrome.h"

//Tests error handling

Test(error_handling, two_same_flags)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-n";
    av[4] = "6";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, negative_number_n)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 3;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "-8";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, negative_number_p)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 3;

    av[0] = "./palindrome";
    av[1] = "-p";
    av[2] = "-8";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, negative_number_imin)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "-8";
    av[3] = "-imin";
    av[4] = "-8";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, negative_number_imax)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "-8";
    av[3] = "-imax";
    av[4] = "-8";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, too_small_bin)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "-8";
    av[3] = "-b";
    av[4] = "1";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, too_big_bin)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "-8";
    av[3] = "-b";
    av[4] = "11";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, good_n)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 3;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    
    cr_assert_eq(error_handling(ac, av), 0);
}

Test(error_handling, good_p)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 3;

    av[0] = "./palindrome";
    av[1] = "-p";
    av[2] = "8";
    
    cr_assert_eq(error_handling(ac, av), 0);
}

Test(error_handling, good_imin)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-imin";
    av[4] = "8";
    
    cr_assert_eq(error_handling(ac, av), 0);
}

Test(error_handling, good_imax)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-imax";
    av[4] = "8";
    
    cr_assert_eq(error_handling(ac, av), 0);
}

Test(error_handling, good_b)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-b";
    av[4] = "8";
    
    cr_assert_eq(error_handling(ac, av), 0);
}

//test base_converter
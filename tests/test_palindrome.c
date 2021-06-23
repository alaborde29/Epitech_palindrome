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

Test(error_handling, bad_b)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-b";
    av[4] = "60";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, bad_imin)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-imin";
    av[4] = "-6";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, bad_imin_sup)
{
    char **av = malloc(sizeof(char *) * 7);
    int ac = 7;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-imin";
    av[4] = "6";
    av[5] = "-imax";
    av[6] = "2";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, bad_imax_sup)
{
    char **av = malloc(sizeof(char *) * 7);
    int ac = 7;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-imin";
    av[4] = "6";
    av[5] = "-imax";
    av[6] = "2";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, bad_imax)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "8";
    av[3] = "-imax";
    av[4] = "-9";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, good_p_b)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-p";
    av[2] = "4446";
    av[3] = "-b";
    av[4] = "7";
    
    cr_assert_eq(error_handling(ac, av), 0);
}

Test(error_handling, bad_p_b)
{
    char **av = malloc(sizeof(char *) * 5);
    int ac = 5;

    av[0] = "./palindrome";
    av[1] = "-p";
    av[2] = "15651";
    av[3] = "-b";
    av[4] = "7";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, same_flag_nine)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-imin";
    av[8] = "100";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, same_flag_nine_diff)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-b";
    av[6] = "0";
    av[7] = "-imin";
    av[8] = "100";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, same_flag_nine_diff_deux)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-b";
    av[8] = "100";
    
    cr_assert_eq(error_handling(ac, av), -1);
}


Test(error_handling, same_flag_seven)
{
    char **av = malloc(sizeof(char *) * 8);
    int ac = 7;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-p";
    av[2] = "21";
    av[3] = "-imin";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, badbad_ac)
{
    char **av = malloc(sizeof(char *) * 8);
    int ac = 1;
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, ac_odd)
{
    char **av = malloc(sizeof(char *) * 11);
    int ac = 10;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-b";
    av[8] = "100";
    av[9] = "plop";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, same_flag_nine_min)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-b";
    av[8] = "100";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, same_flag_seven_min)
{
    char **av = malloc(sizeof(char *) * 8);
    int ac = 7;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-b";
    av[6] = "10";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, same_flag_nine_max)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-e";
    av[8] = "100";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

Test(error_handling, bad_first_flag)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-u";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-e";
    av[8] = "100";
    
    cr_assert_eq(error_handling(ac, av), -1);
}

//test base_converter

Test(base_converter, dec_to_bin)
{   
    cr_assert_str_eq(decimal_base_converter(65, 2), "1000001");
}

Test(base_converter, bin_to_dec)
{   
    cr_assert_eq(base_to_decimal_converter("1000001", 2, 10), 65);
}

//test parsing

Test(parsing, big_parsing_n)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-imax";
    av[8] = "100";
    args = parsing(ac, av);

    cr_assert_eq(args.n, 1);
    cr_assert_eq(args.n_val, 21);
    cr_assert_eq(args.b, 1);
    cr_assert_eq(args.b_val, 10);
    cr_assert_eq(args.imin, 1);
    cr_assert_eq(args.imin_val, 0);
    cr_assert_eq(args.imax, 1);
    cr_assert_eq(args.imax_val, 100);
}

Test(parsing, big_parsing_p)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-p";
    av[2] = "22";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-imax";
    av[8] = "100";
    args = parsing(ac, av);

    cr_assert_eq(args.p, 1);
    cr_assert_eq(args.p_val, 22);
    cr_assert_eq(args.b, 1);
    cr_assert_eq(args.b_val, 10);
    cr_assert_eq(args.imin, 1);
    cr_assert_eq(args.imin_val, 0);
    cr_assert_eq(args.imax, 1);
    cr_assert_eq(args.imax_val, 100);
}

//test palindrome

Test(palindrome, test_p)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-p";
    av[2] = "22";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-imax";
    av[8] = "100";
    args = parsing(ac, av);

    cr_assert_eq(palindrome(args), 0);
}

Test(palindrome, test_p_bin)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-p";
    av[2] = "65";
    av[3] = "-b";
    av[4] = "2";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-imax";
    av[8] = "100";
    args = parsing(ac, av);

    cr_assert_eq(palindrome(args), 0);
}

Test(palindrome, test_n)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "22";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-imax";
    av[8] = "100";
    args = parsing(ac, av);

    cr_assert_eq(palindrome(args), 0);
}

Test(palindrome, test_no_solution)
{
    char **av = malloc(sizeof(char *) * 10);
    int ac = 9;
    parsing_t args;

    av[0] = "./palindrome";
    av[1] = "-n";
    av[2] = "21";
    av[3] = "-b";
    av[4] = "10";
    av[5] = "-imin";
    av[6] = "0";
    av[7] = "-imax";
    av[8] = "0";
    args = parsing(ac, av);

    cr_assert_eq(palindrome(args), 0);
}

//test int_to_be_transformed
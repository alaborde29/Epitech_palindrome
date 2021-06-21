/*
** EPITECH PROJECT, 2021
** test_win_condition.c
** File description:
** test stumper2
*/

#include <criterion/criterion.h>
#include "../include/palindrome.h"

Test(factrec, all_possible_ans)
{
    cr_assert_eq(my_factrec_synthesis(0), 1);
    cr_assert_eq(my_factrec_synthesis(1), 1);
    cr_assert_eq(my_factrec_synthesis(2), 2);
    cr_assert_eq(my_factrec_synthesis(3), 6);
    cr_assert_eq(my_factrec_synthesis(4), 24);
    cr_assert_eq(my_factrec_synthesis(5), 120);
    cr_assert_eq(my_factrec_synthesis(6), 720);
    cr_assert_eq(my_factrec_synthesis(7), 5040);
    cr_assert_eq(my_factrec_synthesis(8), 40320);
    cr_assert_eq(my_factrec_synthesis(9), 362880);
    cr_assert_eq(my_factrec_synthesis(10), 3628800);
    cr_assert_eq(my_factrec_synthesis(11), 39916800);
    cr_assert_eq(my_factrec_synthesis(12), 479001600);
}

Test(factrec, fails)
{
    cr_assert_eq(my_factrec_synthesis(-1), 0);
    cr_assert_eq(my_factrec_synthesis(2147483648), 0);
}

Test(square_root, fails)
{
    cr_assert_eq(my_squareroot_synthesis(-1), -1);
    cr_assert_eq(my_squareroot_synthesis(2147483648), -1);
}

Test(square_root, fail)
{
    cr_assert_eq(my_squareroot_synthesis(-1), -1);
    cr_assert_eq(my_squareroot_synthesis(2147483648), -1);
    cr_assert_eq(my_squareroot_synthesis(3), -1);
}

Test(square_root, functionnal)
{
    cr_assert_eq(my_squareroot_synthesis(0), 0);
    cr_assert_eq(my_squareroot_synthesis(9), 3);
}
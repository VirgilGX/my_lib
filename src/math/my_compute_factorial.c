/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_compute_factorial
*/

#include "../include/my_lib_math.h"

/**
 * Computes and returns factorial.
 *
 * @param nbr    Value to use for compute.
 * @return       Factorial or 0 if input is negative, or 1 if input is 0 || 1.
 */
int my_compute_factorial(int nbr)
{
    if (nbr < 0) {
        return 0;
    } else if (nbr == 0 || nbr == 1) {
        return 1;
    } else {
        return nbr * my_compute_factorial(nbr - 1);
    }
}

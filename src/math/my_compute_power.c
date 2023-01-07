/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_compute_power
*/

#include "../include/my_lib_math.h"

/**
 * Calculates the power of a number.
 *
 * @param int nbr The number to raise to a power.
 * @param int p The power to raise the number to.
 * @return int The result of raising the number to the power.
 *
 * @example
 * my_compute_power(2, 3);  // returns 8 (2^3)
 * my_compute_power(5, 2);  // returns 25 (5^2)
 * my_compute_power(10, 0); // returns 1 (10^0)
 * my_compute_power(3, -2); // returns 0 (3^(-2) does not make sense)
 *
 * @note
 * If p is 0, the function returns 1 regardless of the value of nbr.
 * If p is negative, the function returns 0 because raising a number
 * to a negative power does not make sense.
 */
int my_compute_power(int nbr, int p)
{
    if (p == 0) {
        return 1;
    } else if (p < 0) {
        return 0;
    } else {
        return nbr * my_compute_power(nbr, p - 1);
    }
}

/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_put_bit
*/

#include "../../../include/my_lib.h"

ssize_t my_put_bit(unsigned int nbr)
{
    ssize_t count = 0;
    int out[32];
    int i = 0;
    unsigned int q = nbr;
    (nbr == 0) ? count += my_put_unsigned_int(nbr, 1) : 0;
    while (q > 0) {
        out[i] = q % 2;
        q /= 2;
        i++;
    }
    for (i = i -1; i >= 0; i--) {
        count += my_put_unsigned_int(out[i], 1);
    }
    return count;
}

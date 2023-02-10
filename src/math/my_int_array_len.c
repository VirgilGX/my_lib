/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_int_array_len
*/

#include "../include/my_lib_math.h"

size_t my_int_array_len(const int *arr, int eob)
{
    if (!arr)
        return 0;
    size_t len = 0;
    const int *ptr = arr;
    while (*ptr != eob) {
        len++;
        ptr++;
    }
    return len;
}

/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_int_arr_len
*/

#include "../include/my_lib_array.h"

size_t my_int_arr_len(int *arr, int eob)
{
    size_t count = 0;
    if (!arr)
        return -1;
    while (*arr != eob) {
        count++;
        arr++;
    }
    return count;
}

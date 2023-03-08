/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_str_arr_len
*/

#include "my_lib.h"

size_t my_str_arr_len(char **array)
{
    size_t i = 0;
    while (array[i])
        i++;
    return i;
}

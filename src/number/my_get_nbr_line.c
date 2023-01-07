/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_get_nbr_line
*/

#include "../include/my_lib_number.h"

int my_get_nbr_line(const char *str, size_t i)
{
    size_t count = 0;
    const char *ptr = str;
    while (*ptr != 0 && i != count) {
        if (*ptr == ' ') {
            count++;
        }
        ptr++;
    }
    return my_get_nbr(ptr);
}

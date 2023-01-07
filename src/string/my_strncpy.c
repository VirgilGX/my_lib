/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_strcpy
*/

#include "../include/my_lib_string.h"

char *my_strncpy(char *restrict dest, const char *restrict src, size_t n)
{
    size_t i = 0;
    if (!dest || !src) {
        return NULL;
    }
    while (*src != 0 && i < n) {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    while (i < n) {
        *dest = 0;
        dest++;
        i++;
    }
    *dest = 0;
    return dest;
}

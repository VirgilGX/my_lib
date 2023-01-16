/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_memcpy
*/

#include "../include/my_lib_memory.h"

void *my_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    if (!dest || !src) return NULL;
    unsigned char *d = dest;
    const unsigned char *s = src;
    size_t i = 0;
    while (i < n) {
        *d = *s;
        d++;
        s++;
        i++;
    }
    return dest;
}

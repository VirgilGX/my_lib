/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_memset
*/

#include "../include/my_lib_memory.h"

/**
 * Fills a block of memory with a given value.
 *
 * @param s      Pointer to the memory block to fill.
 * @param c      Value to use for filling the memory block.
 * @param n      Size of the memory block in bytes.
 * @return       Pointer to the filled memory block or NULL if error.
 */
void *my_memset(void *s, int c, size_t n)
{
    if (!s) {
        return NULL;
    }
    unsigned char *p = s;
    while (n--) {
        *p++ = (unsigned char) c;
    }
    return s;
}

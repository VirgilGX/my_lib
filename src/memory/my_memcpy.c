/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_memcpy
*/

#include "../include/my_lib_memory.h"

void core_memcpy_u(unsigned char *d, const unsigned char *s, size_t n, size_t i)
{
    while (i < n) {
        *d = *s;
        d--;
        s--;
        i++;
    }
}

void core_memcpy_o(unsigned char *d, const unsigned char *s, size_t n, size_t i)
{
    while (i < n) {
        *d = *s;
        d++;
        s++;
        i++;
    }
}

/**
 * Copies the specified number of bytes from
 * the source memory area to the destination memory area.
 * The two memory areas must not overlap.
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area,
 * or NULL if an error occurred.
 */
void *my_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    size_t i = 0;
    if (!dest || !src)
        return NULL;
    if (dest > src && (unsigned char*)dest < (unsigned char*)src + n) {
        s += n - 1;
        d += n - 1;
        core_memcpy_u(d, s, n, i);
    } else if (src > dest && (unsigned char*)src < (unsigned char*)dest + n) {
        core_memcpy_o(d, s, n, i);
    } else {
        while (i < n) {
            *d = *s;
            d++;
            s++;
            i++;
        }
    }
    return dest;
}

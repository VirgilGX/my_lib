/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_strcat
*/

#include "../include/my_lib_string.h"

/**
 * my_strcat - Concatenate two strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * @returns: a pointer to the destination string, or `NULL` if either `dest` or
 * `src` is `NULL`
 *
 * This function concatenates the source string `src` to the end of the
 * destination string `dest`. The resulting string is null-terminated. If either
 * `dest` or `src` is `NULL`, the function returns `NULL`.
 */
char *my_strcat(char *restrict dest, const char *restrict src)
{
    size_t dest_len = 0, i = 0;
    if (!dest || !src)
        return NULL;
    dest_len = my_strlen(dest);
    while (i < my_strlen(src)) {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = 0;
    return dest;
}

/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_strndup
*/

#include "../include/my_lib_string.h"

/**
 * Duplicates a string of a given length.
 *
 * @param const char *s The string to duplicate.
 * @param size_t n The length of the string to duplicate.
 * @return char * The duplicated string.
 *
 * @example
 * char *duplicated_string = my_strndup("Hello, World!", 5);
 * // duplicates "Hello"
 *
 * @note
 * If s is NULL, the function returns NULL.
 * The returned string must be deallocated with free().
 */
char *my_strndup(const char *s, size_t n)
{
    size_t len = 0;
    char *new = NULL;
    if (!s) {
        return NULL;
    }
    len = my_strnlen(s, n);
    new = malloc(len + 1);
    if (!new) {
        return NULL;
    }
    new[len] = 0;
    return (char *) my_memcpy(new, s, len);
}

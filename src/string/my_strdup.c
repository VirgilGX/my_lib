/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_strdup
*/

#include "../include/my_lib_string.h"

/**
 * Duplicates a string.
 *
 * @param const char *s The string to duplicate.
 * @return char * The duplicated string.
 *
 * @example
 * char *duplicated_string = my_strdup("Hello, World!");
 *
 * @note
 * If s is NULL, the function returns NULL.
 * The returned string must be deallocated with free().
 */
char *my_strdup(const char *s)
{
    size_t len = 0;
    void *new = NULL;
    if (!s) {
        return NULL;
    }
    len = my_strlen(s) + 1;
    new = malloc(len);
    if (!new) {
        return NULL;
    }
    return (char *) my_memcpy(new, s, len);
}

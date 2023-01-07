/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strcomb
*/

#include "../include/my_lib_string.h"

/**
 * Concatenates two strings and returns the result as a new string.
 * @param s1 The first string.
 * @param s2 The second string.
 * @return The concatenated string, or NULL if an error occurred.
 */
char *my_strcomb(const char *s1, const char *s2)
{
    size_t i = 0, j = 0;
    char *new_str = NULL;
    if (!s1 || !s2)
        return NULL;
    new_str = malloc((my_strlen(s1) + my_strlen(s2) + 1));
    if (!new_str)
        return NULL;
    while (s1[i] != 0) {
        new_str[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i] != 0) {
        new_str[j] = s2[i];
        i++;
        j++;
    }
    new_str[j] = 0;
    return new_str;
}

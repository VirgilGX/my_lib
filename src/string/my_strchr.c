/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strchr
*/

#include "../include/my_lib_string.h"

/**
 * my_strchr - finds the first occurence of a character in a string
 * @s: pointer to a string
 * @c: character to search for in the string
 *
 * Returns a pointer to the first occurence of the character in the string.
 * If the character is not found, the function returns NULL.
 */
char *my_strchr(const char *s, int c)
{
    const char *str = NULL;
    if (!s)
        return NULL;
    str = s;
    while (*str != 0) {
        if (*str == c) {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strtok
*/

#include "../include/my_lib_string.h"

/**
 * my_strtok - breaks a string into a series of tokens
 * @str: pointer to a string to be tokenized
 * @delim: set of characters that serve as separators for the tokens
 *
 * Returns a pointer to the next token in the string. If `str` or `delim`
 * are NULL or if there are no more tokens in the string, the function
 * returns NULL.
 */
char *my_strtok(char *restrict str, const char *restrict delim)
{
    static char *p = 0;
    if (!str || !*str || !delim || !*delim) {
        return NULL;
    }
    p = str;
    str = p + my_strspn(p, delim);
    p = str + my_strcspn(str, delim);
    if (p == str) {
        return p = 0;
    }
    p = *p ? *p = 0, p + 1 : 0;
    return str;
}

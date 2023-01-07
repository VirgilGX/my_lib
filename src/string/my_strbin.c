/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strbin
*/

#include "../include/my_lib_string.h"

/**
 * my_strbin - Convert a string to a binary string
 *
 * @str: the string to convert
 *
 * @returns: a pointer to the binary string, or `NULL` if the input string is
 * `NULL` or the allocation fails
 *
 * This function converts a string to a binary string, where each character in
 * the input string is represented as a sequence of 8 binary digits (bits). If
 * the input string is `NULL`, the function returns `NULL`.
 */
char *my_strbin(const char *str)
{
    char *out = NULL;
    size_t i = 0;
    int j = 7;
    if (!str)
        return NULL;
    out = malloc(my_strlen(str) * 8 + 1);
    if (!out)
        return NULL;
    out[0] = 0;
    while (i < my_strlen(str)) {
        char byte[9];
        byte[8] = 0;
        j = 7;
        while (j >= 0)
            byte[j] = (str[i] & (1 << (7 - j))) ? '1' : '0',
            --j;
        my_strcat(out, byte);
        i++;
    }
    return out;
}

/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_binstr
*/

#include "../include/my_lib_string.h"

/**
 * my_binstr - Convert a binary string to a string
 *
 * @str: the binary string to convert
 *
 * @returns: a pointer to the converted string, or `NULL` if the input string is
 * `NULL` or the allocation fails
 *
 * This function converts a binary string to a string, where each sequence of 8
 * binary digits (bits) in the input string is interpreted as a character. If
 * the input string is `NULL`, the function returns `NULL`.
 */
char *my_binstr(const char *str)
{
    char *out = malloc(my_strlen(str) / 8 + 1);
    if (!out)
        return NULL;
    int i = 0;
    while (i < my_strlen(str)) {
        char byte[9];
        my_strncpy(byte, str + i, 8);
        byte[8] = 0;
        int j = 0;
        int sum = 0;
        while (j < 8) {
            sum += (byte[j] == '1') ? (1 << (7 - j)) : 0;
            j++;
        }
        out[i / 8] = (char) sum;
        i += 8;
    }
    out[i / 8] = 0;
    return out;
}

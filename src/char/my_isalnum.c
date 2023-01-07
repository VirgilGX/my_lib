/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_isalnum
*/

#include "../include/my_lib_char.h"

/**
 * Check if a character is alphanumeric.
 *
 * @param c The character to check.
 * @returns
 *   2 if c is a digit (0-9).
 *   3 if c is an alphabetic character (A-Z or a-z).
 *   0 if c is not alphanumeric.
 */
int my_isalnum(int c)
{
    if (c >= '0' && c <= '9') {
        return 2;
    } else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 3;
    } else {
        return 0;
    }
}

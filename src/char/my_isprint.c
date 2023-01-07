/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_isprint
*/

#include "../include/my_lib_char.h"

/**
 * Checks if a character is printable
 *
 * This function checks if the character c is printable
 * by checking if its ASCII value is between 32 and 126.
 *
 * @param c The character to check.
 * @returns
 *   1 if c is printable.
 *   0 otherwise.
 */
int my_isprint(int c)
{
    return c >= 32 && c <= 126;
}

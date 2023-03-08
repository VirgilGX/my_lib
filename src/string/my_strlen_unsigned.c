/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strlen_unsigned
*/

#include "my_lib.h"

size_t my_strlen_unsigned(const unsigned char *s)
{
    size_t count = 0;
    if (s != NULL) {
        while (*s != 0) {
            count++;
            s++;
        }
    }
    return count;
}

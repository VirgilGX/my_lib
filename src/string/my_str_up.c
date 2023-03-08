/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_str_up
*/

#include "my_lib.h"

char *my_str_up(char *str)
{
    char *ptr = NULL;
    if (!str)
        return (NULL);
    ptr = str;
    while (*ptr) {
        if (*ptr >= 'a' && *ptr <= 'z')
            *ptr -= 32;
        ptr++;
    }
    return (str);
}

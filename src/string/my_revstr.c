/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_revstr
*/

#include "../include/my_lib_string.h"

char * my_revstr(char *str)
{
    size_t i = 0, j = my_strlen(str) - 1;
    char tmp;
    while (i < j) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return str;
}

/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strpbrk
*/

#include "my_lib.h"

char *my_strpbrk(char *str, char *accept)
{
    size_t i = 0, k = 0;
    for (i = 0; str[i] != '\0' && k == 0; i++) {
        for (size_t j = 0; accept[j] != '\0' && k == 0; j++) {
            (str[i] == accept[j]) ? k = 1 : 0;
        }
    }
    return (k == 1) ? (&str[i]) : NULL;
}

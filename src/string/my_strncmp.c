/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strncmp
*/

#include "my_lib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    while (s1[i] && s2[i] && i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

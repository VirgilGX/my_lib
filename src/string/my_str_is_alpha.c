/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_str_is_alpha
*/

#include "my_lib.h"

bool my_str_isalpha(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (my_isalpha(str[i]) == false)
            return (false);
    }
    return (true);
}

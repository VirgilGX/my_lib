/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_str_arr_dup
*/

#include "my_lib.h"

char **my_str_arr_dup(char **arr)
{
    if (!arr)
        return (NULL);
    size_t arr_len = my_str_arr_len(arr);
    char **dup = malloc(sizeof(char *) * (arr_len + 1));
    if (!dup)
        return (NULL);
    for (size_t i = 0; i < arr_len; i++) {
        dup[i] = my_strdup(arr[i]);
        if (!dup[i])
            return (NULL);
    }
    dup[arr_len] = NULL;
    return (dup);
}

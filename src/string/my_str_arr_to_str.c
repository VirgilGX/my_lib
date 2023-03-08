/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_str_arr_to_str
*/

#include "my_lib.h"

size_t get_new_len(const char **array)
{
    size_t len = 1;
    for (size_t i = 0; array[i] != NULL; i++)
        len += (my_strlen(array[i]) + 1);
    return (len);
}

char *my_str_arr_to_str(const char **array, const char sep)
{
    size_t new_size = get_new_len(array);
    char *str = malloc(new_size);
    if (!str) return (NULL);
    for (size_t i = 0, j = 0; array[i] != NULL; i++) {
        for (size_t k = 0; array[i][k] != '\0'; k++, j++) {
            str[j] = array[i][k];
            str[++j] = sep;
        }
    }
    str[new_size] = '\0';
    return (str);
}

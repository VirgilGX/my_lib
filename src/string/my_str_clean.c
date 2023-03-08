/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_str_clean
*/

#include "my_lib.h"

size_t skip_pattern(const char *str, size_t i, bool (*is_delim)(char))
{
    bool is_delim_char = false;
    while (str[i] != '\0' && is_delim(str[i]) == true) {
        i++;
        is_delim_char = true;
    }
    return (is_delim_char == true) ? i - 1 : i;
}

char *my_str_clean(char *str, const char c, bool (*is_delim)(char))
{
    char *clean_str = NULL;
    size_t i = 0, j = 0, len = 0;
    if (!str) return (NULL);
    len = my_strlen(str);
    clean_str = malloc(sizeof(char) * (len + 1));
    if (!clean_str) return (NULL);
    while (str[i] != '\0' && is_delim(str[i]) == true)
        i++;
    while (str[i] != '\0') {
        if (is_delim(str[i]) == false)
            clean_str[j++] = str[i];
        else
            clean_str[j++] = c, i = skip_pattern(str, i, is_delim);
        i++;
    }
    clean_str[j] = '\0';
    my_free((char *)str);
    return (clean_str);
}

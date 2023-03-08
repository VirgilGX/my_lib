/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_str_to_word_array
*/

#include "my_lib.h"

bool standard_delim(char c)
{
    return (my_isprint(c) == 0) ? (true) : (false);
}

size_t get_words_number(char const *str, bool (*delim)(char))
{
    size_t count = 0;
    const char *i = str;
    while (*i != 0) {
        if (!delim(*i)) {
            count++;
        }
        while (*i != 0 && !delim(*i)) {
            i++;
        }
        if (*i != 0) {
            i++;
        }
    }
    return count;
}

char **fill_array(char **array, const char *str, size_t word_count,
bool (*delim)(char))
{
    size_t word_size = 0, j = 0;
    const char *i = str;
    while (j < word_count) {
        while (*i != 0 && !delim(*i)) {
            word_size++;
            i++;
        }
        array[j] = my_strndup(i - word_size, word_size);
        if (!array[j]) {
            my_free_word_array(array);
            return NULL;
        }
        word_size = 0;
        j++;
        while (*i && delim(*i)) {
            i++;
        }
    }
    array[j] = NULL;
    return array;
}

char **my_str_to_word_array(char const *str, bool (*delim)(char))
{
    char **word_array = NULL;
    size_t word_count = 0;
    if (!str)
        return NULL;
    if (!delim)
        delim = &standard_delim;
    word_count = get_words_number(str, delim);
    word_array = malloc((word_count + 1) * sizeof(char *));
    if (!word_array) {
        return NULL;
    }
    word_array = fill_array(word_array, str, word_count, delim);
    return word_array;
}

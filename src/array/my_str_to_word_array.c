/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_str_to_word_array
*/

#include "../include/my_lib_array.h"

size_t get_words_number(char const *str)
{
    size_t count = 0;
    const char *i = str;
    while (*i != 0) {
        if (my_isprint(*i)) {
            count++;
        }
        while (*i != 0 && my_isprint(*i)) {
            i++;
        }
        if (*i != 0) {
            i++;
        }
    }
    return count;
}

char **fill_array(char **array, const char *str, size_t word_count)
{
    size_t word_size = 0, j = 0;
    const char *i = str;
    while (j < word_count) {
        while (*i != 0 && my_isprint(*i)) {
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
        while (*i && !my_isprint(*i)) {
            i++;
        }
    }
    array[j] = NULL;
    return array;
}

/**
 * Converts a given string into an array of words.
 *
 * @param str The string to be converted.
 *
 * @return A null-terminated array of words, or NULL if an error occurred.
 *     The caller is responsible for freeing the memory allocated
 *     for the array and its elements.
 */
char **my_str_to_word_array(char const *str)
{
    char **word_array = NULL;
    size_t word_count = 0;
    if (!str) {
        return NULL;
    }
    word_count = get_words_number(str);
    word_array = malloc((word_count + 1) * sizeof(char *));
    if (!word_array) {
        return NULL;
    }
    word_array = fill_array(word_array, str, word_count);
    free((char *)str);
    return word_array;
}

/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_free_word_array
*/

#include "../include/my_lib_array.h"

/**
 * Frees the memory allocated for an array of words
 * and the memory allocated for each word.
 *
 * @param word_array The array to be freed.
 * If the value is NULL, the function does nothing.
 */
void my_free_word_array(char **word_array)
{
    size_t i = 0;
    if (!word_array) {
        return;
    }
    while (word_array[i] != NULL) {
        free(word_array[i]);
        ++i;
    }
    free(word_array);
}

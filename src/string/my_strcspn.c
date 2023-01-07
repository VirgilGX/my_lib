/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strcspn
*/

#include "../include/my_lib_string.h"

/**
 * my_strcspn - returns the length of the initial segment of a string
 *              that consists entirely of characters not in the reject set
 * @s: pointer to a string
 * @reject: set of characters to reject
 *
 * Returns the length of the initial segment of `s` that consists entirely
 * of characters not in the `reject` set. If `s` is NULL, the function
 * returns 0.
 */
size_t my_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    if (!s) {
        return 0;
    }
    while (s[i] != 0) {
        if (my_strchr(reject, s[i])) {
            break;
        }
        i++;
    }
    return i;
}

/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strspn
*/

#include "../include/my_lib_string.h"

/**
 * my_strspn - returns the length of the initial segment of a string
 *             that consists entirely of characters in the accept set
 * @str: pointer to a string
 * @accept: set of characters to accept
 *
 * Returns the length of the initial segment of `str` that consists entirely
 * of characters in the `accept` set.
 * If `str` or `accept` are NULL, the function returns 0.
 */
size_t my_strspn(const char* str, const char* accept)
{
    const char *ptr = NULL;
    size_t count = 0;
    if (!str || !accept) {
        return 0;
    }
    ptr = str;
    while (*ptr && my_strchr(accept, *ptr++)) {
        ++count;
    }
    return count;
}

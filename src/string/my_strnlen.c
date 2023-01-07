/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_strnlen
*/

#include "../include/my_lib_string.h"

/*
*   Returns the number of bytes in the string pointed to by s,
*   excluding the terminating null byte ('\0'), but at most maxlen.
*   Returns 0 if the string is invalid.
*/
size_t my_strnlen(const char *s, size_t maxlen)
{
    size_t count = 0;
    if (s || *s != 0) {
        while (*s != 0 && count < maxlen) {
            count++;
            s++;
        }
    }
    return count;
}

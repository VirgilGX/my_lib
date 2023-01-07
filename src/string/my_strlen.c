/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_strlen
*/

#include "../include/my_lib_string.h"

/*
*   Returns the length of the char *s passed in parameter.
*   Returns 0 if the string is invalid.
*/
size_t my_strlen(const char *s)
{
    size_t count = 0;
    if (s != NULL) {
        while (*s != 0) {
            count++;
            s++;
        }
    }
    return count;
}

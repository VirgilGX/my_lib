/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_strcpy
*/

#include "../include/my_lib_string.h"

/*
*   Copy the content of src string to dest string.
*   Returns a pointer to dest or NULL in case of error.
*/
char *my_strcpy(char *restrict dest, const char *restrict src)
{
    char *p_dest = NULL;
    const char *p_src = NULL;
    if (!dest || !src) {
        return NULL;
    }
    p_dest = dest;
    p_src = src;
    while (*p_src != 0) {
        *p_dest = *p_src;
        p_dest++;
        p_src++;
    }
    *p_dest = 0;
    return dest;
}

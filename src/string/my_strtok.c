/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_strtok
*/

#include "my_lib.h"

/**
 * my_strtok - breaks a string into a series of tokens
 * @str: pointer to a string to be tokenized
 * @delim: set of characters that serve as separators for the tokens
 *
 * Returns a pointer to the next token in the string. If `str` or `delim`
 * are NULL or if there are no more tokens in the string, the function
 * returns NULL.
 */
char *my_strtok(char *str, const char *delim)
{
    static char *last = NULL;
    char *token = NULL;
    if (str == NULL)
        str = last;
    if (str == NULL)
        return (NULL);
    str += my_strspn(str, (char *)delim);
    if (*str == '\0')
        return (NULL);
    token = str;
    str = my_strpbrk(str, (char *)delim);
    if (str == NULL)
        last = NULL;
    else {
        *str = '\0';
        last = str + 1;
    }
    return (token);
}

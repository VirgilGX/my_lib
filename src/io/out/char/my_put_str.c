/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_put_str
*/

#include "../../../include/my_lib.h"

/**
 * Writes a specified string to specified output.
 *
 * @param s      Value to print.
 * @param fd     Value of the file descriptor used as output
 * @return       Number of characters written or -1 in case of error.
 */
ssize_t my_put_str(const char *s, int fd)
{
    size_t i = 0;
    ssize_t len = 0;
    if (!s) {
        return -1;
    }
    while (s[i] != '\0') {
        len += write(fd, &s[i], 1);
        i++;
    }
    return len;
}

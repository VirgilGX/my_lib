/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_put_char
*/

#include "../../../include/my_lib.h"

/**
 * Writes a specified char to specified output.
 *
 * @param c      Value to print.
 * @param fd     Value of the file descriptor used as output
 * @return       Number of characters written or -1 in case of error.
 */
ssize_t my_put_char(unsigned char c, int fd)
{
    return write(1, &c, 1);
}

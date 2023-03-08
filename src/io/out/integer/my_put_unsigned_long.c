/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_put_unsigned_long
*/

#include "my_lib.h"

/**
 * Writes a specified unsigned long to specified output.
 *
 * @param nbr    Value to print.
 * @param fd     Value of the file descriptor used as output.
 * @return       Number of characters written or -1 in case of error.
 */
ssize_t my_put_unsigned_long(unsigned long nbr, int fd)
{
    char c = 0;
    ssize_t len = 0;
    if (nbr < 10) {
        c = nbr + 48;
        len += write(fd, &c, 1);
    } else {
        len += my_put_unsigned_long(nbr / 10, fd);
        c = nbr % 10 + 48;
        len += write(fd, &c, 1);
    }
    return len;
}

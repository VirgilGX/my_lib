/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_put_double
*/

#include "../../../include/my_lib.h"

/**
 * Writes a specified double to specified output.
 *
 * @param nbr    Value to print.
 * @param dec    Value corresponding to the number of decimals to be written
 * @param fd     Value of the file descriptor used as output
 * @return       Number of characters written or -1 in case of error.
 */
ssize_t my_put_double(double nbr, int dec, int fd)
{
    size_t i = 0;
    ssize_t len = 0;
    int negative = (nbr < 0);
    if (negative) {
        len += write(fd, "-", 1);
        nbr = -nbr;
    }
    len += my_put_int((int)nbr, fd);
    if (dec > 0) {
        len += write(fd, ".", 1);
        double decimal = nbr - (int)nbr;
        while (i < dec) {
            decimal *= 10;
            i++;
        }
        len += my_put_int((int)decimal, fd);
    }
    return len;
}

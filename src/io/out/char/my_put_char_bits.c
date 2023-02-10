/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_put_char_bits
*/

#include "../../../include/my_lib_io.h"

ssize_t my_put_char_bits(unsigned char c, int fd)
{
    ssize_t count = 0;
    short i = 7;
    while (i >= 0) {
        char b = ((c >> i) & 1) ? '1' : '0';
        count += write(fd, &b, 1);
        i--;
    }
    return count;
}

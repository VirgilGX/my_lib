/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** Header of My_Lib
*/

#ifndef MY_LIB_IO
    #define MY_LIB_IO
    #include <unistd.h>
    #include <limits.h>
    #include "my_lib_array.h"
    #include "my_lib_math.h"
    #include "my_lib_number.h"
ssize_t my_put_bit(unsigned int nbr);
ssize_t my_put_char(unsigned char c, int fd);
ssize_t my_put_str(const char *s, int fd);
ssize_t my_put_int(int nbr, int fd);
ssize_t my_put_long_long(long long nbr, int fd);
ssize_t my_put_long(long nbr, int fd);
ssize_t my_put_short(short nbr, int fd);
ssize_t my_put_unsigned_int(unsigned int nbr, int fd);
ssize_t my_put_unsigned_long(unsigned long nbr, int fd);
ssize_t my_put_unsigned_short(unsigned short nbr, int fd);
ssize_t my_put_double(double nbr, int dec, int fd);
ssize_t my_put_float(float nbr, int dec, int fd);
ssize_t my_put_str_arr(char **arr, int fd);
ssize_t my_put_int_arr(int *arr, int eob, int fd);
ssize_t my_put_char_bits(unsigned char c, int fd);
#endif

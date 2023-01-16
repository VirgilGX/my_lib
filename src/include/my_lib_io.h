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
ssize_t my_put_arr(char **arr, int fd);
#endif

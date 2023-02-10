/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_put_int_arr
*/

#include "../../../include/my_lib_io.h"

ssize_t my_put_int_arr(int *arr, int eob, int fd)
{
    size_t count = 0;
    int *ptr = NULL;
    if (!arr || fd < 0)
        return -1;
    ptr = arr;
    while (*ptr != eob) {
        count += my_put_int(*ptr, fd);
        ptr++;
    }
    return count;
}

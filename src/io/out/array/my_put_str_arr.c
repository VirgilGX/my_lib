/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_put_str_arr
*/

#include "../../../include/my_lib.h"

ssize_t my_put_str_arr(char **arr, int fd)
{
    char cr = '\n';
    ssize_t count = 0;
    size_t i = 0;
    if (!arr)
        return -1;
    while (arr[i]) {
    count += write(fd, arr[i], my_strlen(arr[i]));
    i++;
        if (arr[i]) {
            count += write(fd, &cr, 1);
        }
    }
    return count;
}

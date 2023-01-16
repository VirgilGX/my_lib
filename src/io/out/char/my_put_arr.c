/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_put_arr
*/

#include "../../../include/my_lib.h"

ssize_t my_put_arr(char **arr, int fd)
{
    ssize_t count = 0;
    size_t i = 0, j = 0;
    if (!arr)
        return -1;
    while (arr[i]) {
        while (arr[i][j]) {
            count += write(fd, arr[i][j], 1);
            j++;
        }
        j = 0;
        i++;
    }
    return count;
}

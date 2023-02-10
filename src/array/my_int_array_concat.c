/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_int_array_concat
*/

#include "../include/my_lib_array.h"

int *my_int_array_concat(int *dest, int *src, int eob)
{
    size_t src_size = 0, dest_size = 0;
    if (!src) return NULL;
    src_size = my_int_arr_len(src, eob);
    if (dest == NULL) {
        dest = malloc(sizeof(int) * (src_size + 1));
        if (dest == NULL) return NULL;
        for (size_t i = 0; i < src_size; i++) dest[i] = src[i];
        dest[src_size] = eob;
        return dest;
    }
    dest_size = my_int_arr_len(dest, eob);
    dest = my_realloc(dest, sizeof(int) * (dest_size + src_size + 1));
    if (!dest) return NULL;
    for (size_t i = 0; i < src_size; i++) dest[dest_size + i] = src[i];
    dest[dest_size + src_size] = eob;
    free(src);
    return dest;
}

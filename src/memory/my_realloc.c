/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_realloc
*/

#include "my_lib.h"

/**
 * my_realloc - Reallocate memory
 *
 * @ptr: a pointer to the memory to reallocate
 * @size: the new size of the memory
 *
 * @returns: a pointer to the reallocated memory, or `NULL` if the allocation
 * fails
 *
 * This function reallocates memory to the specified size. If the `ptr` argument
 * is `NULL`, the function behaves like `malloc`. If the `size` argument is 0,
 * the function behaves like `free`.
 */
void *my_realloc(void *ptr, size_t new_size, size_t old_size)
{
    if (!ptr) {
        return malloc(new_size);
    }
    if (!new_size) {
        errno = EINVAL;
        return 0;
    }
    if (new_size <= old_size) {
        return ptr;
    }
    void *new = 0;
    if (new_size > old_size) {
        new = malloc(new_size);
        if (!new) {
            return 0;
        }
        my_memcpy(new, ptr, old_size);
        my_free(ptr);
    }
    return new;
}

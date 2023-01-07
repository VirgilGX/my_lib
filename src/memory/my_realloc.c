/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_realloc
*/

#include "../include/my_lib_memory.h"

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
void *my_realloc(void *ptr, size_t size)
{
    size_t copy_size = 0;
    void *new_ptr = NULL;
    if (!ptr) {
        return malloc(size);
    }
    if (size == 0) {
        free(ptr);
        return NULL;
    }
    new_ptr = malloc(size);
    if (!new_ptr) {
        return NULL;
    }
    copy_size = size;
    my_memcpy(new_ptr, ptr, copy_size);
    free(ptr);
    return new_ptr;
}

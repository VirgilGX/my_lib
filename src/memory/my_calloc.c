/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_calloc
*/

#include "../include/my_lib_memory.h"

/**
 * my_calloc - Allocate and zero-initialize memory
 *
 * @nmemb: the number of elements to allocate
 * @size: the size of each element
 *
 * @returns: a pointer to the allocated and zero-initialized memory, or `NULL`
 * if the allocation fails
 *
 * This function allocates memory for `nmemb` elements of `size` bytes each and
 * initializes the memory to zero. If the allocation fails, the function returns
 * `NULL`.
 */
void *my_calloc(size_t nmemb, size_t size)
{
    size_t total_size = nmemb * size;
    void *ptr = malloc(total_size);
    if (!ptr) {
        return NULL;
    }
    my_memset(ptr, 0, total_size);
    return ptr;
}

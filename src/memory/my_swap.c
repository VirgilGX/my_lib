/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_swap
*/

#include "../include/my_lib_memory.h"

/*
*   Interchange 2 values passed in parameter using their size.
*   Returns 0 if everything went well, -1 in case of error.
*/
int my_swap(void *p1, void *p2, size_t size)
{
    void *temp = NULL;
    if (!p1 || !p2) {
        return -1;
    }
    temp = malloc(size);
    if (!temp) {
        return -1;
    }
    my_memcpy(temp, p1, size);
    my_memcpy(p1, p2, size);
    my_memcpy(p2, temp, size);
    free(temp);
    return 0;
}

/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_free
*/

#include "../include/my_lib_memory.h"

void my_free(void *ptr)
{
    if (ptr == NULL)
        return;
    free(ptr);
}
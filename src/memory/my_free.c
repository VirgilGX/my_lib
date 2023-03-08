/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_free
*/

#include "my_lib.h"

void my_free(void *ptr)
{
    if (ptr == NULL || my_isstack(ptr) == true)
        return;
    free(ptr);
}
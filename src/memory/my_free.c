/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_free
*/

#include "my_lib.h"

void my_free(void *ptr)
{
    if (ptr == NULL)
        return;
    free(ptr);
}
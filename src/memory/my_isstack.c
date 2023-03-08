/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_isstack
*/

#include "my_lib.h"

bool my_isstack(void *ptr)
{
    int stack_ptr = 0;
    uintptr_t stack_addr = (uintptr_t)&stack_ptr;
    uintptr_t ptr_addr = (uintptr_t)ptr;
    return ptr_addr > stack_addr ? true : false;
}

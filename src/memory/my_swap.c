/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_swap
*/

#include "../include/my_lib_memory.h"

/**
 * @brief Swaps the values of two generic pointers
 *
 * @param a Pointer to the first pointer
 * @param b Pointer to the second pointer
 */
void my_swap(void **a, void **b)
{
    void *tmp = *a;
    *a = *b;
    *b = tmp;
}

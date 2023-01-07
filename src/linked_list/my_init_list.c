/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_init_list
*/

#include "../include/my_lib_linked_list.h"

/**
 * my_init_list - Initialize a new linked list
 *
 * @returns: a pointer to the newly initialized linked list, or NULL if the
 * allocation fails
 */
list_s *my_init_list(void)
{
    list_s *list = malloc(sizeof(list_s));
    if (!list) {
        return NULL;
    }
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

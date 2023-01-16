/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_remove_last_list
*/

#include "../include/my_lib_linked_list.h"

/**
 * my_remove_last_list - Remove the last element from a linked list
 *
 * @list: the list to remove from
 *
 * This function removes the last element from the linked list. If the list is
 * `NULL` or the list is empty, the function simply returns without doing
 * anything.
 */
void my_remove_last_list(list_t *list)
{
    node_t *curr;
    if (!list || !list->tail) {
        return;
    }
    curr = list->tail;
    list->tail = curr->prev;
    if (!list->tail) {
        list->head = NULL;
    } else {
        list->tail->next = NULL;
    }
    free(curr);
    list->size--;
}

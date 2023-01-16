/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_remove_first_list
*/

#include "../include/my_lib_linked_list.h"

/**
 * my_remove_first_list - Remove the first element from a linked list
 *
 * @list: the list to remove from
 *
 * This function removes the first element from the linked list. If the list is
 * `NULL` or the list is empty, the function simply returns without doing
 * anything.
 */
void my_remove_first_list(list_t *list)
{
    node_t *curr;
    if (!list || !list->head) {
        return;
    }
    curr = list->head;
    list->head = curr->next;
    if (!list->head) {
        list->tail = NULL;
    } else {
        list->head->prev = NULL;
    }
    free(curr);
    list->size--;
}

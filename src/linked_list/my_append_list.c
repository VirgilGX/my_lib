/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_append_list
*/

#include "../include/my_lib_linked_list.h"

/**
 * my_append_list - Append an element to a linked list
 *
 * @list: the list to append to
 * @data: the data to append to the list
 *
 * This function appends an element to the linked list, with the data specified
 * by the `data` argument. If the list is `NULL` or the data is `NULL`, the
 * function simply returns without doing anything.
 */
void my_append_list(list_t *list, void *data)
{
    node_t *new_node = NULL;
    if (!list || !data) {
        return;
    }
    new_node = malloc(sizeof(node_t));
    if (!new_node) {
        return;
    }
    new_node->prev = list->tail;
    new_node->next = NULL;
    new_node->data = data;
    if (list->tail) {
        list->tail->next = new_node;
    }
    list->tail = new_node;
    if (!list->head) {
        list->head = new_node;
    }
    list->size++;
}

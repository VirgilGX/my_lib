/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_prepend_list
*/

#include "../include/my_lib_linked_list.h"

/**
 * my_prepend_list - Prepend an element to a linked list
 *
 * @list: the list to prepend to
 * @data: the data to prepend to the list
 *
 * This function prepends an element to the linked list, with the data specified
 * by the `data` argument. If the list is `NULL` or the data is `NULL`, the
 * function simply returns without doing anything.
 */
void my_prepend_list(list_t *list, void *data)
{
    node_t *new_node = NULL;
    if (!list || !data) {
        return;
    }
    new_node = malloc(sizeof(node_t));
    if (!new_node) {
        return;
    }
    new_node->prev = NULL;
    new_node->next = list->head;
    new_node->data = data;
    if (list->head) {
        list->head->prev = new_node;
    }
    list->head = new_node;
    if (!list->tail) {
        list->tail = new_node;
    }
    list->size++;
}

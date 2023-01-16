/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_add_list
*/

#include "../include/my_lib_linked_list.h"

void core_add_at_index_list(list_t *list, void *data, size_t index)
{
    size_t i = 0;
    node_t *curr = NULL, *new_node = malloc(sizeof(node_t));
    if (!new_node) {
        return;
    }
    new_node->data = data;
    while (i < index - 1) {
        curr = curr->next;
        i++;
    }
    new_node->prev = curr;
    new_node->next = curr->next;
    curr->next->prev = new_node;
    curr->next = new_node;
    list->size++;
}

/**
 * my_add_list - Add an element to a linked list at a specified index
 *
 * @list: the list to add to
 * @data: the data to add to the list
 * @index: the index at which to add the element
 *
 * This function adds an element to the linked list at the specified index, with
 * the data specified by the `data` argument. If the list is `NULL`, the data is
 * `NULL`, or the index is invalid, the function simply returns without doing
 * anything.
 */
void my_add_list(list_t *list, void *data, size_t index)
{
    if (!list || !data || index < 0 || index > list->size) {
        return;
    }
    if (index == 0) {
        my_prepend_list(list, data);
        return;
    } else if (index == list->size) {
        my_append_list(list, data);
        return;
    } else {
        core_add_at_index_list(list, data, index);
    }
}

/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_remove_list
*/

#include "../include/my_lib_linked_list.h"

void my_remove_list(list_t *list, size_t index)
{
    size_t i = 0;
    node_t *curr;
    if (!list || !list->head || index >= list->size)
        return;
    if (index == 0) {
        my_remove_first_list(list);
        return;
    }
    if (index == list->size - 1) {
        my_remove_last_list(list);
        return;
    }
    curr = list->head;
    while (i < index)
        curr = curr->next,
        i++;
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    free(curr);
    list->size--;
}

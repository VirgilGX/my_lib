/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_destroy_list
*/

#include "../include/my_lib_linked_list.h"

/**
 * my_destroy_list - Destroy a linked list
 *
 * @list: the list to destroy
 *
 * This function frees all the memory associated with the linked list, including
 * the data contained in each node and the list itself.
 */
void my_destroy_list(list_t *list)
{
    node_t *curr = NULL, *next = NULL;
    if (!list) {
        return;
    }
    curr = list->head;
    while (curr) {
        next = curr->next;
        if (curr->data) {
            free(curr->data);
        }
        free(curr);
        curr = next;
    }
    free(list);
}

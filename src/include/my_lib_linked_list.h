/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** Header of My_Lib
*/

#ifndef MY_LIB_LINKED_LIST
    #define MY_LIB_LINKED_LIST
    #include <stddef.h>
    #include <stdlib.h>
    #include <stdbool.h>
typedef struct node {
    struct node *prev;
    struct node *next;
    void *data;
} node_s;
typedef struct list {
    node_s *head;
    node_s *tail;
    size_t size;
} list_s;
list_s *my_init_list(void);
void my_destroy_list(list_s *list);
void my_prepend_list(list_s *list, void *data);
void my_append_list(list_s *list, void *data);
void my_add_list(list_s *list, void *data, size_t index);
void my_remove_first_list(list_s *list);
void my_remove_last_list(list_s *list);
#endif

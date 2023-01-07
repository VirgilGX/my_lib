/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** Header of My_Lib
*/

#ifndef MY_LIB_MEMORY
    #define MY_LIB_MEMORY
    #include <stdlib.h>
int my_swap(void *p1, void *p2, size_t size);
void *my_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *my_memset(void *s, int c, size_t n);
void *my_realloc(void *ptr, size_t size);
void *my_calloc(size_t nmemb, size_t size);
#endif

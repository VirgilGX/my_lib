/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_lib_debug
*/

#ifndef MY_LIB_DEBUG
    #define MY_LIB_DEBUG
    #include <stdlib.h>
    #include <malloc.h>
    #include "my_lib_io.h"
    #include "my_lib_const.h"
int my_put_err(const char *s, int code);
int my_put_warn(const char *s, int code);
void my_put_allocated_memory(void);
#endif

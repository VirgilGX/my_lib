/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_put_err
*/

#include "../include/my_lib_debug.h"

int my_put_err(const char *s, int code)
{
    if (!s)
        return -1;
    my_put_str(RED, 2);
    my_put_str(s, 2);
    my_put_char('\n', 2);
    my_put_str(COLOR_RESET, 2);
    return code;
}

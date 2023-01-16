/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_put_warn
*/

#include "../include/my_lib_debug.h"

int my_put_warn(const char *s, int code)
{
    if (!s)
        return -1;
    my_put_str(BHYEL, 1);
    my_put_str(s, 1);
    my_put_char('\n', 1);
    my_put_str(COLOR_RESET, 1);
    return code;
}

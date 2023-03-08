/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_isalpha
*/

#include "my_lib.h"

int my_isalpha(int c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

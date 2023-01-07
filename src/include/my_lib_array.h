/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** Header of My_Lib
*/

#ifndef MY_LIB_ARRAY
    #define MY_LIB_ARRAY
    #include <stdlib.h>
    #include "my_lib_string.h"
    #include "my_lib_char.h"
char **my_str_to_word_array(char const *str);
void my_free_word_array(char **word_array);
#endif

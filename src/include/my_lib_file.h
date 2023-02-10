/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** Header of My_Lib
*/

#ifndef MY_LIB_FILE
    #define MY_LIB_FILE
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include "my_lib_debug.h"
char **my_load_file_to_line_array(const char *filepath);
unsigned char *my_load_file(const char *filepath);
#endif

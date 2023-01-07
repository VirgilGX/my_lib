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
unsigned char *my_load_file(const char *filepath);
#endif

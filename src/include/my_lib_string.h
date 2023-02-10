/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** Header of My_Lib
*/

#ifndef MY_LIB_STRING
    #define MY_LIB_STRING
    #include <stddef.h>
    #include <stdlib.h>
    #include "my_lib_memory.h"
size_t my_strlen(const char *s);
size_t my_strnlen(const char *s, size_t maxlen);
char *my_strcat(char *restrict dest, const char *restrict src);
char *my_strcpy(char *restrict dest, const char *restrict src);
char *my_strncpy(char *restrict dest, const char *restrict src, size_t n);
char *my_strdup(const char *s);
char *my_strndup(const char *s, size_t n);
int my_strcmp(const char *s1, const char *s2);
char *my_strbin(const char *str);
char *my_binstr(const char *str);
size_t my_strspn(const char *s, const char *accept);
char *my_strtok(char *restrict str, const char *restrict delim);
size_t my_strcspn(const char *s, const char *reject);
char *my_strchr(const char *s, int c);
char * my_revstr(char *str);
#endif

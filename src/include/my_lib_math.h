/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** Header of My_Lib
*/

#ifndef MY_LIB_MATH
    #define MY_LIB_MATH
    #include <stddef.h>
    #include <limits.h>
    #include "my_lib_memory.h"
void my_sort_int_array(int *array, int size);
int my_compute_factorial(int nbr);
int my_compute_power(int nbr, int p);
double my_compute_square_root(double nbr);
int my_is_prime(int nbr);
size_t my_int_array_len(const int *arr, int eob);
#endif

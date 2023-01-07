/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_sort_int_array
*/

#include "../include/my_lib_math.h"

/*
*   Sorts an array of int array in ascending order using its size
*/
void my_sort_int_array(int *array, int size)
{
    size_t i = 0, j = 0;
    while (i < size) {
        j = 0;
        while (j < size - i - 1) {
            (array[j] > array[j + 1]) ?
            my_swap(&array[j], &array[j + 1], sizeof(int)) : 0;
            j++;
        }
        i++;
    }
}

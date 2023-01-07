/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_get_nbr
*/

#include "../include/my_lib_number.h"

/*
*   Returns the first number found in the string passed in parameter.
*   Returns 0 in case of anomaly or if the number does not fit in an int.
*/
int my_get_nbr(const char *s)
{
    long long value = 0, sign = 1, l = 0, out = 0;
    if (!s || *s == '\0')
        return 0;
    while ((*s < 48 || *s > 57) && *s != '+' && *s != '-' && *s != 0)
        s++;
    while (((*s >= 48 && *s <= 57) || *s == '+' || *s == '-') && *s != 0 &&
    out == 0) {
        if ((*s == '+' || *s == '-') && (l < 48 || l > 57)) {
            sign = (*s == '+') ? 1 : -1;
        }
        if (*s != '+' && *s != '-')
            value = value * 10 + (*s - '0'),
            (value > INT_MAX / 10) ? out++ : 0,
            (value < 0) ? out++ : 0;
        l = *s;
        s++;
    }
    if ((*s == 0 && value == 0) || out != 0)
        return 0;
    return (int)value * sign;
}

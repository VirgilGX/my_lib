/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_compute_square_root
*/

/*
*   Returns square root of nbr.
*   If nbr is negative, returns 0.
*/
double my_compute_square_root(double nbr)
{
    double x = nbr;
    double y = 1;
    double e = 0.00001;
    if (nbr < 0) {
        return 0;
    }
    while (x - y > e) {
        x = (x + y) / 2;
        y = nbr / x;
    }
    return x;
}

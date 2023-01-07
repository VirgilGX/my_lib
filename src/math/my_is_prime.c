/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** my_is_prime
*/

/*
*   Returns 1 if the argument is a prime number otherwise 0.
*/
int my_is_prime(int nbr)
{
    int i = 2;
    if (nbr < 2) {
        return 0;
    }
    while (i < nbr) {
        if (nbr % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

/*
** EPITECH PROJECT, 2022
** MyLib | Virgil G.
** File description:
** my_strcmp
*/

/**
 * Compare the strings s1 and s2.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return 0 if the strings are equal, a negative number if s1 is less than s2
 * (i.e. if s1 is lexicographically sorted before s2),
 * and a positive number if s1 is greater than s2.
 */
int my_strcmp(const char *s1, const char *s2)
{
    unsigned int i = 0, j = 0;
    unsigned char c0 = s1[i], c1 = s2[j];
    while ((c0 != '\0' && c1 != '\0') && c0 == c1) {
        i++;
        j++;
        c0 = s1[i];
        c1 = s2[j];
    }
    if (c0 == c1) {
        return 0;
    } else {
        return c0 - c1;
    }
}

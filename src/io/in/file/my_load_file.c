/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_load_file
*/

#include "../../../include/my_lib_file.h"

/**
 * my_load_file - Load a file into memory
 *
 * @filepath: the path to the file to load
 *
 * @returns: a pointer to the contents of the file, or `NULL` if the file
 * cannot be opened or an error occurs
 *
 * This function loads a file into memory and returns a pointer to the contents
 * of the file. If the file cannot be opened or an error occurs, the function
 * returns `NULL`.
 */
unsigned char *my_load_file(const char *filepath)
{
    int fd = -1;
    struct stat s;
    unsigned char *buff = NULL;
    if ((fd = open(filepath, O_RDONLY)) != -1) {
        stat(filepath, &s);
        buff = malloc(sizeof(char) * s.st_size + 1);
        if (read(fd, buff, s.st_size) == s.st_size) {
            buff[s.st_size] = 0;
        } else {
            free(buff);
            return NULL;
        }
        close(fd);
        if (!buff || !*buff) {
            free(buff);
            return NULL;
        }
    }
    return buff;
}

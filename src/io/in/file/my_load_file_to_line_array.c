/*
** EPITECH PROJECT, 2023
** My_Lib | Virgil G.
** File description:
** my_load_file_to_line_array
*/

#include "../../../include/my_lib_file.h"

char **append_word_array(char **array, char *line)
{
    size_t array_len = 0;
    while (array[array_len])
        array_len++;
    size_t len = my_strlen(line);
    if (line[len - 1] == '\n')
        line[len - 1] = '\0';
    char **new_array = malloc(sizeof(char *) * (array_len + 2));
    for (size_t i = 0; i < array_len; i++)
        new_array[i] = array[i];
    new_array[array_len] = my_strdup(line);
    new_array[array_len + 1] = NULL;
    free(array);
    return new_array;
}

char **fill_from_file(char **array, FILE *file)
{
    char *line_buff = NULL;
    size_t line_buff_size = 0;
    ssize_t line_size = getline(&line_buff, &line_buff_size, file);
    while (line_size >= 0) {
        array = append_word_array(array, line_buff);
        free(line_buff);
        line_buff = NULL;
        line_size = getline(&line_buff, &line_buff_size, file);
    }
    free(line_buff);
    return array;
}

/**
 * my_load_file_to_line_array - load a file and return an array of lines
 * @filepath: path to the file to load
 *
 * This function loads the specified file and returns an array of lines. Each
 * element of the array is a null-terminated string that contains one line of
 * the file. The array is terminated by a NULL pointer.
 *
 * Returns: a pointer to the array of lines on success, or NULL on failure.
 */
char **my_load_file_to_line_array(const char *filepath)
{
    char **word_array = NULL;
    FILE *file = fopen(filepath, "r");
    if (!file)
        return NULL;
    word_array = malloc(sizeof(char *));
    if (!word_array)
        return NULL;
    word_array[0] = NULL;
    word_array = fill_from_file(word_array, file);
    fclose(file);
    return word_array;
}

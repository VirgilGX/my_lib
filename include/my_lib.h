/*
** EPITECH PROJECT, 2022
** My_Lib | Virgil G.
** File description:
** Header of My_Lib
*/

#ifndef MY_LIB
    #define MY_LIB
    // Includes
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <string.h>
    #include <stdarg.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <dirent.h>
    #include <time.h>
    #include <math.h>
    #include <ctype.h>
    #include <errno.h>
    #include <limits.h>
    #include <signal.h>
    #include <sys/wait.h>
    #include <sys/time.h>
    #include <sys/resource.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <sys/mman.h>
    #include <sys/ipc.h>
    #include <sys/shm.h>
    #include <malloc.h>
    #include <stdint.h>
    // Colors
    #define BLK "\e[0;30m"
    #define RED "\e[0;31m"
    #define GRN "\e[0;32m"
    #define YEL "\e[0;33m"
    #define BLU "\e[0;34m"
    #define MAG "\e[0;35m"
    #define CYN "\e[0;36m"
    #define WHT "\e[0;37m"
    // Regular bold text
    #define BBLK "\e[1;30m"
    #define BRED "\e[1;31m"
    #define BGRN "\e[1;32m"
    #define BYEL "\e[1;33m"
    #define BBLU "\e[1;34m"
    #define BMAG "\e[1;35m"
    #define BCYN "\e[1;36m"
    #define BWHT "\e[1;37m"
    // Regular underline text
    #define UBLK "\e[4;30m"
    #define URED "\e[4;31m"
    #define UGRN "\e[4;32m"
    #define UYEL "\e[4;33m"
    #define UBLU "\e[4;34m"
    #define UMAG "\e[4;35m"
    #define UCYN "\e[4;36m"
    #define UWHT "\e[4;37m"
    // Regular background
    #define BLKB "\e[40m"
    #define REDB "\e[41m"
    #define GRNB "\e[42m"
    #define YELB "\e[43m"
    #define BLUB "\e[44m"
    #define MAGB "\e[45m"
    #define CYNB "\e[46m"
    #define WHTB "\e[47m"
    // High intensty background
    #define BLKHB "\e[0;100m"
    #define REDHB "\e[0;101m"
    #define GRNHB "\e[0;102m"
    #define YELHB "\e[0;103m"
    #define BLUHB "\e[0;104m"
    #define MAGHB "\e[0;105m"
    #define CYNHB "\e[0;106m"
    #define WHTHB "\e[0;107m"
    // High intensty text
    #define HBLK "\e[0;90m"
    #define HRED "\e[0;91m"
    #define HGRN "\e[0;92m"
    #define HYEL "\e[0;93m"
    #define HBLU "\e[0;94m"
    #define HMAG "\e[0;95m"
    #define HCYN "\e[0;96m"
    #define HWHT "\e[0;97m"
    // Bold high intensity text
    #define BHBLK "\e[1;90m"
    #define BHRED "\e[1;91m"
    #define BHGRN "\e[1;92m"
    #define BHYEL "\e[1;93m"
    #define BHBLU "\e[1;94m"
    #define BHMAG "\e[1;95m"
    #define BHCYN "\e[1;96m"
    #define BHWHT "\e[1;97m"
    // Reset
    #define reset "\e[0m"
    #define CRESET "\e[0m"
    #define COLOR_RESET "\e[0m"
    // XOR
    #define XOR(exp1, exp2) ((exp1) != 0) ^ ((exp2) != 0)
// Linked list
typedef struct node {
    struct node *prev;
    struct node *next;
    void *data;
} node_t;
typedef struct list {
    node_t *head;
    node_t *tail;
    size_t size;
} list_t;
// Prototypes
// Array
void my_free_word_array(char **word_array);
size_t my_int_arr_len(int *arr, int eob);
int *my_int_array_concat(int *dest, int *src, int eob);
char **my_str_arr_dup(char **arr);
size_t my_str_arr_len(char **array);
char **my_str_to_word_array(char const *str, bool (*delim)(char));
// Char
int my_isalnum(int c);
int my_isalpha(int c);
int my_isprint(int c);
// Debug
void my_put_allocated_memory(void);
int my_put_err(const char *s, int code);
int my_put_warn(const char *s, int code);
// IO
char **my_load_file_to_line_array(const char *filepath);
unsigned char *my_load_file(const char *filepath);
ssize_t my_put_int_arr(int *arr, int eob, int fd);
ssize_t my_put_str_arr(char **arr, int fd);
ssize_t my_put_char_bits(unsigned char c, int fd);
ssize_t my_put_char(unsigned char c, int fd);
ssize_t my_put_str(const char *str, int fd);
ssize_t my_put_double(double nbr, int dec, int fd);
ssize_t my_put_float(float nbr, int dec, int fd);
ssize_t my_put_bit(unsigned int nbr);
ssize_t my_put_int(int nbr, int fd);
ssize_t my_put_long_long(long long nbr, int fd);
ssize_t my_put_long(long nbr, int fd);
ssize_t my_put_short(short nbr, int fd);
ssize_t my_put_unsigned_int(unsigned int nbr, int fd);
ssize_t my_put_unsigned_long_long(unsigned long long nbr, int fd);
ssize_t my_put_unsigned_long(unsigned long nbr, int fd);
ssize_t my_put_unsigned_short(unsigned short nbr, int fd);
// Linked_list
void my_add_list(list_t *list, void *data, size_t index);
void my_append_list(list_t *list, void *data);
void my_destroy_list(list_t *list);
list_t *my_init_list(void);
void my_prepend_list(list_t *list, void *data);
void my_remove_first_list(list_t *list);
void my_remove_last_list(list_t *list);
void my_remove_list(list_t *list, size_t index);
// Math
int my_compute_factorial(int nbr);
int my_compute_power(int nbr, int p);
double my_compute_square_root(double nbr);
size_t my_int_array_len(const int *arr, int eob);
int my_is_prime(int nbr);
void my_sort_int_array(int *array, int size);
// Memory
void *my_calloc(size_t nmemb, size_t size);
void my_free(void *ptr);
bool my_isstack(void *ptr);
void *my_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *my_memset(void *s, int c, size_t n);
void *my_realloc(void *ptr, size_t new_size, size_t old_size);
void my_swap(void **a, void **b);
// Number
int my_get_nbr_line(const char *str, size_t i);
int my_get_nbr(const char *s);
// String
char *my_binstr(const char *str);
char *my_revstr(char *str);
char *my_str_arr_to_str(const char **array, const char sep);
char *my_str_clean(char *str, const char c, bool (*is_delim)(char));
bool my_str_isalpha(char *str);
bool my_str_is_print(char *str);
char *my_str_up(char *str);
char *my_strbin(const char *str);
char *my_strcat(char *restrict dest, const char *restrict src);
char *my_strchr(const char *s, int c);
int my_strcmp(const char *s1, const char *s2);
char *my_strcomb(const char *s1, const char *s2);
char *my_strcpy(char *restrict dest, const char *restrict src);
size_t my_strcspn(const char *s, const char *reject);
char *my_strdup(const char *s);
size_t my_strlen_unsigned(const unsigned char *s);
size_t my_strlen(const char *s);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *restrict dest, const char *restrict src, size_t n);
char *my_strndup(const char *s, size_t n);
size_t my_strnlen(const char *s, size_t maxlen);
char *my_strpbrk(char *str, char *accept);
size_t my_strspn(const char* str, const char* accept);
char *my_strtok(char *str, const char *delim);
#endif

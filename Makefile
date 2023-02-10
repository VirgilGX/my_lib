##
## EPITECH PROJECT, 2022
## MyLib | Virgil G.
## File description:
## File to make the Lib
##

SRC	=	src/array/my_int_arr_len.c						\
		src/array/my_int_array_concat.c					\
		src/array/my_str_arr_len.c						\
		src/array/my_free_word_array.c					\
		src/array/my_str_to_word_array.c				\
		src/char/my_isalnum.c							\
		src/char/my_isprint.c							\
		src/debug/my_put_allocated_memory.c				\
		src/debug/my_put_err.c							\
		src/debug/my_put_warn.c							\
		src/io/in/file/my_load_file_to_line_array.c		\
		src/io/in/file/my_load_file.c					\
		src/io/out/array/my_put_int_arr.c				\
		src/io/out/array/my_put_str_arr.c				\
		src/io/out/char/my_put_char_bits.c				\
		src/io/out/char/my_put_char.c					\
		src/io/out/char/my_put_str.c					\
		src/io/out/float/my_put_double.c				\
		src/io/out/float/my_put_float.c					\
		src/io/out/integer/my_put_bit.c					\
		src/io/out/integer/my_put_int.c					\
		src/io/out/integer/my_put_long_long.c			\
		src/io/out/integer/my_put_long.c				\
		src/io/out/integer/my_put_short.c				\
		src/io/out/integer/my_put_unsigned_int.c		\
		src/io/out/integer/my_put_unsigned_long_long.c	\
		src/io/out/integer/my_put_unsigned_long.c		\
		src/io/out/integer/my_put_unsigned_short.c		\
		src/linked_list/my_add_list.c					\
		src/linked_list/my_append_list.c				\
		src/linked_list/my_destroy_list.c				\
		src/linked_list/my_init_list.c					\
		src/linked_list/my_prepend_list.c				\
		src/linked_list/my_remove_first_list.c			\
		src/linked_list/my_remove_last_list.c			\
		src/linked_list/my_remove_list.c				\
		src/math/my_compute_factorial.c					\
		src/math/my_compute_power.c						\
		src/math/my_compute_square_root.c				\
		src/math/my_int_array_len.c						\
		src/math/my_is_prime.c							\
		src/math/my_sort_int_array.c					\
		src/memory/my_calloc.c							\
		src/memory/my_free.c							\
		src/memory/my_memcpy.c							\
		src/memory/my_memset.c							\
		src/memory/my_realloc.c							\
		src/memory/my_swap.c							\
		src/number/my_get_nbr_line.c					\
		src/number/my_get_nbr.c							\
		src/string/my_binstr.c							\
		str/string/my_revstr.c							\
		src/string/my_strbin.c							\
		src/string/my_strcat.c							\
		src/string/my_strchr.c							\
		src/string/my_strcmp.c							\
		src/string/my_strcomb.c							\
		src/string/my_strcpy.c							\
		src/string/my_strcspn.c							\
		src/string/my_strdup.c							\
		src/string/my_strlen.c							\
		src/string/my_strncpy.c							\
		src/string/my_strndup.c							\
		src/string/my_strnlen.c							\
		src/string/my_strspn.c							\
		src/string/my_strtok.c

CFLAGS	=	-g3 -Wall -I src/include
OBJ		=	$(SRC:.c=.o)
NAME	=   libmy.a

all:	$(NAME)

$(NAME):
	rm -rf include
	rm -rf bin
	gcc -c $(SRC) $(CFLAGS)
	ar -rcs $(NAME) *.o
	rm -f $(OBJ)
	rm -rf *.o
	mkdir --parents ./bin; mv ./libmy.a ./bin/libmy.a
	cp -r src/include include

clean:
	rm -f $(OBJ)
	rm -rf *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all

publish:
	rm -rf include
	rm -rf bin

##
## EPITECH PROJECT, 2022
## MyLib | Virgil G.
## File description:
## File to make the Lib
##

SRC	=	src/io/out/integer/my_put_int.c				\
		src/io/out/integer/my_put_long_long.c		\
		src/io/out/integer/my_put_long.c			\
		src/io/out/integer/my_put_short.c			\
		src/io/out/integer/my_put_unsigned_int.c	\
		src/io/out/integer/my_put_unsigned_long.c	\
		src/io/out/char/my_put_char.c				\
		src/io/out/char/my_put_str.c				\
		src/io/out/float/my_put_double.c			\
		src/io/out/float/my_put_float.c				\
		src/string/my_strlen.c						\
		src/string/my_strnlen.c						\
		src/number/my_get_nbr.c						\
		src/math/my_sort_int_array.c				\
		src/memory/my_swap.c						\
		src/memory/my_memcpy.c						\
		src/string/my_strcat.c						\
		src/math/my_compute_factorial.c				\
		src/math/my_compute_power.c					\
		src/math/my_compute_square_root.c			\
		src/math/my_is_prime.c						\
		src/string/my_strcpy.c						\
		src/string/my_strncpy.c						\
		src/memory/my_memset.c						\
		src/array/my_str_to_word_array.c			\
		src/string/my_strdup.c						\
		src/char/my_isalnum.c						\
		src/string/my_strndup.c						\
		src/char/my_isprint.c						\
		src/array/my_free_word_array.c				\
		src/string/my_strcmp.c						\
		src/linked_list/my_init_list.c				\
		src/linked_list/my_destroy_list.c			\
		src/linked_list/my_prepend_list.c			\
		src/linked_list/my_append_list.c			\
		src/linked_list/my_add_list.c				\
		src/linked_list/my_remove_first_list.c		\
		src/linked_list/my_remove_last_list.c		\
		src/linked_list/my_remove_list.c			\
		src/io/in/file/my_load_file.c				\
		src/memory/my_realloc.c						\
		src/memory/my_calloc.c						\
		src/string/my_strbin.c						\
		src/string/my_binstr.c						\
		src/number/my_get_nbr_line.c				\
		src/string/my_strchr.c						\
		src/string/my_strcspn.c						\
		src/string/my_strspn.c						\
		src/string/my_strtok.c						\
		src/string/my_strcomb.c

OBJ	=	$(SRC:.c=.o)

NAME	=   libmy.a

BIN		=	libmy

all:	$(NAME)

$(NAME):
	gcc -c $(SRC) -g3 -Wall
	ar -rcs $(NAME) *.o
	rm -f $(OBJ)
	rm -f *.o
	mkdir --parents ./bin; mv ./libmy.a ./bin/libmy.a
	cp -r src/include include

clean:
	rm -f $(OBJ)
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all

debug:
	make fclean all
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all	\
	./$(NAME) $(call ARGS,defaultstring)

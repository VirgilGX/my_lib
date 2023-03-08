##
## EPITECH PROJECT, 2022
## MyLib | Virgil G.
## File description:
## File to make the Lib
##

SRC	=	src/array/*.c				\
		src/char/*.c				\
		src/debug/*.c				\
		src/io/in/file/*.c			\
		src/io/out/array/*.c		\
		src/io/out/char/*.c			\
		src/io/out/float/*.c		\
		src/io/out/integer/*.c		\
		src/linked_list/*.c			\
		src/math/*.c				\
		src/memory/*.c				\
		src/number/*.c				\
		src/string/*.c

OBJ		=	$(SRC:.c=.o)
NAME	=   libmy.a
CFLAGS	=	-g3 -Wall -Wextra -I ./include

all:	$(NAME)

$(NAME):
	@rm -rf bin
	@gcc -c $(SRC) $(CFLAGS)
	@ar -rcs $(NAME) *.o
	@rm -f $(OBJ)
	@rm -rf *.o
	@mkdir --parents ./bin; mv ./libmy.a ./bin/libmy.a

clean:
	@rm -f $(OBJ)
	@rm -rf *.o

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

publish:
	@rm -rf bin
	@git add .
	@git commit -m "Update"
	@git push

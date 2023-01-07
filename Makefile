##
## EPITECH PROJECT, 2022
## MyLib | Virgil G.
## File description:
## File to make the Lib
##

SRC		=	$(wildcard src/**/*.c src/*.c)
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


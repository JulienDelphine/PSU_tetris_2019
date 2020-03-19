##
## EPITECH PROJECT, 2020
## Tetris
## File description:
## Makefile
##

SRC	=	src/main_tetris.c	\
		src/print_funtion.c

NAME	=	tetris

CFLAGS	=	-lcurses -o

EFLAGS	=	-Wall -Wextra -I./include/

LIB		=	-L lib/my/ -lmy

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc $(CFLAGS) $(NAME) $(SRC) $(EFLAGS) $(LIB)

clean:
	make -C lib/my clean
	rm -f *.o
	rm -f *.~

fclean:
	make -C lib/my fclean
	rm -f $(NAME)
	make clean

re:	fclean all
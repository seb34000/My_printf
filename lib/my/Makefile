##
## EPITECH PROJECT, 2020
## Day10
## File description:
## Makefile
##

CC	=	gcc

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

LIB	=	libmy.a

all:	$(LIB)

$(LIB):	$(OBJ)
	ar rsc $(LIB) $(OBJ)
	echo "lib OK"
	cp $(LIB) ../
	cp $(LIB) ../../
	echo "lib moov"
	echo "my.h moov"
	rm -f $(OBJ)
	echo "clean OK"

clean:
	rm -f $(OBJ)
	echo "clean OK"

fclean: clean
	rm -f $(LIB)
	rm -f ../$(LIB)
	rm -f ../../include/my.h

re:	fclean all

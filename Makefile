##
## EPITECH PROJECT, 2020
## libmy
## File description:
## makefile
##

all:
		make -C ./lib/my

clean:
		rm -f libmy.a
		make clean -C ./lib/my

fclean:	clean
		rm -f $(NAME)
		make fclean -C ./lib/my

re:		fclean all
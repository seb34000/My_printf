/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** print_array
*/

#include "my_printf.h"

void print2d(char **str)
{
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; str[i][j] != '\0'; i++) {
            c = str[i][j];
            my_putchar(c);
            if (str[i][j + 1] == '\0')
                my_putchar('\n');
        }
    }
}
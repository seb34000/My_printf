/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** str
*/

#include "my_printf.h"

int my_putstr(char const *str)
{
    int i;

    for (i = 0; str[i] ; i++){
        my_putchar(str[i]);
    }
    return (0);
}

int my_putstr_no_printable(char const *str)
{
    int i = 0;

    for (i = 0; str[i] ; i++){
        if (str[i] >= 32 && str[i] <= 126) {
            my_putchar(str[i]);
        }
        else if (str[i] >= 7 && str[i] < 32) {
            my_putstr("\\0");
            my_putnbr_base(str[i], "01234567");
        }
        else if (str[i] >= 8 && str[i] < 31) {
            my_putstr("\\00");
            my_putnbr_base(str[i], "01234567");
        }
        else if (str[i] > 126) {
            my_putstr("\\");
            my_putnbr_base(str[i], "01234567");
        }
    }
    return (0);
}


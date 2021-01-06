/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_printf.h"

int my_printf_check(char *str, va_list ap, int i, int nb)
{
    if (str[i] == '%' && (str[i + 1] >= '0' && str[i + 1] <= '9')) {
            nb =  my_getnbr(str, i + 1);
            i = i + how_nbr(nb) + 1;
            nb == 0 ? my_printf_cflag(str, i, ap) : \
            my_printf_nbr(str, i, nb, ap);
            return (i);
        }
    if (str[i] == '%' && str[i + 1] == 'l') {
            my_printf_long_flag(str, i+2, ap);
            i = i + 3;
        }
    if (str[i] == '%') {
            str[i + 1] == '#' ? my_printf_htag_flag(str, i+2, ap): \
            my_printf_cflag(str, i+1, ap);
            i += str[i + 1] == '#' ? 2 : 1;
        }
        else if (str[i] != '%')
            my_putchar(str[i]);
    return (i);
}

void my_printf(char *str, ...)
{
    int i;
    int nb = 0;
    va_list ap;

    va_start(ap, str);
    for (i = 0; str[i] != '\0'; i++) {
        i = my_printf_check(str, ap, i, nb);
    }
    va_end(ap);
}
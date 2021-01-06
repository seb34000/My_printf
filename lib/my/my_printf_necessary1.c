/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf_necessary1
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_printf.h"

void to_hex_x(va_list ap)
{
    long long nb = va_arg(ap, long long);
    my_putnbr_base(nb, "0123456789abcdef");
}

void to_hex_xm(va_list ap)
{
    long long nb = va_arg(ap, long long);
    my_putnbr_base(nb, "0123456789ABCDEF");
}

void is_a_char(va_list ap)
{
    char c = va_arg(ap, int);
    my_putchar(c);
}

void is_a_string(va_list ap)
{
    char *str = va_arg(ap, char *);
    my_putstr(str);
}

void is_a_number(va_list ap)
{
    int nb = va_arg(ap, int);
    my_put_nbr(nb);
}

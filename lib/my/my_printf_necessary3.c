/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_printf_necessary3
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_printf.h"

void is_a_string_s(va_list ap)
{
    char *str = va_arg(ap, char *);
    my_putstr_no_printable(str);
}

void hdec_to_oct(va_list ap)
{
    long long nb = va_arg(ap, long long);
    my_putchar('0');
    my_putnbr_base(nb, "01234567");
}

void hto_hex_x(va_list ap)
{
    long long nb = va_arg(ap, long long);
    if (nb != 0)
        my_putstr("0x");
    my_putnbr_base(nb, "0123456789abcdef");
}

void hto_hex_xm(va_list ap)
{
    long long nb = va_arg(ap, long long);
    if (nb != 0)
        my_putstr("0X");
    my_putnbr_base(nb, "0123456789ABCDEF");
}

void is_long_nb(va_list ap)
{
    long nb = va_arg(ap, long);
    my_put_long_nbr(nb);
}
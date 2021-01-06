/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf_necessary2
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_printf.h"

void is_usgn_nb(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    my_put_nbr_usgn(nb);
}

void get_binary(va_list ap)
{
    unsigned long nb = va_arg(ap, unsigned long);
    my_putnbr_base(nb, "01");
}

void dec_to_oct(va_list ap)
{
    long long nb = va_arg(ap, long long);
    my_putnbr_base(nb, "01234567");
}

void get_address(va_list ap)
{
    long long nb = va_arg(ap, long long);
    my_putstr("0x");
    my_putnbr_base(nb, "0123456789abcef");
}

void percent(va_list ap)
{
    my_putchar('%');
}

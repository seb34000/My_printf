/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf_necessary4
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_printf.h"

void ldec_to_oct(va_list ap)
{
    long nb = va_arg(ap, long);
    my_putnbr_base(nb, "01234567");
}

void ldec_to_hexa(va_list ap)
{
    long nb = va_arg(ap, long);
    my_putnbr_base(nb, "0123456789abcdef");
}

void ldec_to_hexam(va_list ap)
{
    long nb = va_arg(ap, long);
    my_putnbr_base(nb, "0123456789ABCDEF");
}

void is_a_2d_array(va_list ap)
{
    char **str = va_arg(ap, char **);
    print2d(str);
}

void nbr_nb(int nb, va_list ap)
{
    int nbr = va_arg(ap, int);
    nec_nbr(nbr, nb);
    my_put_nbr(nbr);
}
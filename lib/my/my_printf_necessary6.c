/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_printf_necessary6
*/

#include "my_printf.h"

void nbr_to_bin(int nb, va_list ap)
{
    long nbr = va_arg(ap, long);
    nec_nbr(nbr, nb);
    my_putnbr_base(nbr, "01");
}

void nbr_char(int nb, va_list ap)
{
    char c = va_arg(ap, int);
    nec_char(nb);
    my_putchar(c);
}
/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_printf_necessary5
*/

#include "my_printf.h"

void nbr_oct(int nb, va_list ap)
{
    int nbr = va_arg(ap, int);
    nec_nbr(nbr,  nb);
    my_putnbr_base(nbr, "01234567");
}

void nbr_str(int nb, va_list ap)
{
    char *str = va_arg(ap, char *);
    nec_str(str, nb);
    my_putstr(str);
}

void nbr_is_usgn_nb(int nb, va_list ap)
{
    unsigned int nbr = va_arg(ap, unsigned int);
    nec_nbr(nbr, nb);
    my_put_nbr_usgn(nbr);
}

void nbr_to_hex_x(int nb, va_list ap)
{
    long nbr = va_arg(ap, long);
    nec_nbr(nbr, nb);
    my_putnbr_base(nbr, "0123456789abcdef");
}

void nbr_to_hex_xm(int nb, va_list ap)
{
    long nbr = va_arg(ap, long);
    nec_nbr(nbr, nb);
    my_putnbr_base(nbr, "0123456789ABCDEF");
}
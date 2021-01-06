/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_putnbr_base
*/

#include "my_printf.h"

void my_putnbr_base(long long nb, char *base)
{
    long size = my_strlen(base);

    if (nb >= size) {
        my_putnbr_base(nb / size, base);
        my_putnbr_base(nb % size, base);
    } else
        my_putchar(base[nb]);
}
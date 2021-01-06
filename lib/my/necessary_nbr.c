/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** necessary_nbr
*/

#include "my_printf.h"

void nec_nbr(int s_nbr, int nb)
{
    int res = 0;

    s_nbr = how_nbr(s_nbr);
    res = nb - s_nbr;
    while (res != 0) {
        my_putchar(' ');
        res--;
    }
}

void nec_str(char *str, int nb)
{
    int res = 0;
    int size = 0;

    size = my_strlen(str);
    res = nb - size;
    while (res != 0) {
        my_putchar(' ');
        res--;
    }
}

void nec_char(int nb)
{
    int res = 0;
    int size = 1;

    res = nb - size;
    while (res != 0) {
        my_putchar(' ');
        res--;
    }
}
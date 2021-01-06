/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_printf_flag
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_printf.h"

int find_flag(char *tab, char flag)
{
    int i;

    for (i = 0; tab[i] != '\0'; i++) {
        if (tab[i] == flag) {
            return (i);
        }
    }
    return (84);
}

void my_printf_nbr(char *str, int i, int nb, va_list ap)
{
    int index_flag = 0;
    char flag[10] = {'d', 'i', 'o', 's', 'u', 'x', 'X', 'b', 'c', 0};
    void (*func[9])(int, va_list) = {nbr_nb, nbr_nb, nbr_oct, nbr_str, \
    nbr_is_usgn_nb, nbr_to_hex_x, nbr_to_hex_xm, nbr_to_bin, nbr_char};

    index_flag = find_flag(flag, str[i]);
        if (index_flag != 84) {
            (*func[index_flag])(nb, ap);
        }
}

void my_printf_long_flag(char *str, int i, va_list ap)
{
    int index_flag = 0;
    char flag[6] = {'i', 'd', 'o', 'x', 'X', 0};
    void (*funct[5])(va_list) = {is_long_nb, is_long_nb, ldec_to_oct, \
    ldec_to_hexa, ldec_to_hexam};

    index_flag = find_flag(flag, str[i]);
        if (index_flag != 84) {
            (*funct[index_flag])(ap);
        }
}

void my_printf_htag_flag(char *str, int i, va_list ap)
{
    int index_flag = 0;
    char flag[4] = {'o', 'x', 'X', 0};
    void (*funct[3])(va_list) = {hdec_to_oct, hto_hex_x, hto_hex_xm};

    index_flag = find_flag(flag, str[i]);
        if (index_flag != 84) {
            (*funct[index_flag])(ap);
        }
}

void my_printf_cflag(char *str, int i, va_list ap)
{
    int index_flag = 0;
    char flag[14] = {'c', 's', 'd', 'i', 'X', 'x', '%', 'p', 'o', 'b', \
    'u', 'S', 'z', 0};
    void (*funct[13])(va_list) = {is_a_char, is_a_string, is_a_number, \
    is_a_number, to_hex_xm, to_hex_x, percent, get_address, dec_to_oct, \
    get_binary, is_usgn_nb, is_a_string_s};

    index_flag = find_flag(flag, str[i]);
        if (index_flag != 84) {
            (*funct[index_flag])(ap);
        }
}
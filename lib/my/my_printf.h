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

#ifndef __MY_PRINTF_H__

#define __MY_PRINTF_H__

void to_hex_x(va_list ap);
void to_hex_xm(va_list ap);
void is_a_char(va_list ap);
void is_a_string(va_list ap);
void is_a_number(va_list ap);
void dec_to_oct(va_list ap);
void get_address(va_list ap);
void percent(va_list ap);
void get_binary(va_list ap);
void is_usgn_nb(va_list ap);
void is_a_string_s(va_list ap);
void hdec_to_oct(va_list ap);
void hto_hex_x(va_list ap);
void hto_hex_xm(va_list ap);
void is_long_nb(va_list ap);
void ldec_to_oct(va_list ap);
void ldec_to_hexa(va_list ap);
void ldec_to_hexam(va_list ap);
void nbr_nb(int nb, va_list ap);
void nbr_oct(int nb, va_list ap);
void nbr_str(int nb, va_list ap);
void nbr_to_hex_xm(int nb, va_list ap);
void nbr_to_hex_x(int nb, va_list ap);
void nbr_is_usgn_nb(int nb, va_list ap);
void nbr_to_bin(int nb, va_list ap);
void nbr_char(int nb, va_list ap);
int find_flag(char *tab, char flag);
void my_printf_nbr(char *str, int i, int nb, va_list ap);
void my_printf_long_flag(char *str, int i, va_list ap);
void my_printf_htag_flag(char *str, int i, va_list ap);
void my_printf_cflag(char *str, int i, va_list ap);
long my_put_long_nbr(long nb);
void nec_char(int nb);
void my_putchar(char c);
void my_putnbr_base(long long nb, char *base);
int my_put_nbr(int nb);
unsigned int my_put_nbr_usgn(unsigned int nb);
int my_strlen(char const *str);
int my_putstr(char const *str);
int my_putstr_no_printable(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
void print2d(char **str);
int  my_getnbr(char *str, int i);
int my_getnbr_rec(char *str, int i, int nb);
int my_str_isnum(char str);
int how_nbr(int nb);
void nec_nbr(int s_nbr, int nb);
void nec_str(char *str, int nb);

#endif

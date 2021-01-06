/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** str isnum
*/

int my_str_isnum(char str)
{
    if (str >= 48 && str <= 57) {
        return (0);
    } else
        return (1);
}
/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** how_number_str
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0 ; str[i] != '\0'; i++ );
    return (i);
}

/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** handle errors for long flag
*/

#include "tetris.h"

int check_error_long_key(char *str)
{
    int i = 0;
    for (; str[i] != '='; i++);
    i++;
    if (str[i + 1] != '\0')
        exit (84);
    return (0);
}

int check_long_lvl(char *str)
{
    int i = 8;

    if (my_strlen(str) < 9)
        exit (84);
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            exit (ERROR_LVL);
        i++;
    }
    return (0);
}
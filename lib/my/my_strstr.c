/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** my_strstr for tetris
*/

#include "include/lib.h"

int my_strstr(char *check, char *str, int size)
{
    int i = 0;

    if (my_strlen(str) < size)
        return (1);
    while (check[i] != '\0') {
        if (check[i] != str[i])
            return (1);
        i++;
    }
    return (0);
}
/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** my_strcmp
*/

int my_strcmp(char *check, char *str)
{
    int i = 0;

    while ((str[i] == check[i]) && (check[i] != '\0') && (str[i] != '\0'))
        i++;
    return (check[i] - str[i]);
}
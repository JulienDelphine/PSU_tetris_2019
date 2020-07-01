/*
** EPITECH PROJECT, 2020
** check_struct_size.c
** File description:
** check struct size
*/

#include "tetris.h"

char *clean_str(char *av)
{
    int len = my_strlen(av);
    char *str = malloc(sizeof(char) * (len + 1));

    for (int i = len; av[i] == ' '; i--)
        len--;
    str[len] = '\0';
    for (int i = 0; i <= len; i++)
        str[i] = av[i];
    return (str);
}

int count_this_line(char *av)
{
    int count = 0;

    av = clean_str(av);
    for (int i = 0; av[i] != '\n'; i++)
        count++;
    return (count);
}

int verif_size(int line, int *info, char **av)
{
    int valid = 0;
    int j = 0;

    for (int i = 1; i < line; i++) {
        if (count_this_line(av[i]) == 0)
            return (1);
        while (av[i][j] != '\n' && av[i][j] != '\0')
            j++;
        if (j == info[0])
            valid = 1;
        if (count_this_line(av[i]) > info[0])
            return (1);
        j = 0;
    }
    if (valid == 0)
        return (1);
    return (0);
}

int check_struct_size(int *info, int line, char **av)
{
    int error = 0;

    if (line != info[1] + 1)
        return (1);
    error += verif_size(line, info, av);
    if (error == 0)
        return (0);
    if (error != 0)
        return (1);
    return (0);
}

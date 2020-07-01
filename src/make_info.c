/*
** EPITECH PROJECT, 2020
** make_info.c
** File description:
** make info
*/

#include "tetris.h"

int *make_info(char *av)
{
    int *info = malloc(sizeof(int) * 3);
    int power = 1;
    int j = 2;

    for (int i = 0; i < 3; i++)
        info[i] = 0;
    for (int i = start_first_line(av); i >= 0; i--) {
        if (av[i] == ' ' && av[i-1] != ' ' && i != 0) {
            j--;
            power = 1;
        }
        if (!((av[i] >= '0' && av[i] <= '9' && j >= 0) || av[i] == ' '))
            return (info);
        if (av[i] != ' ') {
            info[j] += ((av[i] - 48) * power);
            power = power * 10;
        }
    }
    return (info);
}

char **make_file_array(int max_len, int line, char *buff)
{
    char **array = malloc(sizeof(char *) * (line + 1));
    int j = 0;
    int y = 0;

    for (int i = 0; i <= line; i++)
        array[i] = malloc(sizeof(char) * (max_len + 2));
    for (int i = 0; buff[i] != '\0'; i++) {
        array[j][y] = buff[i];
        y++;
        if (buff[i] == '\n') {
            array[j][y] = '\0';
            j++;
            y = 0;
        }
    }
    array[line] = NULL;
    return (array);
}

void display_tetriminos(char **av)
{
    for (int i = 1; av[i] != NULL; i++)
        my_printf("%s", av[i]);
}

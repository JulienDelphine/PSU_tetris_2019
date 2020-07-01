/*
** EPITECH PROJECT, 2020
** check_file_content.c
** File description:
** check content file
*/

#include "tetris.h"

int start_first_line(char *av)
{
    int start = 0;

    for (int i = 0; av[i] != '\0' && av[i] != '\n'; i++)
        start++;
    start--;
    return (start);
}

int check_line(char *av)
{
    int error = 0;

    for (int i = 0; av[i] != '\0' && av[i] != '\n'; i++) {
        if (!(av[i] == '*' || av[i] == ' ' || av[i] == '\n'))
            error++;
    }
    return (error);
}

int other(char **av, int line)
{
    int error = 0;

    if (line <= 1)
        return (1);
    for (int i = 1; av[i] != NULL; i++)
        error += check_line(av[i]);
    return (error);
}

void check_file_content(int max_len, int line, char *buff)
{
    char **file = make_file_array(max_len, line, buff);
    int *info = make_info(file[0]);

    if (line == 1 || info[0] == 0 || info[1] == 0 || other(file, line) != 0)
        my_printf("error\n\0");
    if (check_struct_size(info, line, file) != 0)
        my_printf("error\n\0");
    else {
        my_printf("Size %i*%i : color %i :\n", info[0], info[1], info[2]);
        display_tetriminos(file);
    }
}

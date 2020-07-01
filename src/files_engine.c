/*
** EPITECH PROJECT, 2020
** files_engine.c
** File description:
** check files
*/

#include "tetris.h"

char *make_filepath(char *array, char *add)
{
    int len = my_strlen(add) + my_strlen(array);
    char *filepath = malloc(sizeof(char) * (len) + 1);
    int j = 0;

    filepath[len] = '\0';
    for (int i = 0; i < my_strlen(add); i++)
        filepath[i] = add[i];
    for (int i = my_strlen(add); array[j] != '\0'; i++) {
        filepath[i] = array[j];
        j++;
    }
    return (filepath);
}

int find_start(char *av)
{
    int start = 0;
    char *check = ".tetrimino";
    int len = my_strlen(check);

    for (int i = 0; av[i] != '\n' && av[i] != '\0'; i++)
        start++;
    for (int i = start; av[i] == check[len] && check[len] != '.'; i--) {
        start--;
        len--;
    }
    if (check[len] != '.')
        return(-84);
    return (start-1);
}

char *find_name(char *av, int max_len, int start)
{
    char *name = malloc(sizeof(char) * (max_len) + 1);
    int i = 0;

    if (start == -84)
        return ("error");
    for (; i != start + 1; i++)
        name[i] = av[i];
    name[i] = '\0';
    return (name);
}

void files_engine(char **array, int files_count, int max_len)
{
    char const *filepath = malloc(sizeof(char) * (max_len +1));
    int fd;
    char *name = malloc(sizeof(char) * max_len);
    int start = 0;

    for (int i = 0; i < files_count; i++) {
        my_printf("Tetriminos : ");
        start = find_start(array[i]);
        name = find_name(array[i], max_len, start);
        filepath = make_filepath(array[i], "tetriminos/");
        fd = open(filepath, O_RDONLY);
        if (fd == -1 || start == -84)
            my_printf("error\n");
        else {
            my_printf("Name %s : ", name);
            check_file(filepath);
        }
        close(fd);
    }
}

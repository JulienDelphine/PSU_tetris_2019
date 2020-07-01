/*
** EPITECH PROJECT, 2020
** files_error.c
** File description:
** file check error
*/

#include "tetris.h"

int repocount(char *av)
{
    int count = 0;
    struct dirent *sd;
    DIR *dir = opendir(av);

    if (dir == NULL)
        exit(84);
    while ((sd = readdir(dir)) != NULL)
        count++;
    return (count);
}

int maxlen(char *av)
{
    int len = 0;
    struct dirent *sd;
    DIR *dir = opendir(av);
    int new_len = 0;

    while ((sd = readdir(dir)) != NULL) {
        new_len = my_strlen(sd->d_name);
        if (new_len >= len)
            len = new_len;
    }
    return (len);
}

int check_content_repo(char *av)
{
    int error = 0;

    if (my_strlen(av) <= 2) {
        if (av[0] == '.' && av[1] == '.' && av[2] == '\0')
            error++;
        if (av[0] == '.' && av[1] == '\0')
            error++;
    }
    return (error);
}

char **write_array(char **array, int max_len)
{
    DIR *dir = opendir("tetriminos");
    struct dirent *sd;
    char *stockage = malloc(sizeof(char) * max_len);
    int j = 0;

    while ((sd = readdir(dir)) != NULL) {
        stockage = sd->d_name;
        if (check_content_repo(stockage) == 0) {
            array[j] = stockage;
            j++;
        }
    }
    return (array);
}

void files_error(void)
{
    DIR *dir = opendir("tetriminos");
    int files_count = repocount("tetriminos") - 2;
    int max_len = maxlen("tetriminos");
    char **array = malloc(sizeof(char *) * (files_count + 2));
    int i = 0;

    my_printf("Tetriminos : ");
    for (; i != files_count; i++) {
        array[i] = malloc(sizeof(char) * (max_len) + 2);
        array[i][max_len + 1] = '\0';
    }
    array[i + 1] = NULL;
    if (dir == NULL)
        my_printf("error\n");
    else
        my_printf("%i\n", files_count);
    array = write_array(array, max_len);
    files_engine(array, files_count, max_len);
    closedir(dir);
}

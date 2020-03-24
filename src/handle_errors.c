/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** Handling errors for Tetris
*/

#include "tetris.h"

int check_lvl_errors(char *str)
{
    int i = 0;

    if (str == NULL)
        exit (ERROR_LVL);
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            exit (ERROR_LVL);
        i++;
    }
    return (0);
}

int check_error_key(char *str)
{
    int i = 0;

    if (str == NULL)
        exit (ERROR_KEY);
    while (str[i] != '\0')
        i++;
    if (i > 1)
        exit (ERROR_KEY);
    return (0);
}

int check_long_flag(char *arg)
{
    if (my_strstr("--level=\0", arg, 9) == 0) {
        check_long_lvl(arg);
        return (0);
    }
    if (my_strstr("--key-left=\0", arg, 11) == 0 || 
    my_strstr("--key-right=\0", arg, 12) == 0|| my_strstr("--key_turn=\0", 
    arg, 11) == 0 || my_strstr("--key-drop=\0", arg, 11) || 
    my_strstr("--key_quit=\0", arg, 11) == 0 || my_strstr("--key-pause=\0",
    arg, 12) == 0) {
        check_error_long_key(arg);
        return (0);
    }
    return (1);
}

int check_errors_flag(char *arg, char *check)
{
    if (my_strcmp("-D\0", arg) == 0 || my_strcmp("--debug\0", arg) == 0
    || my_strcmp("-w\0", arg) == 0)
        return (0);
    if (my_strcmp("-L\0", arg) == 0) {
        check_lvl_errors(check);
        return (1);
    }
    if (my_strcmp("-l\0", arg) == 0 || my_strcmp("-r\0", arg) == 0 || 
    my_strcmp("-r\0", arg) == 0 || my_strcmp("-t\0", arg) == 0 ||
    my_strcmp("-d\0", arg) == 0 || my_strcmp("-q\0", arg) == 0 ||
    my_strcmp("-p\0", arg) == 0) {
        check_error_key(check);
        return (1);
    }
    if (check_long_flag(arg) == 1)
        exit (84);
    else
        return (0);
    exit (84);
}

int handle_errors(int ac, char **av)
{
    for (int i = 1; i != ac; i++) {
        if (check_errors_flag(av[i], av[i + 1]) == 1)
            i++;
    }
    return (0);
}
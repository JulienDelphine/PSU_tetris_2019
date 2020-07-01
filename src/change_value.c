/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** All change of value possible by user
*/

#include "tetris.h"

int check_other_arg(char *arg, char check, game_t *game)
{
    if (my_strcmp("-q\0", arg) == 0) {
        game->key.key_quit = check;
        return (1);
    }
    if (my_strcmp("-p\0", arg) == 0) {
        game->key.key_pause = check;
        return (1);
    }
    if (my_strcmp("-w\0", arg) == 0)
        game->next++;
    return (0);
}

int check_all_arg(char *arg, char check, game_t *game)
{
    if (my_strcmp("-l\0", arg) == 0) {
        game->key.key_left = check;
        return (1);
    }
    if (my_strcmp("-r\0", arg) == 0) {
        game->key.key_right = check;
        return (1);
    }
    if (my_strcmp("-t\0", arg) == 0) {
        game->key.key_turn = check;
        return (1);
    }
    if (my_strcmp("-d\0", arg) == 0) {
        game->key.key_drop = check;
        return (1);
    }
    if (check_other_arg(arg, check, game) == 1)
        return (1);
    return (0);
}

void change_value(int ac, char **av, game_t *game)
{
    int i = 1;

    for (; i < ac - 1; i++) {
        if (check_all_arg(av[i], av[i + 1][0], game) == 1)
            i++;
    }
    for (int j = 1; j != ac; j++) {
        if (my_strcmp("-L\0", av[j]) == 0)
            game->level = my_atoi(av[j + 1]);
    }
    if (my_strcmp("-w\0", av[i]) == 0)
        game->next++;
}
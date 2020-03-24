/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** Main for tetris
*/

#include "tetris.h"

void init_key(game_t *game)
{
    game->key.key_drop = KEY_DOWN;
    game->key.key_left = KEY_LEFT;
    game->key.key_right = KEY_RIGHT;
    game->key.key_turn = KEY_UP;
    game->key.key_pause = ' ';
    game->key.key_quit = 'q';
}

void init_game(game_t *game)
{
    init_key(game);
    game->level = 1;
    game->next = 0;
    game->size_y = 20;
    game->size_x = 10;
}

int start_tetris(int ac, char **av)
{
    return (0);
}

int main_tetris(int ac, char **av)
{
    game_t game;

    init_game(&game);
    for (int i = 0; i != ac; i++) {
        if (my_strcmp("-D\0", av[i]) == 0 || 
        my_strcmp("--debug\0", av[i]) == 0) {
            start_debug(ac, av, &game);
            return (0);
        }
    }
    start_tetris(ac, av);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp("--help\0", av[1]) == 0) {
        print_usage(av[0]);
        return (0);
    }
    if (ac < 2)
        return (84);
    handle_errors(ac, av);
    main_tetris(ac, av);
    return (0);
}
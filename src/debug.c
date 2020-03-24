/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** ALl function for -d
*/

#include "tetris.h"

void start_debug(int ac, char **av, game_t *game)
{
    change_value(ac, av, game);
    print_debug(game);
}
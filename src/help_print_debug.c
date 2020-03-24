/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** All function for verif print at debug
*/

#include "tetris.h"

char *verif_next(game_t *game)
{
    char *str = NULL;

    if (game->next == 0)
        str = "Yes\0";
    if (game->next == 1)
        str = "No\0";
    return (str);
}
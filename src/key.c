/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** Verif key for print debug
*/

#include "tetris.h"

char *key_left(key_s *key)
{
    char *str = NULL;

    if (key->key_left = 260)
        str = "^EOD\0";
    if (key->key_left = ' ')
        str = "(space)\0";
    return (str);
}

char *key_right(key_s *key)
{
    char *str = NULL;

    if (key->key_right = 261)
        str = "^EOD\0";
    if (key->key_right = ' ')
        str = "(space)\0";
    return (str);
}

char *key_turn(key_s *key)
{
    char *str = NULL;

    if (key->key_turn = 259)
        str = "^EOB\0";
    if (key->key_left = ' ')
        str = "(space)\0";
    return (str);
}

char *key_quit(key_s *key)
{
    char *str = NULL;

    if (key->key_left = ' ')
        str = "(space)\0";
    if (key->key_quit = 'q')
        str = "q\0";
    return (str);
}

char *key_drop(key_s *key)
{
    char *str = NULL;

    if (key->key_left = 258)
        str = "^EOA\0";
    if (key->key_left = ' ')
        str = "(space)\0";
    return (str);
}
/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** All key for menu (pause, quit, ...)
*/

#include "tetris.h"

char *key_pause(key_s *key)
{
    char *str = NULL;

    if (key->key_left == ' ')
        str = "(space)\0";
    else {
        str = malloc(sizeof(char) * 2);
        str[0] = key->key_left;
        str[1] = '\0';
    }
    return (str);
}
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

    if (key->key_left == 260) {
        str = "^EOD\0";
        return (str);
    }
    if (key->key_left == ' ')
        str = "(space)\0";
    else {
        str = malloc(sizeof(char) * 2);
        str[0] = key->key_left;
        str[1] = '\0';
    }
    return (str);
}

char *key_right(key_s *key)
{
    char *str = NULL;

    if (key->key_right == 261) {
        str = "^EOD\0";
        return (str);
    }
    if (key->key_right == ' ')
        str = "(space)\0";
    else {
        str = malloc(sizeof(char) * 2);
        str[0] = key->key_right;
        str[1] = '\0';
    }
    return (str);
}

char *key_turn(key_s *key)
{
    char *str = NULL;

    if (key->key_turn == 259) {
        str = "^EOB\0";
        return (str);
    }
    if (key->key_turn == ' ')
        str = "(space)\0";
    else {
        str = malloc(sizeof(char) * 2);
        str[0] = key->key_turn;
        str[1] = '\0';
    }
    return (str);
}

char *key_quit(key_s *key)
{
    char *str = NULL;

    if (key->key_quit == ' ') {
        str = "(space)\0";
        return (str);
    }
    if (key->key_quit == 'q')
        str = "q\0";
    else {
        str = malloc(sizeof(char) * 2);
        str[0] = key->key_quit;
        str[1] = '\0';
    }
    return (str);
}

char *key_drop(key_s *key)
{
    char *str = NULL;

    if (key->key_drop == 258) {
        str = "^EOA\0";
        return (str);
    }
    if (key->key_drop == ' ')
        str = "(space)\0";
    else {
        str = malloc(sizeof(char) * 2);
        str[0] = key->key_drop;
        str[1] = '\0';
    }
    return (str);
}
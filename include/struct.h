/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** struct for tetris
*/

typedef struct key_s
{
    int key_turn;
    int key_left;
    int key_right;
    int key_drop;
    int key_quit;
    int key_pause;
} key_s;

typedef struct game_t
{
    char **game;
    int next;
    int level;
    int size_x;
    int size_y;
    key_s key;
} game_t;
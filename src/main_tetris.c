/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** Main for tetris
*/

#include "tetris.h"

void init_key(key_s *key)
{
    key->key_drop = KEY_DOWN;
    key->key_left = KEY_LEFT;
    key->key_right = KEY_RIGHT;
    key->key_turn = KEY_UP;
    key->key_pause = ' ';
    key->key_quit = 'q';
    key->key_tab = NULL;
}

int start_tetris(int ac, char **av)
{
    return (0);
}

int main(int ac, char **av)
{
    key_s key;

    printf("%d\n%d\n%d\n%d\n", KEY_DOWN, KEY_UP, KEY_LEFT, KEY_RIGHT);
    init_key(&key);
    if (ac == 2 && my_strcmp("--help\0", av[1]) == 0) {
        print_usage(av[0]);
        return (0);
    }
    if (ac < 2)
        return (84);
    if (handle_errors(ac, av, &key) == 84)
        return (84);
    for (int i = 0; i != ac; i++) {
        if (my_strcmp("-D\0", av[i]) == 0 || 
        my_strcmp("--debug\0", av[i]) == 0) {
            start_debug(ac, av, &key);
            return (0);
        }
    }
    start_tetris(ac, av);
    return (0);
}
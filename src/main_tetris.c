/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** Main for tetris
*/

#include "tetris.h"

int start_tetris(int ac, char **av)
{
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
    if (handle_errors(ac, av) == 84)
        return (84);
    for (int i = 0; i != ac; i++) {
        if (my_strcmp("-D\0", av[i]) == 0 || 
        my_strcmp("--debug\0", av[i]) == 0) {
            start_debug(ac, av);
            return (0);
        }
    }
    start_tetris(ac, av);
    return (0);
}
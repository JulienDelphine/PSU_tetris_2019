/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** Main for tetris
*/

#include "tetris.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp("--help\0", av[1]) == 0) {
        print_usage();
        return (0);
    }
    return (0);
}
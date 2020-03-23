/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** include for tetris
*/

#include "../lib/my/include/lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ERROR_LVL 84
#define ERROR_KEY 84

#ifndef TETRIS_
#define TETRIS_

void print_usage(char *av);
int handle_errors(int ac, char **av);
void start_debug(int ac, char **av);
int check_long_level(char *str);

#endif /* TETRIS */
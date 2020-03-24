/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** include for tetris
*/

#include "struct.h"
#include "../lib/my/include/lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ERROR_LVL 84
#define ERROR_KEY 84

#ifndef TETRIS_
#define TETRIS_

void print_usage(char *av);
int handle_errors(int ac, char **av, key_s *key);
void start_debug(int ac, char **av, key_s *key);
int check_long_lvl(char *str);
int check_error_long_key(char *str);
void print_debug(key_s *key);
char *key_left(key_s *key);
char *key_right(key_s *key);
char *key_turn(key_s *key);
char *key_quit(key_s *key);
char *key_drop(key_s *key);

#endif /* TETRIS */
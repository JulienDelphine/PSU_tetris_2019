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
int handle_errors(int ac, char **av);
void start_debug(int ac, char **av, game_t *game);
int check_long_lvl(char *str);
int check_error_long_key(char *str);
void print_debug(game_t *game);
char *key_left(key_s *key);
char *key_right(key_s *key);
char *key_turn(key_s *key);
char *key_quit(key_s *key);
char *key_drop(key_s *key);
char *key_pause(key_s *key);
char *verif_next(game_t *game);
void change_value(int ac, char **av, game_t *game);
void change_key_right(char *check, game_t *game);

#endif /* TETRIS */
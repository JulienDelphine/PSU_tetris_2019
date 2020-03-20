/*
** EPITECH PROJECT, 2020
** Tetris
** File description:
** all print function
*/

#include "tetris.h"

void print_usage(void)
{
    my_printf("Usage:  ./tetris [options]\nOptions:\n");
    my_printf(" --help               Display this help\n -L");
    my_printf(" --level={num}     Start Tetris at the level num (def: 1)\n");
    my_printf(" -l --key-left={K}    Move the tetrimino ");
    my_printf("LEFT using the K key (def: left arrow)\n");
    my_printf(" -r --key-right={K}   Move the tetrimino ");
    my_printf("RIGHT using the K key (def: right arrow)\n");
    my_printf(" -t --key-turn={K}    TURN the tetrimino");
    my_printf("clockwise 90d using the K key (def: top arrow)\n");
    my_printf(" -d --key-drop={K}    DROP the tetrimino using ");
    my_printf("the K key (def: down arrow)\n");
    my_printf(" -q --key-quit={K}    QUIT the game ");
    my_printf("using the K key (def: 'q' key)\n");
    my_printf(" -p --key-pause={K}   PAUSE/RESTART the game using ");
    my_printf("the K key (def: space bar)\n");
    my_printf(" --map-size={row,col} Set the numbers of rows and ");
    my_printf("columns of the map (def: 20,10)\n");
    my_printf(" -w --without-next    Hide next tetrimino (def: false)\n");
    my_printf(" -D --debug           Debug mode (def: false)\n");
}
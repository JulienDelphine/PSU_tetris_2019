/*
** EPITECH PROJECT, 2020
** check_file.c
** File description:
** check file
*/

#include "tetris.h"

size_t file_size(const char *file)
{
    struct stat st;
    if (stat(file, &st) != 0) {
        return 0;
    }
    return (st.st_size);
}

int find_len(char *buff)
{
    int len = 0;
    int stockage = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        if (stockage >= len && buff[i] == '\n') {
            len = stockage;
            stockage = 0;
        }
        if (stockage < len && buff[i] == '\n')
            stockage = 0;
        stockage++;
    }
    return (len);
}

int find_line(char *buff)
{
    int line = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == '\n')
            line++;
    }
    return (line);
}

void check_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int read_bytes = 0;
    char *buffer = malloc(sizeof(char) * file_size(filepath) + 1);
    int max_len = 0;
    int max_line = 0;

    if (fd == -1)
        exit (84);
    if ((read_bytes = read(fd, buffer, file_size(filepath))) == -1)
        exit (84);
    buffer[read_bytes] = '\0';
    if (close(fd) == -1)
        exit (84);
    max_len = find_len(buffer);
    max_line = find_line(buffer);
    if (buffer[0] != '\0')
        check_file_content(max_len, max_line, buffer);
    else
        my_printf("error\n");
}

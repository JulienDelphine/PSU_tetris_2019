/*
** EPITECH PROJECT, 2020
** matchsticks
** File description:
** count nbr of char of str finish by \n
*/

int my_strlen_special(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i++;
    }
    return (i);
}
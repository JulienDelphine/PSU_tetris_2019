/*
** EPITECH PROJECT, 2019
** lib.h
** File description:
** List all prototype of function for include
*/

#include <stdarg.h>

#ifndef LIB_
#define LIB_
#define EXIT_ERROR 84

int my_printf(char *str, ...);
int my_putchar(char c, int j);
int my_putstr(char *str, int j);
int my_nbr(va_list *list, int j);
int my_octo(va_list *list, int j);
int print_octo_base(unsigned int nb, int j);
int my_hexa(va_list *list, int j);
int print_hexa_base(unsigned int nb, int j);
int print_nbr(int nbr, int j);
char *my_revstr(char *str);
void reverse(char *str, int count, int reverse_count);
int my_str(va_list *list, int j);
int my_char(va_list *list, int j);
int my_maj_hexa(va_list *list, int j);
int print_maj_hexa_base(unsigned int nb, int j);
int my_binary(va_list *list, int j);
int print_binary(unsigned int nb, int j);
int my_u_nbr(va_list *list, int j);
int print_u_nbr(unsigned int nbr, int j);
int handle_errors_str(char *str);
int handle_errors_int(int i);
int handle_errors_unsigned(unsigned int i);
void redirect_all_stdout(void);
int my_getnbr(char *str);
int my_atoi(char const *str);
int my_strlen(char *str);
int my_strlen_special(char *str);
int my_str_isnumpos(char const *str);
int my_str_isnumpos_special(char const *str);
int my_strcmp(char *check, char *str);
int my_strstr(char *check, char *str, int size);

#endif /* LIB_ */

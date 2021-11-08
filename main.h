#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * struct printf - struct printf
 * @c: The character
 * @fun: The function associated
 */
typedef struct printf
{
	char c;
	int (*fun)(va_list);
} printf_t;

int _printf(const char *format, ...);
int _putchar(char c);
int get_func(const char s, va_list ap);

int _print_char(va_list arg);
int _print_string(va_list arg);
int _print_percent(va_list arg);
int _print_int(va_list arg);

#endif

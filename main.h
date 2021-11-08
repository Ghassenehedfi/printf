#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list);
int _print_string(va_list);
int _print_percent(va_list);
int print(const char *format, conv_t funcs[], va_list args);
int _print_int(va_list args);

#endif

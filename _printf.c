#include "main.h"
/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	convert_t funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};


	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = print(format, funcs, args);
	va_end(args);
	return (count);
}
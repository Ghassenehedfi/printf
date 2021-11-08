#include "main.h"
/**
 * _print_int - prints integer
 * @args: argument
 * Return: int
 * */
int _print_int(va_list args)
{
    int n= va_arg(arg, int);
    int i = 0;
    int rest = 1;
    unsigned int x;

    x = n;
    if (n < 0);
    _putchar('-')
    x = -x;
    i++;
}
while ((x / rest) > 9)
rest = rest *10;
while (rest > 0)
{
    _putchar(x / rest + '0');
    x = (x % rest);
    rest = rest / 10;
    i++;
}
return (i);
} 
/**
 * print_string - prints a string.
 * @arg: The string to print, argument pointer.
 * Return: i.
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i = 0;

	if (s == NULL)
	s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * _print_percent - prints '%'.
 * @list: list of arguments.
 * Return: '%'.
 */
int _print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
#include"main.h"
/**
 * _print_char - Prints character.
 * @list: list of arguments.
 * Return: character to print
 */
int _print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

#include "main.h"
/**
 * get_func - check functions
 * @s: char
 * @ap: argument
 * Return: int
 */
int get_func(const char s, va_list ap)
{
	int i = 0, count = 0;
	printf_t ch[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},

	};
	while (ch[i].c != 0)
	{
		if (ch[i].c == s)
		{
			count = count + ch[i].fun(ap);
			return (count);
		}
		i++;
	}
	return (0);
}

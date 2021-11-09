#include"main.h"
/**
 * print - print a formated string
 * @format: string to print
 * @funcs: the list of functions
 * @args: the list of arguments passed into the program
 * Return: characters printed
 */
int print(const char *format, convert_t funcs[], va_list args)
{
	int i, j, fvalue;
	int count = 0;

		for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; funcs[j].sym != NULL; j++)
			{
				if (format[i + 1] == funcs[j].sym[0])
				{
					fvalue = funcs[j].f(args);
					if (fvalue == -1)
						return (-1);
					count += fvalue;
					break;
				}
			}
			if (funcs[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}

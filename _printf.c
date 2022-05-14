#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - mimic printf from stdio
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete identifier error
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *str = NULL;
	int charPrinted = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charPrinted++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				charPrinted++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				while (str[j] != '\0')
					;
				{
					_putchar(str[j]);
					charPrinted++;
					j++;
				}
				j++;
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				charPrinted++;
			}
		}
		i++;
	}

	/*
		if (format == NULL)
			return (-1);

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				charPrinted++;
				continue;
			}
			if (format[i + 1] == '%')
			{
				_putchar('%');
				charPrinted++;
				i++;
				continue;
			}
			if (format[i + 1] == '\0')
				return (-1);

			identifierPrinted = printIdentifiers(format[i + 1], arg);
			if (identifierPrinted == -1 || identifierPrinted != 0)
				i++;
			if (identifierPrinted > 0)
				charPrinted += identifierPrinted;

			if (identifierPrinted == 0)
			{
				_putchar('%');
				charPrinted++;
			}
		}
		*/

	va_end(args);
	return (charPrinted);
}

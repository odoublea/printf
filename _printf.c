#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * check_for_specifiers - checks if there is a valid format specifer
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, num = 0;
	int n_displayed = 0;
	char *str = NULL;

	va_start(args, format);

	while (format[i] != '\0')
	{

		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			_select_func(format[i + 1])(args);
			i++;
			n_displayed++;
		}

		i++;
	}

	va_end(args);

	return (n_displayed);
}

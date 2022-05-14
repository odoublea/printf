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
			/* format[i] == '%' */
			if (format[i + 1] == 'c')
			{
				_print_char(va_arg(args, int));
				n_displayed++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				_print_str(va_arg(args, char *));
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_print_char('%');
				n_displayed++;
			}
			else if (format[i + 1] == 'd')
			{
				i++;
				_print_int(va_arg(args, int));
			}
		}

		i++;
	}

	va_end(args);

	return (n_displayed);
}

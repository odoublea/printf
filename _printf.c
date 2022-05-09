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
				_putchar(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				j = 0;
				while (str[j] != '\0')
				{
					_putchar(str[j]);
					n_displayed++;
					j++;
				}
			}
			else if (format[i+1] == '%')
			{
				i++;
				_putchar('%');
				n_displayed++;
			}
			else if (format[i+1] == 'd')
			{
				i++;
				num = va_arg(args, int);

				while (num > 0)
				{
					_putchar('0' + (num % 10));
					num /=10;
					n_displayed++;
				}
			}
		}

		i++;
	}

	va_end(args);

	return (n_displayed);
}

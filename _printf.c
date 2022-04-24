#include "main.h"
#include <stdarg.h>

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		    _putchat(format[i]);
		else
		{
			/* format[i] == '%' */
			if (format[i+1] == 'c')
			_putchar(va_arg(args, int));
		}

		i++;
	}

	va_end(args);

	return (0);

}

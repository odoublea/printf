#include "main.h"
#include <stdarg.h>

int _printf(const char * const format, ...)
{
	int i = 0;

	while (format[i] != '\0')
	{
		_putchat(format[i]);
		i++;
	}

	return (0);

}

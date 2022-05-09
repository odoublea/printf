#include "main.h"
#include <stdarg.h>

int _print_str(va_list args)
{
    int j = 0;
    char *s = va_arg(args, char *);

    while (s[j] != '\0')
    {
        _putchar(s[j]);
        j++;
    }
    return (0);
}
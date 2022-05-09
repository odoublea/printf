#include "main.h"

void _print_str(char *s)
{
    int j = 0;

    while (s[j] != '\0')
    {
        _putchar(s[j]);
        j++;
    }
    return (0);
}
#include "main.h"
#include <stdarg.h>

int _print_int(int n)
{
    int num = 0;

    while (num > 0)
    {
        _putchar('0' + (num % 10));
        num /= 10;

        return (0);
    }
}
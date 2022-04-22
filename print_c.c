#include "main.h"
/**
 * print_c - a function prints a char
 * @c: character printed
 * Return: On success 1
 */
int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}

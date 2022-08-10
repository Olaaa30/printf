#include "main.h"

/**
 * print_char - prints a char
 * @args: arguments
 *
 * Return: number of arguments printed
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

#include "main.h"
/**
 * _puts - function to return number of string
 * @str: string
 * Return: number
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_str - function to return number of printed string
 * @args: arguments
 * Return: result
 */

int print_str(va_list args)
{
	return(_puts(va_arg(args, char *)));
}

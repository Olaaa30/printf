#include "main.h"
/**
 * print_numbers - function that returns number 
 * Return: number
 */
int print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
	n++;
	return (n);
}
/**
 * print_int - function to return number
 * @args: argument
 * Return: result
 */

int print_int(va_list args)
{
	return (print_number(va_arg(args, int)));
}

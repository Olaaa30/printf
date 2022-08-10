#include "main.h"
/**
 * print_numbers - function that returns number
 * Return: number
 */
int print_d(int n)
{
        unsigned int num = n;

        if (n < 0)
        {
                _putchar('-');
                num = -num;
        }
	if (n <= 9)
	{
		_putchar(num);
	}
	n++;
	return (num);
}
/**
 * print_int - function to return number
 * @args: argument
 * Return: result
 */

int print_dec(va_list args)
{
        return (print_d(va_arg(args, int)));
}


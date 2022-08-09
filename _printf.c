#include "main.h"

/**
 * _printf - prints chaars and strings to stcout
 * @format: format
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int printedNums = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				/**case 'c':
				*	printedNums += print_char(args);
				*	i += 2;
				*
				* 	break
				*/
				case 's':
					printedNums += print_str(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					printedNums++;
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}
		if (format[i])
		{
		_putchar(format[i]);
		printedNums++;
		}
		i++;
	}
	va_end(args);
	return (printedNums);
}

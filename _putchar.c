#include <unistd.h>
/**
 * _putchar - prinnt a char to stdout
 * @c: the char to print
 *
 * Return: alwasy 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

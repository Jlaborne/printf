#include "main.h"


/**
 * print_char - Print a character
 * @separator: The separator string to print before the character
 * @args: A va_list containing the character to print
 * Return: Always returns 0
 */
int print_char(va_list list)
{
	int c;

	c = va_arg(list, int);

	printf("%d", c);

	return (1);
}

#include "main.h"

/**
 * print_string - Print a string
 * @separator: The separator string to print before the string
 * @args: A va_list containing the string to print
 */
int print_string(va_list list)
{
	char *p;
	int i, p_len;

	i = 0;

	p = va_arg(list, char*);
	_putchar(p[i]);
	p_len = _strlen(p);

	return(p_len);
}

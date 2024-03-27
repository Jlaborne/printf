#include "main.h"

/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of numbers in decimal
 **/
int print_integer(va_list list)
{
	int num = va_arg(list, int);
	char buffer[20];
	char *ptr = buffer;
	int size = 0;
	char *p;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		size++;
	}

	else if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		*ptr++ = '0' + (num % 10);
		num /= 10;
		size++;
	}

	for (p = buffer + size - 1; p >= buffer; p--)
	{
		_putchar(*p);
	}
	return(size);
}

#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf -
 * @format:
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int size;

	va_list args;
    va_start(args, format);

	if (format == NULL)
		return(-1);

	va_start(args, format);

	size = _strlen(format);

	print_all(format, args);

	va_end(args);

	return (size);
}

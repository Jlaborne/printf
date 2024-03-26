#include "main.h"
#include <stddef.h>
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
		return (-1);

	va_start(args, format);

	size = _strlen(format);

	size = print_all(format, args);

	va_end(args);
	printf("%d\n", size);

	return (size);
}

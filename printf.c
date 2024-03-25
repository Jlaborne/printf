#include "main.h"
/**
 * _printf -
 * @format:
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 */

int _printf(const char *format, ...);
{
	int size;

	va_list args;

	if (format == NULL)
		return(NULL);

	va_start(args, format);

	size = _strlen(format);

	size = convert_check(format, args);
	va_end(args);

	return(size);
}

#include "main.h"

/**
 * print_all - Print values based on format string
 * @format: The format string
 * @...: Additional arguments depending on format string
 */
int print_all(const char *str, va_list list)
{
	format formats[] = {
		{'c', print_char},
		{'s', print_string},
		{0, NULL}
	};
	int size, i, j;

	size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%')
		{
			j = 0;
			i++;
			size--;

			if (str[i] != formats[j]._char && formats[j].f != NULL)
			{
				j++;
			}
			if (formats[j].f != NULL)
			{
				formats[j].f(list);
			}
			else
			{
				_putchar('%');
				size++;
			}
		}
		else
		{
		_putchar(str[i]);
		size++;
		}
	}

	return (size);
}

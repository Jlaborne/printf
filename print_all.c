#include "main.h"

/**
 * print_all - Print values based on format string
 * @format: The format string
 * @...: Additional arguments depending on format string
 */
int print_all(const char *str, va_list list)
{
	int size, i, character_count;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			character_count = percent_call(str, list, &i);
			if (character_count == -1)
				return (-1);

			size += character_count;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}


	return (size);
}

int percent_call(const char *str, va_list list, int *i)
{
	int size, j;

	format formats[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_integer},
		{'i', print_integer},
		{0, NULL}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	for (size = j = 0; formats[j]._char; j++)
	{
		if (str[*i] == formats[j]._char)
		{
			size = formats[j].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}

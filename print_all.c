#include "main.h"

/**
 * print_all - Print values based on format string
 * @format: The format string
 * @...: Additional arguments depending on format string
 */
void print_all(const char * const format, ...)
{
	f_dt form_types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	unsigned int i = 0;
	unsigned int j = 0;



	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			while (form_types[j].type != NULL && (format[i] + 1) != *(form_types[j].type))
			{
				j++;
			}

			if (form_types[j]._char != NULL)
			{
				form_types[j].f(args);
			}
		}
	i++;

	}
	
	printf("\n");

}

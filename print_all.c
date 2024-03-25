#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)

{
    va_list args;
	f_dt form_types[] = {
		{ "c", print_char },
		{ "s", print_string },
        { "%%", print_percent }
	};
    unsigned int i = 0;
	unsigned int j = 0;
	char *separator = " ";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < sizeof(form_types) / sizeof(form_types[0]))
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
                break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");

}
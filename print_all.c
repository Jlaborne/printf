#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Print values based on format string
 * @format: The format string
 * @...: Additional arguments depending on format string
 */
void print_all(const char * const format, ...)
{
    va_list args;
	   unsigned int i = 0;
		unsigned int j;
	char *separator = " ";
	
	 struct f_dt {
        const char *identifier;
        void (*f)(char *, 
		} va_list);form_types[] = {
		{ "c", print_char },
		{ "s", print_string },
        { "%%", print_percent }
	};

	
	va_start(args, format);

	  while (format != NULL && format[i]) {
        for (j = 0; j < sizeof(form_types) / sizeof(form_types[0]); j++) {
            if (format[i] == *form_types[j].identifier) {
                form_types[j].f(separator, args);
                separator = ", ";
                break;
            }
        }
        i++;
    }

	va_end(args);
	printf("\n");

}
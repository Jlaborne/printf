#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdarg.h>


int _strlen(const char *str);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char _char;
	int (*f)(va_list);
} format;

int _putchar(char);
int _printf(const char *format, ...);
int print_all(const char *str, va_list list);
int _strlen(const char *s);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif

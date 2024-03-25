#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int _putchar(char c);

int _printf(const char *format, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_string(char *separator, va_list args);
void print_percent(char *separator, va_list args);

int _strlen(const char *s);
/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char *type;
	int (*f)(char *separator, va_list args);
} frmt_id;

#endif

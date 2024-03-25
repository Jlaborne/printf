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
	char *_char;
	void (*f)(char *separator, va_list args);
} f_dt;

int _putchar(char c);
int _printf(const char *format, ...);
void print_all(const char * const format, ...);
int _strlen(const char *s);
void print_char(char *separator, va_list args);
void print_string(char *separator, va_list args);
void print_percent(char *separator, va_list args);

#endif

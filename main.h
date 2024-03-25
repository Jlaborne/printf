#ifndef PRINTF_H
#define PRINTF_H

int _printf(const char *, ...);

int _putchar(char);
int print_string(va_list);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif

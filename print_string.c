#include "main.h"
#include <stdio.h>

/**
 * print_string - Print a string
 * @separator: The separator string to print before the string
 * @args: A va_list containing the string to print
 */
void print_string(char *separator, va_list args)
{
    printf("%s%s", separator, va_arg(args, char *));
}

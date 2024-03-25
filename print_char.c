#include "main.h"
#include <stdio.h>

/**
 * print_char - Print a character
 * @separator: The separator string to print before the character
 * @args: A va_list containing the character to print
 * Return: Always returns 0
 */
void print_char(char *separator, va_list args)
{
    printf("%s%c", separator, va_arg(args, int));   
}
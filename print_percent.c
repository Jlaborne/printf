#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int print_percent(char *separator, va_list args)
{
   
    int percent_value = va_arg(args, int);

    printf("%d%%", percent_value);

    return (0);
}
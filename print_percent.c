#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print_percent(char *separator, va_list args)
{
   
  int percent_value = va_arg(args, int);
    printf("%s%d%%", separator, percent_value);
}
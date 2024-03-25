#include "main.h"

int print_char(char *separator, va_list args)
{
    printf("%s%c", separator, va_arg(args, int));   
}
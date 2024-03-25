#include "main.h"

void print_string(va_list arg)
{
	
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, str);
}

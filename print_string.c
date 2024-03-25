#include "main.h"

void print_string(va_list arg)
{
	unsigned int i;
	char *str = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}

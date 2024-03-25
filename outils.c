#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @str: pointer to a string
 *
 * Description: Print the length of the string
 * Return: length, the size of the string
 */
int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}



#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: pointer to a string
 *
 * Description: Print the length of the string
 * Return: length, the size of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

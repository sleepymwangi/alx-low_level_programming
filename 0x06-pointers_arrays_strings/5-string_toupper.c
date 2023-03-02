#include "main.h"

/**
 * string_toupper - converts all lowercase letters in a string to uppercase
 * @str: the string to convert
 *
 * Return: a pointer to the converted string
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - ('a' - 'A');
		}
	}
	return (str);
}

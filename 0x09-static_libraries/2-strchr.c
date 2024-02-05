#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: The string to be searched.
 * @c: The character to search for.
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return (NULL);
}

#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to be searched
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b)
		{
			a++;
			b++;
		}
		if (!*b)
			return (haystack);
	}
	return (NULL);
}

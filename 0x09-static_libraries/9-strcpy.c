#include "main.h"
/**
 * _strcpy - program copies the string point to by src to the buffer pointed
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (src[b] != '\0')
	{


		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

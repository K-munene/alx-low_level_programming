#include "main.h"
/**
 * _strcmp - compares the two strings lexicographically
 * @s1: the first string
 * @s2: the second string
 *
 * Return: An integer less than, equal to or greater than zero if s1 is found.
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	a++;
	}
	return (0);
}

#include "main.h"
#include "stdlib.h"
/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the conc... string
 * which memory was allocated for
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = a1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}

		k++;

	}

	s[k] = '\0';
	return (s);
}





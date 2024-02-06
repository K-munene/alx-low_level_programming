#include <stdio.h>
/**
 * main - to print all arguments received
 * @argc: number of command line argument
 * @argv: array that contains the command line argument
 *
 * Return: (0); when successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

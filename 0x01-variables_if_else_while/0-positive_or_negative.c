#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generate random numbers to detect -ve or +ve
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND _ MAX / 2;
	if (n > 0)
	
		printf("%d is possible\n", n);
	
	else if (n == 0)
	
		printf("%d is zero\n", n);
	
	else
	
		printf("%d is negative\n", n);
	
	return (0);
}

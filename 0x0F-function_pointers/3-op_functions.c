#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - the sum of the two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub: subtract the two numbers
 * @a: the first number
 * @b the second number
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_multip - multiply the two numbers
 * @a: the first number
 * @b: the seconf number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: result of division between a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder after the division of the two numbers
 * @q: the first number
 * @b: the second number
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

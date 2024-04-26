#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - to select the option that is to perform arithmetic op
 * @s: the operator argument
 *
 * Return: the result of the selected choice
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}

	};
	int i;

	/* initializes i */
	i = 0;

	/* s does not match any of said operands */
	while (ops[i].op != NULL && * (ops[i].op != *s)
		i++;

	return (ops[i].f); /* return operation */
}

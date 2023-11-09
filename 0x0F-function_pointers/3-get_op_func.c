#include "3-calc.h"

/**
 * get_op_func - function pointer to selected operation to perform action
 * @s: given operator
 * Return: pointer to function which corresponds to operation
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
	int z = 0;

	while (ops[z].op)
	{
		if (strcmp(ops[z].op, s) == 0)
			return (ops[z].f);
		z++;
	}

	return (NULL);
}

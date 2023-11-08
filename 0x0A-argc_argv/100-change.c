#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints min numb of coins to change for amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int numb, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);
	result = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && numb >= 0; i++)
	{
		while (numb >= coins[i])
		{
			result++;
			numb -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}

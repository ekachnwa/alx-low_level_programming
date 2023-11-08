#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts str to integer
 * @s: str converted
 *
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int i, d, n, l, f, digt;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	digt = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digt = s[i] - '0';
			if (d % 2)
				digt = -digt;
			n = n * 10 + digt;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	result = numb1 * numb2;

	printf("%d\n", result);

	return (0);
}

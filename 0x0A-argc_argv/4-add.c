#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: int
  * @argv: list
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;
	int c;
	int sum;
	char *s;

	sum = 0;
	c = 0;
	i = 1;

	while (i < argc)
	{
		s = argv[i];

		while (s[i] != '\0')
		{
			if (s[i] < '0' || s[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		i++;
	}

	for (i = 1; i < argc; i++)
	{
		c = atoi(argv[i]);
		sum += c;
	}
	printf("%d\n", sum);
	return (0);
}

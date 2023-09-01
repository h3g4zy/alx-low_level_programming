#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers and print the result
  * @argc: int
  * @argv: list
  * Return: 0
  */

int main(int argc, char const *argv[])
{
int res;
(void)*argv;

if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}

return (0);
}

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
int res;
char *c;

while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > 9)
return(printf("Error\n"), 1);
res += atoi(argv[argc]);
}
printf("%d\n", res);
return (0);
}

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
(void)*argv;

for (int i = 0; i < argc; i++)
{
  if (atoi(argv[i]) < '0' || atoi(argv[i] > '9'))
  {
    printf("Error\n");
    return (1);
  }
  else
  {
    res += atoi(argv[i]);
  }
}
printf("%d\n", res);
return (0);
}

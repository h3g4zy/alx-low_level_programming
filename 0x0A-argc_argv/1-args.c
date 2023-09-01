#include <stdio.h>

/**
  * main - prints number of arguments passed
  * @argc: int
  * @argv: list
  * Return: 0
  */

int main(int argc, char const *argv[])
{
(void)*argv;
printf("%d\n", argc - 1);
return (0);
}

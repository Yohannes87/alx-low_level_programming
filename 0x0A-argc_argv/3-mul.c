#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multipiles two numbers
 *@argc: number of argument
 *@argv: array of argument
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int i, j, mult;

if (argc <= 2)
{
	printf("Error\n");
	return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
mult = i *j;

printf("%d\n", mult);
return (0);
}

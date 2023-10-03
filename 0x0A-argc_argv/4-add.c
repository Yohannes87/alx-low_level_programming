#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that adds positive numbers.
 *@argc: number of arguments
 *@argv: number of array
 *Return: 1 or 0
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("eror\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

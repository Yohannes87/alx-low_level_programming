#include <stdio.h>
/**
 *main - program that print the umber argument 
 *@args: this is argument count
 *@argv: this is the argument vector
 *Return: always 0
 */
int main(int args, char *argc[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

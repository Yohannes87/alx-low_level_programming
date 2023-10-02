#include <stdio.h>
/**
 *main - print programe name
 *@argc: the number of argument
 *@argv: an array of pointer to the arguments.
 *Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

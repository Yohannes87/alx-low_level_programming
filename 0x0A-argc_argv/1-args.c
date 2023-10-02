#include <stdio.h>
#include "main.h"
/**
 *main - print the number arguments
 *@argc: this number arguments
 *@argv: array argument
 *Return: always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

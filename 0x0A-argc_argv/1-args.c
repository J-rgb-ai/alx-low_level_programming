#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: argument's vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

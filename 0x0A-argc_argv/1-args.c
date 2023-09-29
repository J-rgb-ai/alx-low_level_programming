#include <stdio.h>
#include "main.h"
/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}

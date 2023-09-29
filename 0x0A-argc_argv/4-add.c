#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - start point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success 1 failure
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

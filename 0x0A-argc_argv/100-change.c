#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument count
 * @argv: argument's vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;

	coins += cents / 25;
	coins %= 25;

	coins += cents / 10;
	coins %= 10;

	coins += cents / 5;
	coins %= 5;

	coins += cents / 2;
	coins %= 2;

	coins += cents;

	printf("%d\n", coins);

	return (0);
}

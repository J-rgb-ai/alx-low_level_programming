#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * is_valid_number - checks if a string contains only digit
 * @str: the input string
 *
 * Return: 1 if sting contains only digits, 0 otherwise
 */
int is_valid_number(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two positive numbera=s
 * @num1: first number of a string
 * @num2: second number of a string
 *
 * Return: none
 */
void multiply(const char *num1, const char *num2)
{
	int len1;
	int len2;
	int result_len;
	int *result;
	int i, j;
	int start;
	int product, sum;

	len1 = strlen(num1);
	len2 = strlen(num2);
	result_len = len1 + len2;
	result = (int *)calloc(result_len, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			sum = product + result[i + j + 1];
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	start = 0;

	while (start < result_len && result[start] == 0)
	{
		start++;
	}

	putchar('\n');
	free(result);
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv:array of strings representing the arguments
 *
 * Return: 0, 98 iif there is an error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');

		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}

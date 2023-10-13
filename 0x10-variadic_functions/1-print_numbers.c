#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: separates numbers
 * @n: numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int j = 1;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (j < n)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		i++;
		j++;
	}
	printf("\n");
	va_end(args);
}

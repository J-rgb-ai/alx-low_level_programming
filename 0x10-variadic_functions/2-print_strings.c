#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: number of times the loop iterates
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int j = 1;
	const char *str;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);
		if  (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
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

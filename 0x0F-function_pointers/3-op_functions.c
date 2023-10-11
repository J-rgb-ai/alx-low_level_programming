#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * op_add - performs addition
 * @a: first int
 * @b: second int
 * Return: integer result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - performs subtraction
 * @a: first integer
 * @b: second integer
 * Return: int result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - performs multiplication
 * @a: first integer
 * @b: second integer
 * Return: int result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - performs division on integers
 * @a: first integer
 * @b: second integer
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - performs modulud for two nuumbers
 * @a: first int
 * @b:second int
 * Return: integer result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

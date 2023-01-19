#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: int a
 * @b: int b
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of multiplication of a and b
 * @a: int a
 * @b: int b
 * Return: product of multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a and b
 * @a: int a
 * @b: int b
 * Return: result of the division of a and b
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
 * op_mod - returns remainder of the division of a and b
 * @a: int a
 * @b: int b
 * Return: remainder of the division of a and b
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

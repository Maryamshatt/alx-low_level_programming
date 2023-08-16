#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two numbers
 * @a: The first number
 * @b: the secound number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return the difference of two numbers
 * @a: the first number
 * @b: the secound number
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers
 * @a: the first number
 * @b: the secound number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the division of two number
 * @a: the first number
 * @b: the secound number
 *
 * Return: the quotent od a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: the first number
 * @b: the secound number
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#include "3-calc.h"

/**
 * main - perfoms simple arthmetic operations
 *
 * @argc: number of the arguments, passed to the program.
 * @argv: arguments, passed to the program
 *
 * Return: 0, always success.
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = get_op_func(argv[2])(a, b);
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	exit(98);
}

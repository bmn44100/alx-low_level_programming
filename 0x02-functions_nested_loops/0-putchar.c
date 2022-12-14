#include <stdio.h>
#include "main.h"

/**
 * main - prints putchar
 *
 * Description: prints putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}

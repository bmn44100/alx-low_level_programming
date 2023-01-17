#include <stdio.h>
#define _FILE_

/**
 * main - prints the name of the file it was compiled from
 * Return: 0, always success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

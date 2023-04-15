#include <stdio.h>

/**
 * main - prints the number of arguments passed to it.
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 - success
 */

int main(int argc, char* argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}

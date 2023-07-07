#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program prints all the arguments it receives,
 *              one argument per line, ending with a new line.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
	printf("%s\n", argv[i]);
	i++;
	}

	return (0);
}

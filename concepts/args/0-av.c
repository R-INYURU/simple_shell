#include <stdio.h>
#include <unistd.h>

/**
 * main - print av args without using ac
 * @ac: number of args passed
 * @av: list of args passed
 *
 * Return: (int) always 0
 */
int main(int ac, char **av)
{
	int i;

	if (ac < 2)
	{
		printf("few arguments passed!\n");
		return (0);
	}
	for (i = 0; i < ac; i++)
		printf("[%d] - %s\n", i, av[i]);

	return (0);
}

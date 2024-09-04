#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 * @ac: number of args passed
 * @av: args array
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int i;
	char *found;

	if (ac < 2)
		{
			printf("not enough args passed!\n");
			return (0);
		}
	for (i = 1; i < ac; i++)
		{
			found = strtok(av[i], " ");
			while (found)
				{
					printf("\t{%s}\n", found);
					found = strtok(NULL, " ");
				}
		}

	return (0);
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: always 0
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char *envp[] = {"some", "environment", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, envp) == -1)
		{
			perror("Error: ");
		}
	printf("\nAfter execve\n");
	return (0);
}

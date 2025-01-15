#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *buffer;
	size_t bufsize = 32;
	
	buffer = (char *)malloc(sizeof(char) * bufsize);
	if (buffer == NULL)
		{
			printf("Unable to allocate buffer");
			return  (1);
		}
	printf("$ ");
	getline(&buffer, &bufsize, stdin);
	printf("%s", buffer);

	return (0);
}

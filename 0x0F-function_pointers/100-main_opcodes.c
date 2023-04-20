#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: array of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", arr[i]);
		if ((bytes - 1) == i)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}

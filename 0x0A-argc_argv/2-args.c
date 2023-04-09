#include "main.h"
#include <stdio.h>
/**
 * main - prints all args content
 * @argc: argument count
 * @argv: argument vctor
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

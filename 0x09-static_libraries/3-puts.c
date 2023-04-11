#include "main.h"
#include <stdio.h>

/**
 * _puts - prints strings followed by a newline to stdout
 * @s: the string to print
 *
 *  Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}

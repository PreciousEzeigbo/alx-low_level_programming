#include "main.h"
/**
 * _puts - prints strings
 * @str: function parameter
 * Return: 0
 */
void _puts(char *str)
{
	int start = 0;

	while (str[start])
		start++;
	while (start--)
		_putchar(str[start]);
	_putchar('\n');
}

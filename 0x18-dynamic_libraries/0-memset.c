#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: memory are
 * @b: constant byte
 * @n: bytes filled
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; < n; i++)
		*(s + i) = b;

	return (s);
}

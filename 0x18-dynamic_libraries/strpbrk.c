#include "main.h"
/**
 * _strpbk - searches a string for any  bytes
 * @s: first string
 * @accept: second string
 * Return: a pointer to thr nyte if otherwise NULL
 */
char *_strpbk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept +j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}

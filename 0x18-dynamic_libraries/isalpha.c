#include "main.h"
/**
 * _isalpha - check if char is alphabet cha
 * @c: typr int character
 * Return: 1 if letter, o if otherwise
 */
int _isalpha(int c)
{
	if ((c > 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

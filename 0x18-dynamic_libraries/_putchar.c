#include <unistd.h>
/**
 * _putchar - writes the chsrscter c to stdout
 * @c: ....
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

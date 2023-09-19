#include <unistd.h>
/**
 * _putchar -writes the charactes c to stdout
 * @c: The character to print
 *
 * Return: on succcess
 * on error, -1 is returned, and errno is set appropristtely.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

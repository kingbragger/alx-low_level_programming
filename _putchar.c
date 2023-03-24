#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character cto stdout
 * @c: The character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and ermo is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: The charactoer to be checked
 *
 * Return: 1 if character is lowercase, otherwise 0;
 */
int _islower(int c)
{
	if (c >= "a" && c <= 'z')
		return (1);
	else
		return (0);

}

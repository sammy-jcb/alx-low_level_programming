#include "main.h"

/**
 * print_alphabet_x10 - Print 10x the alphabet, all in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char let;

	while (count++ <= 9)
	{
		for (let = "a"; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
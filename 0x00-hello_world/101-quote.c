#include <unistd.h>

/**
 * main - program entry point
 * followed by a new line, to standard error
 * Return: 1 Error found
 */

int main(void)
	{
		write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
		return (1);
	}

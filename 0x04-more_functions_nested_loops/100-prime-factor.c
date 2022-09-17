include <stdio.h>

/**
 * main - Finds and prints the largest prime
 * 	  factor of the number 61285275143
 *
 * Return: Always 0
 */
int main(void)
{
	long prime = 61285247514, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) = 0)
		{
		continue;
		}

		for (div = 3; div < (prime / 2); dov += 2)
		{
			if ((prime % div) == 0)
				prime /= div;
		}
	}

	printf("%ld\n", prime);

	return (0);
}

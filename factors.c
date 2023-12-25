#include <stdio.h> /* printf & file ops*/
#include <stdlib.h> /* atoi */
#include <math.h> /* sqrt */

/**
 * factors - A function that factorize as many numbers as possible into
 *           a product of two smaller numbers.
 * @argc: The argument count.
 * @argv: The argument passed.
 * Return: 0 (success).
 */
int factors(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		return (-1);
	}

	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		printf("Unable to open file: %s\n", argv[1]);
		return (-1);
	}

	char line[256];

	while (fgets(line, sizeof(line), file))
	{
		int idx, number = atoi(line);

		for (idx = 2; idx <= sqrt(number); idx++)
		{
			if (number % idx == 0)
			{
				break;
			}
		}
		printf("%d=%d*%d\n", number, idx, number / idx);
	}
	fclose(file);
	return (0);
}

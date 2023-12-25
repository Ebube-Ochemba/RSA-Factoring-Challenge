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
int main(int argc, char *argv[])
{
	FILE *file;
	char line[256];
	long long int idx, number;

	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		return (-1);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("Unable to open file: %s\n", argv[1]);
		return (-1);
	}

	while (fgets(line, sizeof(line), file))
	{
		number = atoll(line);

		for (idx = 3; idx <= sqrt(number); idx+= 2)
		{
			if (number % idx == 0)
			{
				break;
			}
		}
		printf("%lld=%lld*%lld\n", number, number / idx, idx);
	}
	fclose(file);
	return (0);
}

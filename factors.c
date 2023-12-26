#include <stdio.h> /* printf & file ops*/
#include <stdlib.h> /* atoi */
#include <math.h> /* sqrt */
#include <stdbool.h> /* true/false */

/**
 * main - A function that factorize as many numbers as possible into
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
	bool factorFound = false;

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
		factorFound = false;

		if (number % 2 == 0)
		{
			printf("%lld=%lld*2\n", number, number / 2);
			continue;
		}
		for (idx = 3; idx <= sqrtl(number); idx += 2)
		{
			if (number % idx == 0)
			{
				printf("%lld=%lld*%lld\n", number, number / idx, idx);
				factorFound = true;
				break;
			}
		}
		if (!factorFound)
			printf("%lld=%lld*1\n", number, number);
	}
	fclose(file);
	return (0);
}

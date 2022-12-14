#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: input string parameter
 * Return: Nothing
 */

void rev_string(char *s)
{
	int count = 0, i, k;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (k = i + 1; k > 0; k--)
		{
			temp = *(str + k);
			*(str + k) = *(str + (k - 1));
			*(str + (k - 1)) = temp;
		}
	}
}

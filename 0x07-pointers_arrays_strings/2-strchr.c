#include "main.h"
/**
 * _strchr - Entry point
 * @b: input
 * @a: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *b, char a)
{
	int i = 0;

	for (; b[i] >= '\0'; i++)
	{
		if (b[i] == a)
			return (&b[i]);
	}
	return (0);
}

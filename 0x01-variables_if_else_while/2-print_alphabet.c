#include<stdio.h>
/**
 * main - prints the alphabet
 * Return: 0 always
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 20, i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
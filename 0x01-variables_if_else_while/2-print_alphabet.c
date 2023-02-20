#include <stdio.h>

/**
 * main - prints alphabets in lower cases
 *
 * Return: Always return 0 (sucess)
 */

int main(void)
{
	char alp[26] = "abcdefghijkllmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar ("\n");
	return (0);
}

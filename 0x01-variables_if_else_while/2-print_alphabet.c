#include <stdio.h>

/**
 * main - prints alphabets in lower cases
 *
 * Return: Always return 0 (sucess)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

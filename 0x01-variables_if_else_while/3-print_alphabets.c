#include <stdio.h>

/**
 * main - prints the alphabets in lowercase, then uppercase,
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

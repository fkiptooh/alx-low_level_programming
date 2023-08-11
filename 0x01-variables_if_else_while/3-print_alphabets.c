#include <stdio.h>
/**
 * main - A program that prints upper and lowercase
 * Return:0 (Success)
*/
int main(void)
{
	char ca;

	for (ca = 'a'; ca <= 'z'; ca++)
		putchar(ca);
	for (ca = 'A'; ca <= 'Z'; ca++)
		putchar(ca);
	putchar('\n');
	return (0);
}

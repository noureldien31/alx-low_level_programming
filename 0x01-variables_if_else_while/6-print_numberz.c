#include <stdio.h>

/**
* main - Entry point
* Description: Print numbers from 0 to 9 whith their ascii.
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

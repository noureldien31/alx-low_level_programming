#include "main.h"

/**
 * *_strcpy - copies the string pointed to by alx
 * to the mera
 * @nour: pointer to the buffer
 * @alx: str to be copied
 *
 * Return: the pointer to nour
 */
char *_strcpy(char *nour, char *alx)
{
	int len, i;

	len = 0;

	while (alx[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		nour[i] = alx[i];
	}
	nour[i] = '\0';

	return (nour);
}

#include "main.h"
/**
 * _strlen - string length
 * @c: parameter
 * Return: string length
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	return (i);
}

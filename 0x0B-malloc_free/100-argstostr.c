#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets string length
 * @str: string
 * Return: length (int)
 */

int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * argstostr - concatenates all the arguments to a program
 * @ac: argc - number of arguments
 * @av: argv - array of arguments
 * Return: pointe to new string
 */

char *argstostr(int ac, char **av)
{
	int len, i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}

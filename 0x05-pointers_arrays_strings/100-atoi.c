#include "main.h"

/**
 * _atoi - converts a string to integer
 *  @s: char string parameter
 * Return: this returns (firstNum) the first integer that is
 * found in the string, if not returns (0)
 */

int _atoi(char *s)
{
	int i;
	int _c, neg;

	_c = 0;
	neg = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			neg *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (_c < 0)
				_c = (_c * 10) - (s[i] - '0');
			else
				_c = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (neg < 0)
		_c *= -1;

	return (_c);
}

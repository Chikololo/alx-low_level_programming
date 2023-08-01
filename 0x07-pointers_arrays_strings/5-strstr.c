include "main.h"
/**
 * _strstr - Entry point
 * @haysack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haysack, char *needle)
{
	for (; haysack != '\0'; haysack++)
	{
		char *I = haysack;
		char *p = needle;

		while (*I == *p && *p != '\0')
		{
			I++;
			p++;
		}

		if  (*p == '\0')
			return (haysack);
	}
	return (0);
}

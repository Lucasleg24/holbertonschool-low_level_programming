#include "main.h"

/**
 * *_strstr - compare string
 * @haystack: string 1
 * @needle: string 2
 * Return: null or haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0' && *needle != '\0')
	{
		if (*haystack != *needle)
		{
			haystack++;
		}
		if (*haystack == *needle)
			{
				while (haystack[i] != '\0' && needle[i] != '\0')
				{
					i++;
				}
				if (needle[i] == '\0')
				{
					return (haystack);
				}
			}
	}
	return ('\0');
}

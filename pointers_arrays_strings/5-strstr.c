#include "main.h"
#include <stdio.h>

/**
 * *_strstr - compare string
 * @haystack: string 1
 * @needle: string 2
 * Return: null or haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle[0] == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*haystack == needle[0] && *(haystack + 1) == needle[1])
		{
			for (i = 0; needle[i]; i++)
			{
				if (haystack[i] != needle[i])
				{
					break;
				}
				if (needle[i + 1])
				{
					return (haystack);
				}
			}
		}
		haystack++;
	}
	return ('\0');
}

#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: The string to check
* @c: The string to be located
*
* Return: on success, a pointer to the first occurence
* of the charcter c in the string.
* on failure, null.
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
		if (*s == c)
			return (s);
		else
			return (NULL);
}

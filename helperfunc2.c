#include "main.h"
/**
 * _strcpy - cp string
 * @dest: dest
 * @src: src
 * Return:return
 */
char *_strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - concatenates two strings
 * @dest: dsr
 * @src: srct
 * Return: rtrn
 */
char *_strcat(char *dest, const char *src)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (result);
}
/**
 * concat_st - joins two strings
 * @str1: s1
 * @str2: s2
 * Return: return
 */
char *concat_st(char *str1, char *str2)
{
	int len1 = stringlength(str1);
	int len2 = stringlength(str2);
	char *result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		perror("memory allocation failed");
		exit(1);
	}
	result = _strcpy(result, str1);
	result = _strcat(result, str2);
	return (result);
}

/**
 * _strncmp - compares two strings
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (*s1 == '\0' || *s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
/**
 * _strdup - memory recoeves content
 * @str: str
 * Return: return
 */
char *_strdup(const char *str)
{
	int n, i;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		;
	}
	newstr = malloc(sizeof(char) * (n + 1));
	if (newstr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			newstr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (newstr);
}

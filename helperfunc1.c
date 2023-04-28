#include "main.h"

/**
 * readline - readline
 * Return: return
 */
char *readline()
{
	char *input = NULL;
	size_t size = 0;

	if (getline(&input, &size, stdin) == -1)
	{
		free(input);
		return (NULL);
	}
	return (input);
}

/**
 * printline - wstdin recieves text
 * @str: str
 */
void printline(char *str)
{
	size_t len = stringlength(str);

	write(STDOUT_FILENO, str, len);
}

/**
 * stringlength -  strLwngth
 * @str: str
 * Return: return
 */
int stringlength(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * my_strcmp - compares two strings
 * @str1: s1
 * @str2: s2
 * Return: return
 **/
int my_strcmp(const char *str1, const char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

/**
 * stringToerror - string to error
 * @str: Error
 */
void stringToerror(char *str)
{
	size_t len = stringlength(str);

	write(STDERR_FILENO, str, len);
}


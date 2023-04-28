#include "main.h"

/**
 * _memcpy - to copy memory
 * @dest: dest
 * @src: src
 * @n: n
 * Return: return
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *pdest = dest;
	const char *psrc = src;
	size_t i;

	for (i = 0; i < n; i++)
	{
		pdest[i] = psrc[i];
	}
	return (dest);
}

/**
 * _realloc - allocates memory from heap
 * @ptr: pointer
 * @size: size
 * Return: return
 */
void *_realloc(void *ptr, size_t size)
{
	if (size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (malloc(size));
	}
	else
	{
		void *new_ptr = malloc(size);

		if (new_ptr == NULL)
		{
			return (NULL);
		}
		_memcpy(new_ptr, ptr, size);
		free(ptr);
		return (new_ptr);
	}
}

/**
 * _printenv -  prints the environment
 * Return: value on succesful termination
 */
int _printenv(void)
{
	int i = 0;

	while ((environ[i]))
	{
		printline(environ[i]);
		printline("\n");
		i++;
	}

	return (0);
}

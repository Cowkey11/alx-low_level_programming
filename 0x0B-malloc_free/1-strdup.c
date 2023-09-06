#include "main.h"

/*
 * _strdup()-function returns duplicate copy of a string.
 * @*str-the string to be duplicated.
 *
 * return - pointer to duplicate copy of string in newly allocated space in memory.
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int size = 0;
	unsigned int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		size = (size + 1);
	}

	ptr = (char *)malloc((size * sizeof(char)) + 1);

	for (index = 0; index < size; index++)
	{
		ptr[index] = str[index];
	}

	if (ptr[0] == '\0')
	{
		return(NULL);
	}
	else
		return(ptr);
}

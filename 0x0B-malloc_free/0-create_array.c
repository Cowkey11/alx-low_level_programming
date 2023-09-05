#include "main.h"

/*
*@create_array() - function creates array of characters and initializes it with char c.
*@size - size of the array
*@c - the initializing char
*returns - pointer to the array, else returns NULL on error.
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return(NULL);
	}
	else
	{
		int index;

		for(index = 0; index < size; index++)
		{
			ptr[0] = c;
		}
		return(ptr);
	}
}

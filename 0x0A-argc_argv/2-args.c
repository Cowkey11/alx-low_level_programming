#include "main.h"

/*
 * program prints all argments it receives.
 *
 * return: 0 if successful, otherwise on error.
 */

int main(int argc, char* argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

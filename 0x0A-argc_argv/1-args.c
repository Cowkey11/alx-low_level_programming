#include "main.h"

/*
 * program prints number of CML arguments passed to it
 *
 * return - 0 if successful, otherwise error.
 */

int main(int argc, char* argv[] __attribute__((unused)))
{
	int arguments_no;

	arguments_no = argc - 1;
	printf("%d\n", arguments_no);
	return (0);
}

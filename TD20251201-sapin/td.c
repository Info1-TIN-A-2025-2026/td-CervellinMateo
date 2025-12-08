#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int nh = atoi(argv[1]);

	for (int l = 1; l <= n; l++)
	{
		for(int c = 0; c < n - l; c++)
			putchar(' ');
		for (int c = 0; c < (2 * l - 1); c++)
			putchar('*');
		putchar('\n');
	}

	for (int l = 0; l < 2; l++)
	{
		
	}

		return 0;
}
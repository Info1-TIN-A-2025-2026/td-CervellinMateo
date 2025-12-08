#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[])
{

	srand(time(NULL));

	for (int i = 5; i > 0; i--)
	{
		printf("%d\n", rand());
	}
	return 0;
}
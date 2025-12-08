#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	unsigned long n = atol(argv[1]);
	double f = 0;
	double a = 0;
	double P = 0;

	for (int i = 0; i <= n; i++)
	{
		f = (pow(-1, i)) / (2 * i + 1);
		a = a + f;
	}

	P = 4*a;
	printf("%lf\n", P);
	return 0;
}
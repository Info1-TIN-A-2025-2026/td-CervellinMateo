#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	// int a = 0, b = 0, q = 0, r = 0;

	// printf("Entrer a: ");
	// scanf("%d", &a);

	// printf("\nEntrer b: ");
	// scanf("%d", &b);

	// q = a / b;
	// r = a % b;

	// printf("a/b = %d\n", q);
	// printf("a%%b = %d\n", r);

	// int a = 10;

	// printf("%d\n", a++);

	// a = 10;

	// printf("%d\n", ++a);

	// unsigned char n = 255;

	// printf("%d", ++n);

	const unsigned int I_MIN = 2, I_MAX = 100000;

	unsigned int i = 0;

	for (i = I_MIN; i <= I_MAX; i++)
	{
		bool is_prime = true;
		for (unsigned int n = I_MIN; n <= i - 1; n++)
		{
			if(i%n == 0)
				is_prime = false;
		}

		if (is_prime)
			printf("%u \n", i);
	}
	puts("");
	return 0;
}
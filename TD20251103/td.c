// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, const char *argv[])
// {
// 	const unsigned int BASE = 10;

// 	int n = 0;
// 	int w = 0;

// 	printf("Le nombre: ");
// 	scanf("%d", &n);
// 	n = abs(n);
// 	while (n > 0)
// 	{
// 		n /= BASE;
// 		w++;
// 	}
// 	printf("Il contient %d digits\n", w);
// }
//**************************************************************************************

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	unsigned int n, w = 0;

	n = atoi(argv[1]);

	do
	{
		w *= 10;
		w += n % 10;
		n /= 10;
	} while (n > 0);

	printf("%u", w);

	return 0;
}

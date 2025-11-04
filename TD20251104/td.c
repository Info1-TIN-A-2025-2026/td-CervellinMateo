#include <stdio.h>

// int main(void)
// {
// 	unsigned int i = 0;
// 	const unsigned int V_MIN = 10, V_MAX = 20;

// 	do
// 	{
// 		printf("Enter a integer value in range [%u..%u]: ", V_MIN, V_MAX);
// 		if (scanf("%u", &i) != 1)
// 		{
// 			while(getchar()!='\n')
// 				;
// 			// char c = 0;
// 			// do
// 			// {
// 			// 	c = getchar();
// 			// } while (c == '\0');
// 		}
// 	} while ((!(i >= 10)) || (!(i <= 20)));

// 	printf("i=%u\n", i);
// }

int main(void)
{


	unsigned int state = 0;

	printf("Enter the state(ON=1, OFF=2, BLINK=4): ");

	scanf("%u", &state);
	switch (state)
	{
	case 1:
		printf("ON\n");
		break;
	case 2:
		printf("OFF\n");
		break;
	case 4:
		printf("BLINK\n");
		break;

	default:
		printf("ERROR\n");
		break;
	}

	return 0;
}

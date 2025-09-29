#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("Number of seconds: ");

	int s = 0; // signed implicite
	scanf("%d",&s);

	if (s<0)
	{
		puts("ERROR");
	}
	else if (s>=86400)
	{
		puts("OVERFLOW");
	}
	else 
	{
		unsigned int hours = 0;
		unsigned int minutes = 0;
		unsigned int secondes = 0;

		hours = s / 3600;
		minutes = s / 60 - hours * 60;
		secondes = s - minutes * 60 - hours * 3600;

		printf("%02u:%02u:%02u\n", hours,minutes,secondes);
	}
}
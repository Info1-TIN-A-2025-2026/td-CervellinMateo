#include <stdio.h>

int main(int argc, const char *argv[])
{
	double m1 = 0;
	double m2 = 0;
	double dist = 0;
	double F = 0;
	const double G = 6.67e30;
	printf("Calculateur de force gravitationnel:\n\tMasse1(kg): ");
	scanf("%lf", &m1);
	printf("\tMasse2(kg):");
	scanf("%lf", &m2);
	printf("\tDistance(m)");
	scanf("%lf", &dist);

	if ((m1 | m2 | dist) < 0)
	{
		puts("ERROR");
	}
}
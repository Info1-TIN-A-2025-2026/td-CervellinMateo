#include <stdio.h>

int main(int argc, const char *argv[])
{
	double m1 = 0;
	double m2 = 0;
	double dist = 0;
	double F = 0;
	const double G = 6.67e-11;
	printf("Calculateur de force gravitationnel:\n\tMasse1(kg): ");
	scanf("%lf", &m1);
	printf("\tMasse2(kg):");
	scanf("%lf", &m2);
	printf("\tDistance(m):");
	scanf("%lf", &dist);
	if ((m1 < 0) | (m2 < 0) | (dist < 0))
	{
		puts("ERROR");
	} else if ((m1 > 1.7e308) | (m2 > 1.7e308) | (dist > 1.7e308))
	{
		puts("OVERFLOW");
	}
	else
	{
		F = (G * m1 * m2) / (dist * dist);
		printf("La force est de %.2e N.\n", F);
	}
}
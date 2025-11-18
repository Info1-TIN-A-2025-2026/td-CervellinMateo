#include <stdio.h>

double calc_delta(double a, double b, double c);

int main(int argc, const char *argv[])
{
	double a, b, c, ret;
	printf("A B C Value: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	ret = calc_delta(a, b, c);
	printf("Δ = %.2lf\n", ret);
	
	return 0;
}

double calc_delta(const double a, const double b, const double c)
{
	double delta = b * b - 4. * a * c;
	return delta;
}
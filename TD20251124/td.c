#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int f(unsigned int t, int *a, int *b, int *c);

void c2p(const double x, const double y, double *rho, double *theta);

int main(int argc, const char *argv[])
{
	int h = 0, m = 0, s = 0, t = atoi(argv[1]);
	printf("adresse of argc = %p\n", &argc);
	printf("adresse of h = %p\n", &h);
	printf("adresse of m = %p\n", &m);
	printf("adresse of s = %p\n", &s);

	f(t, &h, &m, &s);

	printf("\n\n");
	c2p(x, y, &r, &t);

	printf("Rho = %lf\n", rho);
	printf("Theta = %lf\n", theta);
}

int f(unsigned int t, int *a, int *b, int *c)
{

	*a = t / 3600;
	*b = (t % 3600) / 60;
	*c = t % 60;

	printf("h = %d\n", *a);
	printf("m = %d\n", *b);
	printf("s = %d\n", *c);

	printf("adresse of a = %p\n", a);
	printf("adresse of b = %p\n", b);
	printf("adresse of c = %p\n", c);

	return 0;
}

void c2p(double x, double y, double *rho, double *theta)
{
	*rho = srqt(x * x + y * y);
	*theta = atan2(y / x);
}
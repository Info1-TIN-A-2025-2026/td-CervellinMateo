#include <stdio.h>

int main(int argc, const char *argv[])
{
	long volume = 42;

	printf("volume = [%ld]\n", volume);
	printf("volume = [%7ld]\n", volume); // right justified
	printf("volume = [%-7ld]\n", volume); // left justified

	printf("volume = [%+ld]\n", volume); // add sign of variable
	printf("volume = [%+7ld]\n", volume);
	printf("volume = [%+-7ld]\n", volume);


	long pression = -4;
	printf("pression = [%ld]\n", pression);

	double pi = 3.14159265359;
	printf("pi = [%lf]\n", pi); // 6 digits after decimal point
	printf("pi = [%.2lf]\n", pi); // 2 digits after decimal point
	printf("pi = [%+.2lf]\n", pi); // force sign

	double absolut_zero = -459.67; // °F
	printf("zero abs = [%.1lf]\n", absolut_zero); // 1 digit after decimal point

	printf("[%+10.2lf]\n", pi);
	printf("[%+10.2lf]\n", absolut_zero);

	double light_speed = 299792458.0; // m/s
	printf("[%+10.2lf]\n", light_speed); // shift if too big

	int num_digits = 3; // %.3lf
	printf("[%+.3lf]\n", pi); // 3 digits after decimal point
	printf("[%+.*lf]\n", num_digits, pi); // num_digits digits after deciaml point

	num_digits = 12;
	printf("[%+.*lf]\n", num_digits, pi); // num_digits digits after deciaml point

	int width = 8;
	num_digits = 3;
	printf("[%+*.*lf]\n", width, num_digits, pi); // num_digits digits after deciaml point
}
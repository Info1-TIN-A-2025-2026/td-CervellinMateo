#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MASS_FUEL 660 // in tons
#define MASS_EMPTY 90 // in tons
#define GAZ_EJECTION_SPEED 4 // in km/s
#define CONSOMPTION_RATE 4 // in tons/s
#define TIME_STEP 0.001 // in s

int main(int argc, const char *argv[])
{
	double rocket_mass = MASS_FUEL + MASS_EMPTY;
	double rocket_speed = 0;
	double fuel_burned = 0;
	double atitude = 0;
	double time = 0;

	for (; rocket_mass > MASS_EMPTY; time += TIME_STEP) {
		double fuel_consumed = CONSOMPTION_RATE * TIME_STEP;
		if (fabs(fmod(time,10)) < 10e-6) 
		{
		printf("Time(s): %lf\tMass(tons): %.0lf\tSpeed(m/s): %lf\tSpeed(k/s): %lf\nFuel burned(tons): %lf\tAltitude(km): %.0lf\n",
			   time, rocket_mass, rocket_speed * 1000, rocket_speed, fuel_burned, atitude);
		puts("");
		}
		rocket_speed += GAZ_EJECTION_SPEED * log(rocket_mass / (rocket_mass - fuel_consumed));

		if (rocket_mass - fuel_consumed < MASS_EMPTY) {
		fuel_consumed = rocket_mass - MASS_EMPTY;
		}
		rocket_mass -= fuel_consumed;
		fuel_burned += fuel_consumed;

		atitude += rocket_speed * TIME_STEP;

		

	}
		printf("Time(s): %lf\tMass(tons): %.0lf\tSpeed(m/s): %lf\tSpeed(k/s): %lf\nFuel burned(tons): %.0lf\tAltitude(km): %lf\n",
			   time, rocket_mass, rocket_speed * 1000, rocket_speed, fuel_burned, atitude);
		puts("");






	return 0;
}


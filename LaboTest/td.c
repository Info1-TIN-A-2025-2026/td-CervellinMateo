#include <stdio.h>

int main(int argc, const char *argv[])
{
	const float ACC_A = 1.33, ACC_T_A = 10, ACC_B = 0.52, ACC_T_B = 20, SIM_INT = 1;

	float station_dist = 0, t = 0, speed_a = 0, dist_a = 0, dist_b = 0, speed_b = 0, station_dist_delta = 0;

	puts("Distance entre gares D (km) : ");
	scanf("%f", &station_dist);
	station_dist *= 1000;
	station_dist_delta = station_dist;

	puts("t\tpA(m)\tvA(m/s)\tpB(m)\tvB(m/s)\tecart(m)");

	while(station_dist_delta>0)
	{
		
		t = t + SIM_INT;
		if (t <= ACC_T_A)
		{
			speed_a = ACC_A * t;
			dist_a = 0.5*speed_a*t;
		}else
		{
			dist_a = speed_a * t;
		}
		if (t <= ACC_T_B)
		{
			speed_b = ACC_B * t;
			dist_b = 0.5*speed_b*t;
		}else
		{
			dist_b = speed_b * t;
		}
		
		station_dist_delta = station_dist - dist_a - dist_b;
		
		printf("%1.0f\t%.1f\t%.2f\t%.1f\t%.2f\t%.1f\n", t, dist_a, speed_a, dist_b, speed_b, station_dist_delta);
	}


	return 0;
}
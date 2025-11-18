#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


double kmh_to_ms(double s_kmh);
double reaction_distance(double speed, double reaction_time);
double break_distance(double speed, double deceleration);
double totale_stop_distance(double speed, double reaction_time, double deceleration);
bool stop_distance_obstacle(double stop_distance, double obstacle_distance);

int main(int argc, const char *argv[])
{
	double speed = 0, reaction_time = 0, deceleration = 0, obstacle_distance = 0;

	printf("Enter the speed (km/h): ");
	scanf("%lf", &speed);

	printf("Enter the reaction time: ");
	scanf("%lf", &reaction_time);

	printf("Enter the deceleration (m/s/s): ");
	scanf("%lf", &deceleration);

	printf("Enter the distance to obstacle (m): ");
	scanf("%lf", &obstacle_distance);

	if (stop_distance_obstacle(totale_stop_distance(speed,reaction_time, deceleration), obstacle_distance))
	{
		printf(" => ✅ no collision\n");
	}
	else
	{
		printf(" => ❌ collision\n");
	}

	return 0;
}

double kmh_to_ms(double s_kmh)
{
	assert(s_kmh >= 0);
	printf("Speed : %lf km/h = %lf m/s\n",s_kmh, s_kmh / 3.6);
	return s_kmh / 3.6;
}

double reaction_distance(double speed, double reaction_time)
{
	assert(speed >= 0);
	assert(reaction_time >= 0);
	printf("Reaction distance : %lf m\n",speed * reaction_time);
	return speed * reaction_time;
	 
}

double break_distance(double speed, double deceleration)
{
	assert(speed >= 0);
	assert(deceleration >= 0);
	printf("Break distance : %lf m\n",speed * speed / (2. * deceleration));
	return speed * speed / (2. * deceleration);
}

double totale_stop_distance(double speed, double reaction_time, double deceleration)
{
	double ret = break_distance(kmh_to_ms(speed), deceleration) + reaction_distance(kmh_to_ms(speed), reaction_time);
	printf("Totale stop distance : %lf m", ret);
	return ret;
}

bool stop_distance_obstacle(double stop_distance, double obstacle_distance)
{
	return stop_distance < obstacle_distance;
}
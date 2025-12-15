#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CELLS	1000
#define MIN_VALUE	(-100)
#define MAX_VALUE	100
#define VALUE		93
double generate_random_real_value(const double min_value, const double max_value);

int main(int argc, const char *argv[])
{

	srand(time(NULL));
	long N[NUM_CELLS] = {0};

	for(int i = 0; i < NUM_CELLS; i++)
	{
		N[i] = generate_random_real_value(MIN_VALUE, MAX_VALUE);
	}

	for (int i = 0; i < NUM_CELLS; i++)
	{
		if(N[i] == VALUE)
		{
			printf("%d\n", i);
			return 0;
		}
	}
	printf("Pas de d'index trouvé.\n");
	return 0;
}

double generate_random_real_value(const double min_value, const double max_value)
{
  double r = (double)rand()/(double)RAND_MAX;
  return min_value + r * (max_value - min_value);
}
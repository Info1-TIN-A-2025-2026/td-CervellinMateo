#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	double action_price = 0, strike_price = 0, nb_days = 0, contract_price = 0;
	const double INTREST_RATE = 0.15, VOLATILITY = 0.274;

	printf("Price de l'action: ");
	scanf("%lf", &action_price);
	printf("Prix du strike: ");
	scanf("%lf",&strike_price);
	printf("Nombre de jour jusqu'à l'expiration: ");
	scanf("%lf", &nb_days);

	nb_days = nb_days / 365;

	if ((action_price < 0) || (strike_price<0) || (nb_days< 0))
	{
		printf("ERROR");
	}else if ((action_price > 1.79e308) || (strike_price > 1.79e308) || (nb_days > 1.79e308))
	{
		printf("OVERFLOW");
	}else 
	{
		double a1 = 0.319381530;
		double a2 = -0.356563782;
		double a3 = 1.781477937;
		double a4 = -1.821255978;
		double a5 = 1.330274429;
		
		double d1_1 = 1 / (VOLATILITY * sqrt(nb_days));
		double d1_2 = log(action_price / strike_price) + (INTREST_RATE + 0.5 * VOLATILITY * VOLATILITY) * nb_days;
		double d1 = d1_1 * d1_2;
		double d2 = d1 - VOLATILITY*sqrt(nb_days);
		double kd1 = 1 / (1 + 0.2316419 * d1);
		double kd2 = 1 / (1 + 0.2316419 * d2);
		double nd1 = exp(-0.5 * d1 * d1) / sqrt(2 * M_PI);
		double nd2 = exp(-0.5 * d2 * d2) / sqrt(2 * M_PI);
		double Nd1 = 1 - nd1*(a1 * kd1 + a2 * kd1 * kd1 + a3 * pow(kd1,3) + a4 * pow(kd1,4) + a5 * pow(kd1,5));
		double Nd2 = 1 - nd2*(a1 * kd2 + a2 * kd2 * kd2 + a3 * pow(kd2,3) + a4 * pow(kd2,4) + a5 * pow(kd2,5));

		contract_price = action_price * Nd1 - (strike_price * exp(-(INTREST_RATE)*nb_days)) * Nd2 ;

		printf("Le prix du contrat est de %.2lf$\n", contract_price);
	}
}
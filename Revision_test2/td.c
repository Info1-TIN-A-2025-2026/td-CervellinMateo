#include <stdio.h>

int compter_positifs(int* tab,int taille);
void filtrer_positifs(int* tab, int taille);
void double_valeurs(int* tab, int taille);

int main(void)
{
	int tab[] = {3, -1, 0, 5, -2, 12, 3, -4, 7, 9, 0, -32};

	printf("tableau de base: %d",tab[0]);
	for (int i = 1; i < sizeof(tab)/sizeof(int); i++)
	{
		printf(",%d",tab[i]);
	}
	puts("");

	int nb_pos = compter_positifs(tab, sizeof(tab)/sizeof(int));

	printf("nombre de positifes = %d\n",nb_pos);

	filtrer_positifs(tab, sizeof(tab)/sizeof(int));

	printf("tableau filtre: %d",tab[0]);
	for (int i = 1; i < sizeof(tab)/sizeof(int); i++)
	{
		printf(",%d",tab[i]);
	}
	puts("");
	
	double_valeurs(tab, sizeof(tab)/sizeof(int));
	
	printf("%d",tab[0]);
	for (int i = 1; i < sizeof(tab)/sizeof(int); i++)
	{
		printf(",%d",tab[i]);
	}
	puts("");

	return 0;	

}

int compter_positifs(int* tab,int taille)
{	
	int nb_pos = 0;
	for (int i = 0; i < taille; i++)
	{
		if(tab[i] > 0) nb_pos++;
	}
	
	return nb_pos;
}

void filtrer_positifs(int* tab, int taille)
{
	int write = 0;

	for (int read = 0; read < taille; read++)
	{
		if (tab[read] > 0)
		{
			int temp = tab[write];
			tab[write] = tab[read];
			tab[read] = temp;
			write++;
		}
		
	}
	
}

void double_valeurs(int* tab, int taille)
{
	for (int i = 0; i < taille; i++)
	{
		tab[i] *= 2;
	}
	
}

#include <stdio.h>
#include <stdlib.h>

#define BIG_SQUARE_WIDTH	16
#define BIG_SQUARE_LENGHT 	16
// #define SMALL_SQUARE_WIDTH	8
// #define SMALL_SQUARE_LENGTH	8

void display_matrix(unsigned char f[BIG_SQUARE_LENGHT][BIG_SQUARE_WIDTH])
{
	for (unsigned long row = 0; row < BIG_SQUARE_LENGHT; row++)
	{
		for (unsigned long col = 0; col < BIG_SQUARE_WIDTH; col++)
		{
			printf("%4d", f[row][col]);
		}
		puts("");
	}
}

void fill_small_sqrare(unsigned char f[BIG_SQUARE_LENGHT][BIG_SQUARE_WIDTH])
{
	for(int row = 4; row < 12; row++)
	{
		for (int col = 4; col < 12; row++)
		{
			f[row][col] = 255;
		}
	}
}
// void dilatatio(unsigned char f[BIG_SQUARE_LENGHT][BIG_SQUARE_WIDTH], unsigned char g[BIG_SQUARE_LENGHT][BIG_SQUARE_WIDTH])
// {
	
// }

int main(int argc, const char *argv[])
{
	unsigned char f[BIG_SQUARE_LENGHT][BIG_SQUARE_WIDTH] = {0};
	// unsigned char g[BIG_SQUARE_LENGHT][BIG_SQUARE_WIDTH] = {0};
	
	fill_small_sqrare(f);
	display_matrix(f);
	
	return 0;
}



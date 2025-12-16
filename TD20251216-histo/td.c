#include <stdio.h>
#include <stdlib.h>

#define W	4
#define H	4
#define MIN_VALUE	0
#define	MAX_VALUE	255

void fill_matrix(unsigned char f[H][W], unsigned char min, unsigned char max);
void display_matrix(unsigned char f[H][W]);
void compute_histo(unsigned char f[H][W],unsigned long h[MAX_VALUE]);
void display_histo(unsigned long h[MAX_VALUE]);

int main(int argc, const char *argv[])
{
	srand(0);
	unsigned char f[H][W] = {0};
	unsigned long h[MAX_VALUE] = {0};

	fill_matrix(f, MIN_VALUE, MAX_VALUE);

	display_matrix(f);

	compute_histo(f, h);

	display_histo(h);
	return 0;
}

void fill_matrix(unsigned char f[H][W], unsigned char min, unsigned char max)
{
	for (unsigned long row = 0; row < H; row++)
	{
		for (unsigned long col = 0; col < W; col++)
		{
			f[row][col] = min + ((double)rand() / RAND_MAX) * (max - min);
		}
	}
}

void display_matrix(unsigned char f[H][W])
{
	for (unsigned long row = 0; row < H; row++)
	{
		for (unsigned long col = 0; col < W; col++)
		{
			printf("%4d", f[row][col]);
		}
		puts("");
	}
}

void compute_histo(unsigned char f[H][W],unsigned long h[MAX_VALUE])
{
	for (unsigned long row = 0; row < H; row++)
	{
		for (unsigned long col = 0; col < W; col++)
		{
			h[f[row][col]]++;
		}
	}
}

void display_histo(unsigned long h[MAX_VALUE])
{
	puts("");

	for (unsigned char i = 0; i < MAX_VALUE; i++)
	{
		printf("%4ld", h[i]);
	}

	puts("");
}

#include <stdio.h>
#include <string.h>

void display(char* t);

int main(int argc, const char *argv[])
{
	char s1[] = "TXT";
	unsigned long count = 0;
	unsigned long count2 = 0;
	
	printf("memory size : %ld\n", sizeof(s1));
	printf("num size    : %ld\n", sizeof(s1)/sizeof(char));


	while (s1[count] != 0)
	{
		count++;
	}

	printf("string lenght = %lu\n", count);
	printf("string lenght = %lu\n", strlen(s1));

	puts("");

	char s2[100] = "TXT";

	
	printf("memory size 2 : %ld\n", sizeof(s2));
	printf("num size 2    : %ld\n", sizeof(s2)/sizeof(char));

	while (s2[count2] != 0)
	{
		count2++;
	}

	printf("string lenght 2 = %lu\n", count2);
	printf("string lenght 2 = %lu\n", strlen(s2));

	char *s3 = "pipo a beaucoup fait pour l'informatique en italie";

	printf("test = %ld\n", sizeof(s3));
	printf("test2 = %lu\n", strlen(s3));

	puts("");


	char s4[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. " \
	"Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing " \
	"nec, ultricies sed, dolor. Cras elementum ultrices diam. Maecenas ligula massa," \
	"varius a, semper congue, euismod non, mi.";

	printf("memory size   = %ld\n", sizeof(s4));
	printf("string lenght = %lu\n", strlen(s4));

	puts("");


	char s5[] = "ABC";
	display(s5);

	char s6[][10] { // 3 x 10 char (9+ '\0') = 30 bytes in memory
		"ABC",
		"DEF",
		"HIGJKL"
	}

	char *s7[] = { // 3 x sizof(address) = 24 bytes
		"ABC",
		"DEF",
		"HIGJKL"
	}

	return 0;
}

void display(char* t)
{
	for (int i = 0; i < strlen(t)+1; i++)
	{
		printf("%3d ", t[i]);
	}
	puts("");
	for (int i = 0; i < strlen(t)+1; i++)
	{
		printf("%2c  ", t[i]);
	}
	puts("");

	
}
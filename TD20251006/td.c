#include <stdio.h> // prinf et scanf
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	bool sw1 = true, sw2 = true;
	unsigned char num_students = 23, num_chairs = 32;
	unsigned char state = (sw2 << 4) + sw1;
	char delta = num_students - num_chairs;

	printf("Number of students = %u\n", num_students);
	printf("Number of students = %u, Number of chairs = %u\n", num_students, num_chairs);

	printf("delta = %hd\n", delta);

	printf("sw1 = %d\n", sw1);
	printf("sw2 = %d\n", sw2);

	printf("state = %x (base 16)\n", state);
	printf("state = %d (base 10)\n", state);
	printf("state = %o (base 8)\n", state);

	char a = 'A';
	printf("a = %d\n", a);
	printf("a = %c\n", a);

	char b = 112;
	printf("b = %d\n", b);
	printf("b = %c\n", b);

	return 0;
}
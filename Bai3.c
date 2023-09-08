#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10;
	int b = 8;
	int c = 9;
	int d = 7;
	int e = 6;
	int f = 5;
	int x = a*a*a*a*a*a + b*c*d + e*f;
	int y = a*a*a*b*b + a*b*d*e*f;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Bai 1
	int a,b,c,d;
	printf("\nNhap chieu dai hcn = ");
	scanf("%d", &a);
	printf("\nNhap chieu rong hcn = ");
	scanf("%d", &b);
	c = a*b;
	d = a + b;
	printf("Dien tich hcn: %d\n", c);
	printf("Chu vi hcn: %d\n", d);
//Bai 2
	const double PI = 3.14;
	float r;
	printf("\nNhap ban kinh hinh tron = ");
	scanf("%f", &r);
	printf("chu vi: %f, dien tich: %f\n", r*PI*2, PI*r*r);
//Bai 3
	int n;
	long long S;
	printf("\nNhap so nguyen n = ");
	scanf("%d", &n);
	printf("Tong cac so S = %d\n", (n*(n+1))/2);
	return 0;
}

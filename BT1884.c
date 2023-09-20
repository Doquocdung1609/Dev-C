#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Bai 1
	int n,i;
	i = 1;
	long S = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(i <= n) {
		S += i;
		i++;
	}
	printf("\nTong la: %ld", S);
//Bai 2
	int n,i;
	i = 1;
	long S = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(i <= n) {
		S += i*i;
		i++;
	}
	printf("\nTong la: %ld", S);

if(n<1) {
		printf("\nSo n phai lon hon hoac bang 1");

//Bai 3
	int n,i;
	i = 1;
	float S;
	S = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n<1) {
		printf("\nSo n phai lon hon hoac bang 1");
	}
	while(i <= n) {
		S += 1.0/i,
		i++;
	}
	
	printf("\nTong la: %.2f", S);
//Bai 4
	int n,i;
	i = 1;
	float S;
	S = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n<1) {
		printf("\nSo n phai lon hon hoac bang 1");
	}
	while(i <= n) {
		S += 1.0/(2*i),
		i++;
	}
	
	printf("\nTong la: %.2f", S);

//Bai 5
	int n,i;
	i = 1;
	float S;
	S = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n<1) {
		printf("\nSo n phai lon hon hoac bang 1");
	}
	while(i <= n) {
		S += 1.0/(2*i+1),
		i++;
	}
	
	printf("\nTong la: %.2f", S);

	
	
	
	return 0;
}

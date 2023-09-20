#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1, a2, a3, a4;
	printf("Nhap so a1 = ");
	scanf("%d", &a1);
	printf("Nhap so a2 = ");
	scanf("%d", &a2);
	printf("Nhap so a3 = ");
	scanf("%d", &a3);
	printf("Nhap so a4 = ");
	scanf("%d", &a4);
	
	int max = a1;
	if(a2 > max) {
		max = a2;
}
	if(a3 > max) {
		max = a3;
}
	if(a4 > max) {
		max = a4;
}
	int min = a1;
	if(a2 < min) {
		min = a2;
	}
	if(a3 < min) {
		min = a3;
}
	if(a4 < min) {
		min = a4;
	}
	
	printf("\nSo nguyen lon nhat la = %d", max);
	printf("\nSo nguyen nho nhat la = %d", min);
	

	return 0;
}

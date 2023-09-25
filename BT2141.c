#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void cong(float a, float b) {
	float sum = a + b;
	printf("\nTong: %d", sum);
}
void hieu(float a, float b) {
	float hieu = a - b;
	printf("\nHieu: %d", hieu);
}
void tich(float a, float b) {
	float tich = a * b;
	printf("\nTich: %d", tich);
}
void thuong(float a, float b) {
	float thuong = a / b;
	printf("\nThuong: %d", thuong);
}


int main(){
	float a,b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap y = ");
	scanf("%d", &b);
	cong(a,b);
	hieu(a,b);
	tich(a,b);
	thuong(a,b);
	
	return 0;
}	


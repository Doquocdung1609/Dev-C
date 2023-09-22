#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Khai bao con tro *p
int *p, sum;
//Cap phat mang p gom 10 phan tu 
p = (int *) malloc (10*sizeof(int)); 
//Nhap cac phan tu trong mang 
int i;
for(i=0;i<5;i++){
	printf("\nNhap p[%d] = ", i);
	scanf("%d", p + i);
}
//Tinh tong cac so chia het cho 2 trong mang p
sum = 0;
	for (i = 0; i < 5; i++) {
		if(p[i] % 2 == 0){
		sum += p[i];
	}
}
	
	
	printf("\nTong cac phan tu mang p: %d", sum);


	return 0;
}

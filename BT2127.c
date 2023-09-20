#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, x;
	printf("Nhap so a = ");
	scanf("%d", &a);
	printf("Nhap so b = ");
	scanf("%d", &b);
	printf("\nPhuong trinh: %dx + %d = 0",a,b);
	if(a == 0) {
		if(b == 0) {
			printf("\nPhuong trinh co vo so nghiem");
		}
		else{
			printf("\nPhuong trinh vo nghiem");
		}
	}
	
		else {
		x = -b/a;
		printf("\nPhuong trinh co nghiem x = %f",x );
	}

	return 0;
}

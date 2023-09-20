#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,c,delta,x1,x2;
	printf("Nhap gia tri a = ");
	scanf("%lf", &a);
	printf("Nhap gia tri b = ");
	scanf("%lf", &b);
	printf("Nhap gia tri c = ");
	scanf("%lf", &c);
	printf("Phuong trinh co dang: %lfx^2 + %lfx +%lf",a,b,c);
	if(a == 0) {
		printf("\nPhuong trinh bac nhat mot an");
	}
	else{
		delta = b*b - 4*a*c;
		if(delta < 0){
			printf("\nPhuong trinh vo nghiem");
		}
		if(delta == 0){
			x1 = x2 = -b/(2*a);
			printf("\nPhuong trinh co nghiem kep: x1 = x2 = %lf", x1,x2);
		}
		if(delta > 0){
			x1=(-b + sqrt(delta)) / (2*a);
			x2=(-b - sqrt(delta)) / (2*a);
			printf("\nPhuong trinh co 2 nghiem phan biet: x1 = %lf", x1);
			printf("\nPhuong trinh co 2 nghiem phan biet: x2 = %lf", x2);
		}
	}
	return 0;
}

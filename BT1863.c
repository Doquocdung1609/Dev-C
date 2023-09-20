#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Bai 1
int main(int argc, char *argv[]) {
	int a;
	printf("\nNhap gia tri a = ");
	scanf("%d", &a); 
	printf("Binh phuong cua %d la: %d\n",a, (a*a));
	printf("Lap phuong cua %d la: %d\n",a,(a*a*a));
	printf("Bac 4 trung phuong cua %d la: %d\n",a, (a*a*a*a));
//Bai 2
	int x, y, z;
	printf("ngay:");
	scanf("%d",&x);
	printf("thang:");
	scanf("%d", &y);
	printf("nam:");
	scanf("%d", &z);
	printf("%d/%d/%d",x,y,z);
//Bai 3
	int d, e, c, t, n, ch;
	printf("\nNhap gia tri d = ");
	scanf("%d", &d);
	printf("\nNhap gia tri e = ");
	scanf("%d", &e);
	c = d + e;
	t = d - e;
	n = d*e;
	ch = d/e;
	printf("Phep cong 2 so: %d\n",c);
	printf("Phep tru 2 so: %d\n",t);
	printf("Phep nhan 2 so: %d\n",n);
	printf("Phep chia 2 so: %d\n",ch);

	return 0;	
}




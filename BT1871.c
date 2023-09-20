#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1, a2, b1, b2, c1, c2;
	printf("\nNhap a1: "); scanf("%d", &a1);
    printf("\nNhap b1: "); scanf("%d", &b1);
    printf("\nNhap c1: "); scanf("%d", &c1);
    printf("\nNhap a2: "); scanf("%d", &a2);
    printf("\nNhap b2: "); scanf("%d", &b2);
    printf("\nNhap c2: "); scanf("%d", &c2);
    float D, Dx, Dy, x, y;
    printf("%d*x + %d*y = %d\n",a1,b1,c1);
    printf("%d*x + %d*y = %d\n",a2,b2,c2);
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0) {
        if (Dx + Dy == 0)
            printf("He phuong trinh co vo so nghiem");
        else
            printf("He phuong trinh vo nghiem");
    }
    else {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem (x, y) = (%.f, %.f)", x, y);
    }
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int x = 5;
//	printf("\nNhap gia tri x = ");
//	scanf("%d", &x);
//	printf("\nKet qua x = %d ", x);
//	printf("\nKet qua x = %d ", &x);
//	printf("\nKet qua x = %X", &x) ;
//	int *p;
//	p = &x;
//	printf("\nDia chi (p) = %X (%d)", &p, &p); 
//	printf("\nDia chi (p) = %X (%d)", p, p); 
//	printf("\nDia chi (p) = %d", *p);
//	x = 10;
//	x++;
//	*p++; 
//	printf("\nx = %d, &x = %X, *p = %d, p = %X, &p = %X",x,&x,*p,p,&p); 

//int x = 5;
//int *p = &x;
//int y = 10;
//x++;
//printf("\nx= %d, &x = % X,y = %d,&y = %X, *p = %d, p = %X, &p = %X",x,&x,y,&y,*p,p,&p); 
 
//p = &y;
//x++; 
//printf("\nx= %d, &x = % X,y = %d,&y = %X, *p = %d, p = %X, &p = %X",x,&x,y,&y,*p,p,&p); 

//int t[5];
/**
length: 5
index: 0 -> 4
vi tri index = 1
GIA TRI: t[1] - > gia tri co cach viet khac: *(t+1)
Dia chi: &t[1] -> dia chi co cach viet khac: t + 1
*/
//printf("\nNhap t[1] = ");
//sacnf("%d", t+1);
//printf("\nt[1] = %d", t[1]);
//int i;
//for(i=0;i<5;i++){
//	printf("\nNhap t[%d] = ", i);
//	scanf("%d", t + i); 
//hoac scanf("%d", &t[i]); 
// 
//int *p = t;
//for(i=0;i<5;i++){
// printf("\n%d", *(p+i));	
//	printf("\n%d", p[i]);
//}

int *p;
////cap phat vung nho cho con tro p -. luu thong tin 1 mang 
////cap phat 5 o nho cho con tro p
//p = (int *) malloc (5*sizeof(int));
//
//int i;
//for(i=0;i<5;i++){
//	printf("\nNhap p[%d] =",i);
//	scanf("%d", p+i);
//} 
//free(p);
//float *q;
//q = (float *) malloc (5*sizeof(float)); 

p = (int *) calloc(2, sizeof(int));
	int i;
	for(i=0;i<2;i++) {
		printf("\nNhap p[%d] = ", i);
		scanf("%d", p + i);
	}
	
	printf("\n===============================");
	for(i=0;i<2;i++) {
		printf("\n%d", p[i]);
	}

	p = (int *) realloc(p, 5 * sizeof(int));

	for(i=2;i<5;i++) {
		printf("\nNhap p[%d] = ", i);
		scanf("%d", p + i);
	}
	
	printf("\n===============================");
	for(i=0;i<5;i++) {
		printf("\n%d", p[i]);
 
	return 0;
}

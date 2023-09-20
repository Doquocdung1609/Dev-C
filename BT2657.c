#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Bai 1 Viet chuong trinh in ra tam giac can co do cao h
//cau a 
		int i, j, h; 
	printf("\nNhap h: "); 
	scanf("%d", &h);  
	for(i = 0; i <= h; i++) { 
	for(j = 0; j <= h - 1; j++) { 
	if(j < h - i +1){
		printf(" ");
	}else{
		printf("* ");
	}
}
	putchar('\n'); 
	}
	
//cau b
 	int space = h - 1;
	printf("\nTam giac\n");
    for(i=0;i<h;i++) {
        for(j=0;j<space - i;j++) {
            printf(" ");
        }
        printf("* ");
        if(i < h - 1) {
            for(j=1;j<i;j++) {
                printf("  ");
            }    
        } else {
            for(j=1;j<i;j++) {
                printf("* ");
            }
        }
       
        if(i > 0) {
            printf("* ");
        }
       
        printf("\n");
    }
   



//cau c

	printf("\nNhap h: "); 
	scanf("%d", &h);  
	for(i = 0; i <= h; i++) { 
	for(j = 0; j <= h - 1; j++) { 
	if(j < i ){
		printf("*");
	}else{
		printf(" ");
	}
}
	putchar('\n'); 
	}
	
//cau d
for(i = 1; i <= h; ++i) { 
for(j = 1; j <= h; ++j) { 
if(j == i || j == 1 || i == h){
		printf("*");
	}else{
		printf(" ");
	}
}

printf("\n"); 
}


//Bai 2
//cau a 
	int m, n,i,j;
	printf("\nNhap chieu dai hcn m = ");
	scanf("%d", &m);
	printf("\nNhap chieu rong hcn n = ");
	scanf("%d", &n);
	for(i = 1; i <= m; i++)	{
		for(j = 1 ; j <= n; j++){
				printf("*");
			}
				printf("\n");
		}


//cau b 
	int m, n,i,j;
	printf("\nNhap chieu dai hcn m = ");
	scanf("%d", &m);
	printf("\nNhap chieu rong hcn n = ");
	scanf("%d", &n);
	for(i = 1; i <= m; i++)	{
		for(j = 1 ; j <= n; j++){
			if(i == 1 || j == 1 || i == m || j == n){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}



//Bai 3

int i,j,k;
	for(i=0;i <=20;i++)
		for(j=0;j<=100;j++)
			for(k=0;k<=40;k++)
				if(i*1000 + j*2000 + k*5000 == 200000)
					printf("\n%d so to 1000(VND) - %d so to 2000(VND) - %d so to 5000(VND) ", i, j, k);  




	return 0;
}

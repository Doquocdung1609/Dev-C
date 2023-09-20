#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Bai 1
// Kiem tra N la chan hay le
	int N;
	printf("\nNhap vao so N = ");
	scanf("%d", &N);
	if(N % 2 == 0){
		printf("\nN la so chan");
		}else{
			printf("\nN la so le");
		} 
//Kiem tra N chia het cho 2 va 7

	int N;
	printf("\nNhap vao so N = ");
	scanf("%d", &N);
	if(N % 2 == 0 && N % 7 == 0){
		printf("\nN la so chia het cho 2 va 7");
		}else{
			printf("\nN la khong so chia het cho 2 va 7");
		} 

//Kiem tra N co phai so nguyen to



	int N, i, j, UOC;
    printf(" - Nhap N = ");
    scanf("%d",&N);
     if(N < 2){
        printf("n%d khong phai so nguyen to", N);
        return 0;
}
    for(i = 2; i <= N; i++){
        UOC = 0;
        for(j = 2;j <= i/2; j++){
            if(i % j == 0){
                UOC++;
            }
        } 
	}
        if(UOC == 0){
        printf("N = %d la so nguyen to", N);
    }else{
        printf("N = %d khong phai so nguyen to", N);
}

    
//Bai 2
//Tinh tong giua 
	int a,b,i,sum;
	printf("\nNhap so a = ");
	scanf("%d", &a);
	printf("\nNhap so b = ");
	scanf("%d", &b);
	if(a>b){
		printf("\nSo a lon hon so b");
	}else{
		int sum = 0;
		for ( i = a; i <= b; i++) {
        sum = sum + i;
    }
    printf("%d", sum);


//Nhap so N, tinh tong so nguyen to tu 1 -> N     
   int N, i, j, UOC,sum;
    printf(" - Nhap N = ");
    scanf("%d",&N);
    sum = 0 ;
    printf(" => Cac so nguyen to tu 1 den N = %d la:", N);
    for(i = 2; i <= N; i++){
        UOC = 0;
        for(j = 2;j <= i/2; j++){
            if(i % j == 0){
                UOC++;
            }
        }        
        if(UOC == 0){
            printf("%5d",i);
            sum += i;
           
            
        }
    }
    printf("\nTong cac so nguyen to = %d", sum);


//Bai 3
//Khai bao mang so nguyen t[10] nhap cac so tu ban phim
	int i, t[10];
	for(i=0;i<10;i++) {
		printf("\nNhap t[%d] = ", i);
		scanf("%d", &t[i]);
	}

//Tinh tong cac phan tu trong mang
	int t[10];
	int tong = 0;
	int i = 0;
	for(;i < 10; i++){
		scanf("%d", &t[i]);
		tong += t[i];
	}
	printf("Tong cac phan tu: %d\n", tong);

//Tinh tong cac phan tu trong mang chia het cho 3 va 6
	int t[10];
	int tong = 0;
	int i = 0;
	for(;i < 10; i++){
		scanf("%d", &t[i]);
		if(t[i] % 3 == 0 && t[i] % 6 == 0) 	tong += t[i];
	}
	printf("Tong cac phan tu: %d\n", tong);

//Tinh tong cac phan tu trong mang chia het cho 3 va 7
	int t[10];
	int tong = 0;
	int i = 0;
	for(;i < 10; i++){
		scanf("%d", &t[i]);
		if(t[i] % 3 == 0 && t[i] % 7 == 0) 	tong += t[i];
	}
	printf("Tong cac phan tu: %d\n", tong);


	return 0;
}



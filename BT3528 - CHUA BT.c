#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Bai 2
//Bai 2.1
//C1
	int a,b;
	printf("\nNhap a = ");
	scanf("%d",&a);
	printf("\nNhap b = ");
	scanf("%d",&b);
	
	int min = a, max = b;
	if(a > b){
		min = b;
		max = a;
	}
	int sum = 0;
	int i;
	for(i = min; i <= max; i++){
		sum += i
	}
		printf("\nTonh: %d", sum);
		
//C2
	int sum = 0;
	int i;
	if(a>b){
		for(i = b; i <=a; i++){
			sum += i;
		}
	} else{
		for(i=a; i<=b; i++){
			sum += i;
		}
	}
	printf("\nTonh: %d", sum);
	
//C3
if(a>b){
	int tmp = 0;
	a = b;
	b = tmp;
}
	int sum = 0;
	int i;
	for(i=a; i<=b; i++){
			sum += i;
		}
	printf("\nTonh: %d", sum);
	
//C4
	a = a + b;
	b = a - b;
	a = a - b;
	
	int sum = 0;
	int i;
	for(i=a; i<=b; i++){
			sum += i;
		}
	printf("\nTonh: %d", sum);
//Bai 2.2
	int N;
	int sum = 0,i;
	printf("\nNhap N = ");
	scanf("%d", &N);
	for(i = 2; i <= N; i++){
		//Kiem tra xem i co phai la so nguyen to khong
		int isPrime = 1;
		for(j = 2; j < i/2; j++){
			if(i % j == 1){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1){
			printf("%d", i);
			sum +=i;
		}
				
	}	
	printf("\nTong so cac nguyen to: %d", sum);
	
//Bai 3
//Bai 3.1
	int N[10], i;
	for(i =0;i<10;i++){
		sum += N[i];
	}
	 	printf("\nTong: %d", sum);
//Bai 3.2 
	 	sum = 0;
	 	for(i =0;i<10;i++){	
		 	if(N[i] % 6 == 0){
		 		
		 		sum += N[i];
			 }	
	}
		printf("\nTong: %d", sum);
//Bai 3.3
	 sum = 0;
	 	for(i =0;i<10;i++){	
		 	if(N[i] % 21 == 0){
		 		
		 		sum += N[i];
			 }	
	}
		printf("\nTong: %d", sum);	
//Bai 3.4
	int K[10];
	int j, isPrime,index = 0; //index = Do dai phan tu trong mang K
	for(i = 0; i < 10; I++){
		//Kiem tra xem i co phai la so nguyen to khong
	isPrime = 1;
		for(j = 2; j < N[i]; j++){
			if(N[i] % j == 1){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1){
			K[index++] = N[i];
	}
	printf("\nDay cac so nguyen to\n");
	for(i = 0; i < index; i++){
		printf("%d", K[i]);
	}
	
	return 0;
}

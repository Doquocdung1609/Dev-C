#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//bai  
	int N;
	long S;
  	S = 0;
  	int i = 1;
  	printf("\nNhap N: ");
  	scanf("%d", &N);
 
  for(i = 1; i <=N; i++)
    {
        S = S + i;
    }
  printf("\nTong 1 + 2 + ... + %d la %ld: ", N, S);
  
  
//bai 2
	if(N<=0){
		printf("\nNhap so nguyen lon hon 0");
	}
	while(N <=0);
	printf("\nCac uoc so cua %d la:", N);
	for(i = 1; i<N; i++){
		if(N % i == 0 ){
			printf("\n%d",i);
		}
	}
	
//bai 3

int num,a;
printf("\nNhap num= ");
scanf("%d",&num);
printf("Bang cuu cua %d la\n", num);
for(i=1;i<=10;i++) {
a=num*i;
printf("%d x %d = %d\n", num,i,a);
}
	
 

	return 0;
}

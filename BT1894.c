#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Bai 1
	int t[100];
    int N,i,j;
    printf("\nNhap so luong phan tu N = ");
    scanf("%d", &N);
     for(i = 0; i < N; i++){
        printf("\nNhap t[%d] = ",i);
        scanf("%d", &t[i]);
    }
    for(i=N-1;i>=0;i--){
    	printf(" %d", t[i]);
	}
    
   
//Bai 2
	int daonguoc;
    printf("In tat ca phan tu cua mang theo chieu dao nguoc: \n\n");
   for(daonguoc = N - 1; daonguoc >= 0; daonguoc--)
      printf("%d ", t[daonguoc]);


    



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    
	return 0;
}

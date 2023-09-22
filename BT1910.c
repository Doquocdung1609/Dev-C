#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t[100];
    int N,i,j;
    printf("\nNhap so luong phan tu N = ");
    scanf("%d", &N);
    do{
        if(N <= 0){
            printf("\nNhap lai N = ");
        }
    }while(N <= 0);
    
    for(i = 0; i < N; i++){
        printf("\nNhap t[%d] = ",i);
        scanf("%d", &t[i]);
    }
    
    int sapxep;
    for(i = 0; i < N ; i++){
        for(j = i + 1; j < N; j++){
            if(t[i] < t[j]){
                sapxep = t[i];
                t[i] = t[j];
                t[j] = sapxep;        
            }
        }
    }
    
    
    printf("\nMang da sap xep la: ");
    for(i = 0; i < N; i++){
        printf(" %d", t[i]);
    }
	 
	return 0;
}

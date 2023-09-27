#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Bai 1	
	
	int N;
void Input(){
	int i,j;
	int t[5];
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
    
    
    
        int tong = 0;
		for(i=0; i<N; i++){
		if(t[i]%5==0)
			tong = tong + t[i];


    }
    printf("\nTong cac phan tu chia het cho 5 = %d", tong);
  
float scp(int N){
	int sqr = sqrt(N);
    return (sqr*sqr == N);
	
}
printf("\nCac so chinh phuong la: \t");
    for(i = 0;i < N; i++){
      
        if(scp(t[i])){
            printf("%d   ",t[i]);

}
}
for(i=0;i<N-1;i++)
        for ( j=i;j<N;j++){
            if (t[j]%2==0){
                int k = t[i];
                t[i]=t[j];
                t[j]=k;
                break;
            }
        }
    printf("\nMang sau khi sap xep: ");
    for( i=0;i<N;i++)
        printf("%d  ",t[i]);

}

//Bai 2

typedef struct ST_sinhvien{
	char name[50], rollno[20];
	int age;
	
}sinhvien;

sinhvien stdList[100];

int i;
void thongtinsinhvien(){
	printf("\nNhap so luong phan tu N = ");
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        printf("\nNhap thong tin sinh vien %d : ",i+1);
       
        printf("\nTen sinh vien: ");
		fflush(stdin);fflush(stdout);
		gets(stdList[i].name);
		printf("\nNhap rollno: ");
		fflush(stdin);fflush(stdout);
		gets(stdList[i].rollno);
		printf("\nNhap tuoi: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &stdList[i].age);
    }
    float scp(int N){
	int sqr = sqrt(N);
    return (sqr*sqr == N);
	
}
printf("\nCac sinh vien co tuoi la so chinh phuong la: \t");
    for(i = 0;i < N; i++){
      
        if(scp(stdList[i].age)){
            printf("%d   ",stdList[i].age);
            printf("\nTen sinh vien: %s ",stdList[i].name);
		fflush(stdin);fflush(stdout);
		printf("\nNhap rollno: %s ", stdList[i].rollno);
		fflush(stdin);fflush(stdout);
		printf("\nTuoi: %d ",stdList[i].age);
		fflush(stdin);fflush(stdout);
	
}
}

}


int main(int argc, char *argv[]) {

Input();
thongtinsinhvien();

	
	
	return 0;
}

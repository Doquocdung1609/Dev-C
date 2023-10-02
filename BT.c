#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ST_sinhvien{
	char name[50], rollno[20];
	int age;
	
}sinhvien;

sinhvien stdList[100];

int N;
void thongtinsinhvien(){
	printf("\nNhap so luong sinh vien = ");
    scanf("%d", &N);
}
    
void Hienthi(){
	int i;
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
}

void Sapxep(){
	int i,j=i+1;
	sinhvien k;
	int cmp = (stdList[i].name,stdList[j].name);
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(cmp<0)
			{
				k = stdList[i];
				stdList[i]= stdList[j];
				stdList[j]= k;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("\n%s",stdList[i].name);
	}
}

int main(int argc, char *argv[]) {
	char choose;
	do {
		printf("\n1. Them N sinh vien");
		printf("\n2. Hien thi thong tin sinh vien");
		printf("\n3. Sap xep theo ten tu A - Z");
		printf("\n4. Thoat");
		printf("\nChon: ");
		fflush(stdin);fflush(stdout);
		scanf("%c", &choose);
		
		switch(choose) {
			case '1':{
					thongtinsinhvien();
				break;
			}
			case '2':{
				Hienthi();
				break;
			}
			case '3':{
				Sapxep();
				break;
			}
			case '4':{
				printf("\nThoat");
				break;
			}
			default: {
				printf("\nNhap sai!!!");
				break;
			}
		}
	}while(choose != '4');
	return 0;
}


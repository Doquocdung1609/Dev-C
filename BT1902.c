#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Bai 1


	void showInfor(char ten[100],char gt[100],int tuoi,char email[100],char diachi[1000],char sdt[100]){
				printf("\nNhap ten: "); fflush(stdin); gets(ten);
                printf("\nNhap gioi tinh: "); gets(gt);
                printf("\nNhap tuoi: "); scanf("%d", &tuoi);
                printf("\nNhap dia chi: "); fflush(stdin); gets(diachi);
                printf("\nNhap email: "); fflush(stdin); gets(email);
                printf("\nNhap sdt: "); fflush(stdin); gets(sdt);
                printf("\nHo ten SV: %s", ten);
                printf("\nGioi tinh: %s", gt);
                printf("\nTuoi SV  : %d",tuoi);
                printf("\nDia chi: %s", diachi);
                printf("\nemail: %s", email);
                printf("\nsdt: %s", sdt);
                
}



//Bai 2

void showMessage(int msg){
	
		printf("Hello msg\n");
	
}

//Bai 3
float Giai_thua(int n){
	int i;
	float GT = 1.0;
	for(i=1;i<=n;i++)
		GT = GT * i;
	return GT;
}

float tinhtong(int n){
	int i, sum = 0;
	for(i=1;i<=n;i++) {
		sum += i;
	}
		printf("\nTong 1 -> %d: %d", n, sum);
}



int main(int argc, char *argv[]) {
char ten[100];
char gt[100];
int tuoi; 
char email[100];
char diachi[1000];
char sdt[100];
showInfor(ten,gt,tuoi,diachi,email,sdt);
int msg,n ;
printf("\nNhap n =  ");
scanf("%d",&n);
showMessage(3);
showMessage(3);
showMessage(3);
printf("\nGiai thua cua %d la: %g\n", n, Giai_thua(n));
n = 10;
int sum;
tinhtong(10);
int s1 = Giai_thua(n);
int s2 = tinhtong(10);
if(s1 > s2) {
		printf("\nGiai thua cua 5 > tinh tong tong tu 1 -> 10");
	} else {
		printf("\nGiai thua cua 5 < tinh tong tong tu 1 -> 10");
	}


	return 0;
}



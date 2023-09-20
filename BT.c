#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Khai bao mang gom N phan tu -> Nhap cac phan tu trong mang
	int N;
	printf("\nNhap N = ");
	scanf("%d", &N);
	int t [N];
	
	//Khai bao gom cac phan tu 1, 8 , 22, 100, 99
	int k[5];
	k[0] = 1;
	k[1] = 8;
	k[2] = 22;
	k[3] = 100;
	k[4] = 99;
	
//hoac cach nhanh hon
	int k[5] = {1, 8, 22, 100, 99};
	int i;
	for(i = 0; i <5; i++ ){
		printf("\nk[%d] = %d", i, k[i]);
	}
// Khai bao mang 2 chieu (so row = 5, column = 4) 
	int m[5][4];
	m[0][0] = 1;
	m[0][1] = 5;
	m[0][2] = 11;
	m[0][3] = 22;
	
	int j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			printf("\nNhap m[%d][%d]",i,j);
			scanf("%d", &m[i],[j]);
		}
	}
	
// In cac phan tu trong mang:
//Yc1: Hien thi ra dc m[i][j] = a
for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			printf("\nNhap m[%d][%d] = %d",i,j, m[i][j]);
//Yc2 Hien thi giong ma tran
	printf("\nHien thi theo kieu matrix");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			printf("%d", m[i][j]);
		}
	}
	printf("\n");
	
//Cach nhap chuoi lay duoc dau cach
	char str[100];
	printf("\nNhao str =");
	gets(str);
	printf("%s", str);
	// cach khac de in 
	puts(str);
	
//
	char s1[50] = "Hello";
	char s2[50] = "World";
	// Cau 1 Lam sao de noi 2 chuoi s1, s2 
	strcat(s1, s2);
	puts(s1);
	
//ung dung manh khi hoc structure
	char s1[50] = "abc";
	char s2[50] = "abc";
	// Neu cmp = 0 -> s1 va s2 giong nhau
	// Neu cmp = 1 -> s1 > s2
	// Neu cmp = -1 -> s1 < s2
 	int cmp = strcmp(s1,s2);
 	printf("\ncmp = %d", cmp);
	
//Lay do dai thuc te cua s1 va s2
	printf(\nDo dai s1 = %d, strlen(s1));

// Sao chep noi dung cua s2 sang s1 (gan gia tri)
	char s1[50] = "abc";
	char s2[50] = "Xin chao";
	strcpy(s1,s2);
	printf("\n%s",s1);
	 
	return 0;
}

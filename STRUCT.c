#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef int SO_NGUYEN;
typedef unsigned int SO_NGUYEN_DUONG;

//struct ST_Student {
//	char name[50], address[100];
//	int age;
//};
typedef struct ST_Student {
	char name[50], address[100];
	int age;
} Student;

//struct ST_Animal {
//	char name[50];
//	int age;
//};
typedef struct ST_Animal {
	char name[50];
	int age;
} Animal;

int main(int argc, char *argv[]) {
//	int x;
//	printf("\nNhap x = ");
//	scanf("%d", &x);
//	
//	SO_NGUYEN y;//int y
//	printf("\nNhap y = ");
//	scanf("%d", &y);
//	
//	SO_NGUYEN_DUONG t; //unsigned int t
//	printf("\nNhap t = ");
//	scanf("%d", &t);
	
	//Bai toan: quan ly thong tin sinh vien (name, age, address), dong vat (name, age)
	//Thong tin sinh vien
//	char name[50], address[100];
//	int age;
	//Thong tin dong vat
//	char animalName[50];
//	int animalAge;
	
	//gap van de -> phan biet var (bien) cua tung doi tuong
//	char animalName[50], name[50], address[100];
//	int age, animalAge;
//	struct ST_Student sv;
	Student sv;
	Student sv2;
//	struct ST_Animal dongvat;
	Animal dongvat;
	
	//Nhap thong tin sinh vien
//	printf("\nTen sinh vien: ");
//	fflush(stdin);fflush(stdout);
//	gets(sv.name);
//	printf("\nNhap dia chi: ");
//	fflush(stdin);fflush(stdout);
//	gets(sv.address);
//	printf("\nNhap tuoi: ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d", &sv.age);
//	
//	printf("\nThong tin: %s, %d, %s", sv.name, sv.age, sv.address);
	
	//Khai bao mang struct -> Danh sach sinh vien gom 5 phan tu
	int s[5];
	Student stdList[5];//khai bao mang sinh vien gom 5 phan tu.
	
	//Nhap thong tin cho 5 sinh vien
	int i;
	for(i=0;i<5;i++) {
		printf("\nNhap thong tin sinh vien %d", i + 1);
		printf("\nTen sinh vien: ");
		fflush(stdin);fflush(stdout);
		gets(stdList[i].name);
		printf("\nNhap dia chi: ");
		fflush(stdin);fflush(stdout);
		gets(stdList[i].address);
		printf("\nNhap tuoi: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &stdList[i].age);
	}
	
	for(i=0;i<5;i++) {
		printf("\nThong tin: %s, %d, %s", stdList[i].name, stdList[i].age, stdList[i].address);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct ST_SinhVien {
	char name[50], rollno[20];
	int age;
} SinhVien;

void test01() {
	//Ghi noi dung: SINH VIEN APTECH 19 LE THANH NGHI -> test.txt
	
	//B1. Khai bao
	FILE *fp;
	
	//B2. Mo ket noi toi file
	fp = fopen("test.txt", "a");
	
	//B3. Ghi noi dung vao file
//	printf("\nNhap noi dung can them: ");
	char str[50] = "SINH VIEN APTECH 19 LE THANH NGHI\n";
//	fflush(stdin);fflush(stdout);
//	gets(str);
	
	fputs(str, fp);
	
	//B4. Dong file
	fclose(fp);
}

void test02() {
	//Ghi noi dung: SINH VIEN APTECH 19 LE THANH NGHI -> test.txt
	
	//B1. Khai bao
	FILE *fp;
	
	//B2. Mo ket noi toi file
	fp = fopen("test.txt", "a");
	if(ferror(fp)) {
		printf("\nMo file bi error");
	} else {
		//B3. Ghi noi dung vao file
		char str[50] = "SINH VIEN APTECH 19 LE THANH NGHI\n";
		
		fputs(str, fp);
	}
	
	//B4. Dong file
	fclose(fp);
}

void test03() {
	//Ghi noi dung: SINH VIEN APTECH 19 LE THANH NGHI -> test.txt
	
	//B1. Khai bao
	FILE *fp;
	
	//B2. Mo ket noi toi file
	fp = fopen("test.txt", "r");
	if(ferror(fp)) {
		printf("\nMo file bi error");
	} else {
		//B3. Ghi noi dung vao file
//		char s[50];
		char c;
		while(!feof(fp)) {
//			fgets(s, 50, fp);
//			printf("%s", s);
			c = fgetc(fp);
			printf("%c", c);
		}
	}
	
	//B4. Dong file
	fclose(fp);
}

void test04() {
	int n, i;
	printf("\nNhap so sinh vien can them: ");
	scanf("%d", &n);
	
	SinhVien stdList[n];
	
	for(i=0;i<n;i++) {
		printf("\nNhap ten: ");
		fflush(stdin);fflush(stdout);
		gets(stdList[i].name);
		printf("\nNhap msv: ");
		fflush(stdin);fflush(stdout);
		gets(stdList[i].rollno);
		printf("\nNhap tuoi: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &stdList[i].age);
	}
	
	printf("\nHien thi thong tin sinh vien");
	for(i=0;i<n;i++) {
		printf("\nTen: %s, msv: %s, tuoi: %d", stdList[i].name, stdList[i].rollno, stdList[i].age);
	}
	
	//Yeu cau: luu thong tin sinh vien stdList -> student.dat
	//B1. Khai bao
	FILE *fp;
	
	//B2. Mo ket noi toi file
	fp = fopen("student.dat", "wb");
	if(ferror(fp)) {
		printf("\nMo file bi error");
	} else {
		//B3. Ghi noi dung vao file
		fwrite(stdList, sizeof(SinhVien), n, fp);
	}
	
	//B4. Dong file
	fclose(fp);
}

void test05() {
	SinhVien stdList[3];
	//B1. Khai bao
	FILE *fp;
	
	//B2. Mo ket noi toi file
	fp = fopen("student.dat", "rb");
	if(ferror(fp)) {
		printf("\nMo file bi error");
	} else {
		//B3. Ghi noi dung vao file
		fread(stdList, sizeof(SinhVien), 3, fp);
	}
	int i;
	for(i=0;i<3;i++) {
		printf("\nTen: %s, msv: %s, tuoi: %d", stdList[i].name, stdList[i].rollno, stdList[i].age);
	}
	
	//B4. Dong file
	fclose(fp);
}

int main(int argc, char *argv[]) {
	//test01();
//	test02();
//	test03();
//	test04();
	test05();
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct spdientu_st{
	char ten[20],ma[15], nhasx[20];
	long int gia;
}spdientu;
void showMenu();
void nhapthongtin();
void xuatthongtin();
void timkiemnhasanxuat();
void saveFile();
int main(int argc, char *argv[]) {
	spdientu danhsachsp[3];
	int choose;
	do{
		showMenu();
		scanf("%d",&choose);
		switch(choose){
			case 1:{
				nhapthongtin(danhsachsp);
				break;
			}
			case 2:{
				xuatthongtin(danhsachsp);
				break;
			}
			case 3:{
			timkiemnhasanxuat(danhsachsp);	
				break;
			}
			case 4:{
				saveFile(danhsachsp);
				break;
			}
			case 5:{
				printf("Thoat!!!");
				break;
			}
			
			default:{
				printf("\nNhap sai xin moi nhap lai !!!");
				break;
			}
			
		}
	}while (choose != 5);
	return 0;
}

void showMenu(){
printf("\n1. Nhap du lieu cua tung san pham. ");
	printf("\n2. Sap xep va hien thi thong tin chi tiet cua tung san pham theo ten (Z->A), thong ke theo nha san xuat. ");
	printf("\n3. Tim  san pham theo nha san xuat ");
	printf("\n4. Ghi vao tap tin nhi phan spdientu.dat. ");
	printf("\n5. Thoat. ");
	printf("\nChon: ");	
}
void nhapthongtin(spdientu *p){
	int i;
	for(i=0;i<3;i++){
		printf("\nNhap san pham %d: ",i+1);
		fflush(stdin);fflush(stdout);
		printf("\nTen: ");
		gets(p[i].ten);
		fflush(stdin);fflush(stdout);
		printf("\nMa: ");
		gets(p[i].ma);
		fflush(stdin);fflush(stdout);
		printf("\nNha san xuat: ");
		gets(p[i].nhasx);
		fflush(stdin);fflush(stdout);
		printf("\nGia: ");
		scanf("%ld", &p[i].gia);
	}
	
}
void xuatthongtin(spdientu *p){
	int i,j;
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			int cmp=strcmp(p[i].ten,p[j].ten);
			if(cmp<0){
				spdientu temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	printf("\n%s||%-20s||%-20s||%-20s||%-20s||","STT","Ten","Ma","Nha san xuat", "Gia");
	for(i=0;i<3;i++){
	printf("\n00%d||%-20s||%-20s||%-20s||%-20ld||",i+1,p[i].ten,p[i].ma,p[i].nhasx,p[i].gia);
	}
	int countList[3];
	for(i=0;i<3;i++){
		countList[i] = 1;
		
	}
	for(i=0;i<2;i++){
		if(countList[i] == 0){
				continue;
		}
	
	for(j=i+1;j<3;j++){
		if(countList[j] == 0){
				continue;
		}
	
int cmp = strcmp(p[i].nhasx, p[j].nhasx);
			if(cmp==0) {
		countList[i]++;
		countList[j]--;
		
	}
}
}
	for(i=0;i<3;i++){
		if(countList[i]>0){
			printf("\nNha san xuat %s co %d san pham",p[i].nhasx, countList[i]);
		}
	}
}
void timkiemnhasanxuat(spdientu *p){
	int i;
	int count = 0;
	char timkiem[50];
	printf("\nNhap ten nha san xuat: ");
	fflush(stdin);fflush(stdout);
	gets(timkiem);
	for(i=0;i<3;i++){
		int cmp = strcmp(p[i].nhasx,timkiem);
		if (cmp==0){
			if(count == 0){
				printf("\n%s||%-20s||%-20s||%-20s||%-20s||","STT","Ten","Ma","Nha san xuat", "Gia");
			}
			count++;
			printf("\n00%d||%-20s||%-20s||%-20s||%-20ld||",i+1,p[i].ten,p[i].ma,p[i].nhasx,p[i].gia);
		}
	}
	if(count == 0){
		printf("\nKhong co san pham cua nha san xuat nay");
	}
	
}
void saveFile(spdientu *p){
	FILE *fp;
	fp = fopen("spdientu.dat","wb");
	fwrite(p,sizeof(spdientu),3,fp);
	fclose(fp);
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct book_st{
	char ten[30], theloai[30];
	int giatien, namxuatban;
	
}book;
book bookList[3];
void showMenu(){
	printf("\n1. Nhap du lieu cua tung quyen sach");
	printf("\n2. Sap xep, hien thi thong tin chi tiet cua tung quyen sach theo the loai. Thong ke sach theo nam xuat ban.");
	printf("\n3. Tim quyen sach theo the loai");
	printf("\n4. Ghi vao tap tin nhi phan book.dat");
	printf("\n5. Thoat");
	printf("\nChon: ");

}
void nhapdulieu(){
	int i;
	for(i=0;i<3;i++){
		printf("\nNhap quyen sach %d :",i+1);
		printf("\nTen: ");
		fflush(stdin);fflush(stdout);
		gets(bookList[i].ten);
		printf("\nThe loai: ");
		fflush(stdin);fflush(stdout);
		gets(bookList[i].theloai);
		printf("\nGia tien: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &bookList[i].giatien);
		printf("\nNam xuat ban: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &bookList[i].namxuatban);
	}
}

void xuatthongtin(){
	int i,j;
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			int cmp = strcmp(bookList[i].theloai, bookList[j].theloai);
			if(cmp > 0){
				book tmp = bookList[i];
				bookList[i] = bookList[j];
				bookList[j] = tmp;
			}
		}
	}
	printf("%s||%-20s||%-20s||%-20s||%-20s\n", "STT","Ten","The loai", "Gia tien","Nam xuat ban");
	for(i=0;i<3;i++){
	printf("00%d||%-20s||%-20s||%-20d||%-20d\n", i+1,bookList[i].ten,bookList[i].theloai, bookList[i].giatien,bookList[i].namxuatban);	
	}
	int countList[3];
	for(i=0;i<3;i++) {
		countList[i] = 1;
	}
	for(i=0;i<2;i++) {
		if(countList[i] == 0) {
			continue;
		}
		for(j=i+1;j<3;j++) {
			if(countList[j] == 0) {
				continue;
			}
			
		if(bookList[i].namxuatban == bookList[j].namxuatban) {
				countList[i]++;
				countList[j]--;
			}
		}
	}
	for(i=0;i<3;i++) {
		if(countList[i] > 0) {
			printf("\nNam %d co %d quyen sach", bookList[i].namxuatban, countList[i]);
		}
	}
}

void timkiemtheloai(){
	int i;
	int count = 0;
	char type[50];
	printf("\nNhap the loai can tim: ");
	fflush(stdin);fflush(stdout);
	gets(type);
	for(i=0;i<3;i++){
		int cmp = strcmp(type,bookList[i].theloai);
		if (cmp == 0){
			count++;
	}
	}
	if(count != 0){
		printf("%s||%-20s||%-20s||%-20s||%-20s\n", "STT","Ten","The loai", "Gia tien","Nam xuat ban");
	count = 0;
}
	for(i=0;i<3;i++){
		int cmp = strcmp(type,bookList[i].theloai);
		if (cmp == 0){
		printf("00%d||%-20s||%-20s||%-20d||%-20d\n", i+1,bookList[i].ten,bookList[i].theloai, bookList[i].giatien,bookList[i].namxuatban);	
	count++;
	}
		}
		if(count==0){
		printf("\nKhong co quyen sach thuoc the loai nay.");
	}
	}
void Save(){
	FILE *fp;
	fp = fopen("book.dat", "wb");
	fread(bookList, sizeof(book), 3,fp);
	fclose(fp);
}

int main(int argc, char *argv[]) {
	int choose;
	do{
		showMenu();
		scanf("%d", &choose);
		switch(choose){
			case 1:{
				nhapdulieu();
				break;
			}
			case 2:{
				xuatthongtin();
				break;
			}
			case 3:{
				timkiemtheloai();
				break;
			}
			case 4:{
				Save();
				break;
			}
			case 5:{
				printf("\nBan chon thoat!!!");
				break;
			}
			default:{
				printf("\nNhap sai!!!");
				break;
			}
		}
		
		
	}while(choose != 5);
	
	return 0;
}

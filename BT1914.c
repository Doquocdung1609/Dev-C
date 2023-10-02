#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ST_cinema{
char Name[50],Address[35];
int Seats;	
}Cinema;
 
	int i;
void showMenu() {
	printf("\n1. Nhap du lieu quan ly danh sach rap chieu phim");
	printf("\n2. Hien thi danh sach rap ra man hinh");
	printf("\n3. Tim rap theo so ghe toi thieu");
	printf("\n4. Luu du lieu ra tep cinema.dat");
	printf("\n5. Doc du lieu tu tep cinema.dat");
	printf("\n6. Thoat");
	printf("\nChon: ");
}



int main(int argc, char *argv[]) {
		Cinema cinemaList[4];



    int choose;
	do{
		showMenu();
		
	fflush(stdin); fflush(stdout);
	
		scanf("%d", &choose);
		
		switch(choose){
			case 1:{
			for(i = 0; i < 4; i++){
		
	printf("\nNhap thong tin rap chieu phim %d ",i+1);
		printf("\nTen rap chieu: ");
		fflush(stdin);fflush(stdout);
		gets(cinemaList[i].Name);
		printf("\nNhap dia chi: ");
		fflush(stdin);fflush(stdout);
		gets(cinemaList[i].Address);
		printf("\nNhap so luong ghe: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &cinemaList[i].Seats);

    
   
}
				break;
			}
			case 2:{
				
		int i,j;
				for(i=0;i<3;i++){
					for(j=i+1;j<4;j++){
					int cmp = strcmp(cinemaList[i].Name, cinemaList[j].Name);
					if (cmp > 0){
						Cinema tmp = cinemaList[i];
				cinemaList[i] =cinemaList[j];
				cinemaList[j] = tmp;
					}	
					}
				}
		printf("\n---------------------------------------------------------------------\n");
		printf("|%-20s | %-20s | %-20s | \n", "Name","Address","Seats");

	for(i=0;i<4;i++) {
		printf("\n---------------------------------------------------------------------\n");
		printf("|%-20s | %-20s | %-20d |\n", cinemaList[i].Name, cinemaList[i].Address, cinemaList[i].Seats);
	
	}
		printf("\n---------------------------------------------------------------------\n");
				break;
			}
			case 3:{
		int i,j, timkiem;
		printf("\nNhap so ghe toi thieu can tim: ");
		scanf("%d", &timkiem);
		printf("\n---------------------------------------------------------------------\n");
		printf("|%-20s | %-20s | %-20s | \n", "Name","Address","Seats");
		int count = 0;
		for(i=0;i<4;i++) {
		if(cinemaList[i].Seats >= timkiem){
		count++;
		printf("\n---------------------------------------------------------------------\n");
		printf("|%-20s | %-20s | %-20d |\n", cinemaList[i].Name, cinemaList[i].Address, cinemaList[i].Seats);
	
	}
}
if(count == 0){
	
	printf("\nKhong co rap nao phu hop");
}
		printf("\n---------------------------------------------------------------------\n");
		
				break;
			}
			case 4:{
	FILE *fp;
	fp = fopen("cinema.dat", "wb");
	fwrite(cinemaList, sizeof(Cinema), 4, fp);
	fclose(fp);
				break;
			}
			case 5:{
	FILE *fp;
	fp = fopen("cinema.dat", "rb");
	fread(cinemaList, sizeof(Cinema), 4, fp);
	fclose(fp);
				break;
			}
			case 6:{
				printf("\nThoat !!!!");
				break;
			}
			default:{
				printf("\nNhap sai!!!");
				break;
			}
		}
	}while(choose != 6);
    
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ST_HCN{
	float dientich,chieudai,chieurong;
} HCN;
int s;
	int i;
	HCN thongtinList[5];
void dientich(){
	for(i=0;i<5;i++){
		printf("\nNhap HCN %d", i + 1);
		printf("\nNhap chieu dai =  ");
		fflush(stdin);fflush(stdout);
		scanf("%f", &thongtinList[i].chieudai);
		printf("\nNhap chieu rong = ");
		fflush(stdin);fflush(stdout);
		scanf("%f", &thongtinList[i].chieurong);

	
	thongtinList[i].dientich = thongtinList[i].chieudai * thongtinList[i].chieurong;
	printf("\nDien tich HCN = %f ", thongtinList[i].dientich);
	s += thongtinList[i].dientich;

}
	printf("\nTong dien tich 5 HCN = %d ", s);


}


int main(int argc, char *argv[]) {

	
		dientich();
	
	

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int n,i;
void showMenu() {
	printf("\n1. Nhap so nguyen N");
	printf("\n2. Tinh N!");
	printf("\n3. Tinh tong 1-> N");
	printf("\n4. So sanh N! va tong 1 -> N");
	printf("\n5. Thoat");
	printf("\nChon: ");
}
void Input(){
	printf("\nNhap vao so nguyen N = ");
	scanf("%d", &n);
	
}
void giaithua(){
	int gt = 1;
	for (i=1;i<=n;i++){
		gt = gt * i;
	}
	printf("\n%d! = %d\n", n,gt);
}
void tinhtong(int n){
	int i, sum = 0;
	for(i=1;i<=n;i++){
		sum += i;
		
	}
	printf("\nTong 1 -> %d = %d",n,sum );
	
}
void sosanh(){
	int gt = 1;
	for (i=1;i<=n;i++){
		gt = gt * i;
	}
	int i, sum = 0;
	for(i=1;i<=n;i++){
		sum += i;
		
	}
	if(gt > sum){
		printf("\n%d! > Tong 1 -> %d",n,n);
	}else{
		printf("\n%d! < Tong 1 -> %d",n,n);
	}
}
int main(int argc, char *argv[]) {
	int choose;
	do{
		showMenu();
		
		fflush(stdin); fflush(stdout);
		scanf("%d", &choose);
		
		switch(choose){
			case 1:{
				Input();
				break;
			}
			case 2:{
					giaithua();
				break;
			}
			case 3:{
				tinhtong(n);
				break;
			}
			case 4:{
					sosanh();
				break;
			}
			case 5:{
				printf("\nThoat !!!!");
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

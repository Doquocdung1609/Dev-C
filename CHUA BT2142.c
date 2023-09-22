#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dataList[100];
	char choose;
	int x, index = 0, i, j, count,newSize;
	
	
	do {
		printf("\n1. Them phan tu vao mang");
		printf("\n2. Sap xep");
		printf("\n3. Tim kiem");
		printf("\n4. Xoa");
		printf("\n5. Hien thi");
		printf("\n6. Thoat");
		printf("\nChon: ");
		fflush(stdin);fflush(stdout);
		scanf("%c", &choose);
		
		switch(choose) {
			case '1': {
				printf("\nNhap phan tu can them: ");
				scanf("%d", &x);
				dataList[index++] = x;
				break;
			}
			case '2': {
				//Phan 1: Sap xep mang dataList theo thu tu tang dan
				for(i=0;i<index-1;i++) {
					for(j=i+1;j<index;j++) {
						if(dataList[i] > dataList[j]) {
							x = dataList[i];
							dataList[i] = dataList[j];
							dataList[j] = x;
						}
					}
				}
				printf("\nKet qua sap xep: ");
				for(i=0;i<index;i++) {
					printf("%d ", dataList[i]);
				}
				printf("\n");
				break;
			}
			case '3': {
				printf("\nNHap phan tu can tim: ");
				scanf("%d", &x);
				count = 0;
				for(i=0;i<index;i++) {
					if(dataList[i] == x) {
						count++;
					}
				}
				printf("\nSo phan tu %d tim thay trong mang la: %d", x, count);
				break;
			}
			case '4': {
				printf("\nNhap so can xoa: ");
				scanf("%d", &x);
				newSize =0;
				int arr[100];
				for(i=0; i<index;i++) {
					if (dataList[i] != x) {
						arr[newSize] = dataList[i];
						newSize++;
					}
				}
				index = newSize;
				printf("\nDanh sach phan tu: ");
				for(i=0;i<newSize;i++){
					dataList[i] = arr[i];
					printf("%d ", dataList[i]);
				}
				printf("\n");
				break;
			}
			case '5': {
				printf("\nDanh sach phan tu: ");
				for(i=0;i<index;i++){
					printf("%d ", dataList[i]);
				}
				printf("\n");
				break;
			}
			case '6': {
				printf("\nThoat!!!");
				break;
			}
			default: {
				printf("\nNhap sai!!!");
				break;
			}
		}
	} while(choose != '6');
	
	return 0;
}

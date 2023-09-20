#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


 
 int key,n,a;
 int daNhap = 1;
 char ten[100];
 char gt[100];
 int tuoi; 
char email[100];
char diachi[1000];
 char sdt[100];



printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN    **\n");
        printf("**      1. Nhap thong tin sinh vien     **\n");
        printf("**      2. Hien thi thong tin sinh vien **\n");
        printf("**      3. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&key);
        switch(key){


case 1:
                printf("\nBan da chon nhap thong tin sinh vien");
                daNhap = 1;
                printf("\nBam phim bat ky de tiep tuc");
                getch();
                printf("\nNhap ten: "); fflush(stdin); gets(ten);
                printf("\nHo ten SV: %s", ten);
                printf("\nNhap gioi tinh: "); gets(gt);
                printf("\nGioi tinh: %s", gt);
                printf("\nNhap tuoi: "); scanf("%d", &tuoi);
                printf("\nTuoi SV  : %d",tuoi);
                printf("\nNhap dia chi: "); fflush(stdin); gets(diachi);
                printf("\nDia chi: %s", diachi);
                printf("\nNhap email: "); fflush(stdin); gets(email);
                printf("\nemail: %s", email);
                printf("\nNhap sdt: "); fflush(stdin); gets(sdt);
                printf("\nsdt: %s", sdt);
                printf("\nBan da nhap thanh cong");
                 break;
                
                
case 3:
                printf("\nBan da chon ket thuc chuong trinh");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay");
                printf("\nBam phim bat ky de tiep tuc");
                getch();
                break;
            }
            
        
                
                
printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN    **\n");
        printf("**      1. Nhap thong tin sinh vien     **\n");
        printf("**      2. Hien thi thong tin sinh vien **\n");
        printf("**      3. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&key);
        switch(key){ 
        case 2:
                if(daNhap){
                    printf("\nBan da chon hien thi thong tin sinh vien");
                
                }else{
                    printf("\nNhap thong tin sinh vien truoc");
                }
                
                printf("\nHo ten SV: %s", ten);
                printf("\nGioi tinh: %s", gt);
                printf("\nTuoi SV  : %d",tuoi);
                printf("\nDia chi: %s", diachi);
                printf("\nemail: %s", email);
                printf("\nsdt: %s", sdt);
                printf("\nBam phim bat ky de tiep tuc");
                getch();
            }
             
                 
    printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY SINH VIEN    **\n");
        printf("**      1. Nhap thong tin sinh vien     **\n");
        printf("**      2. Hien thi thong tin sinh vien **\n");
        printf("**      3. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&key);
        switch(key){ 
             


case 3:
                printf("\nBan da chon ket thuc chuong trinh");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay");
                printf("\nBam phim bat ky de tiep tuc");
                getch();
                break;
            }
        
        
        
	return 0;
}

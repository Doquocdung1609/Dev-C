#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct ST_Thongtin {
  char name[50], diachi[50], email[50], sdt[50],age[10];
  
}
Thongtin;
void thongtin() {
  int age;
  printf("\nNhap ten: ");
  char name[50];
  fflush(stdin);
  fflush(stdout);
  gets(name);
  printf("\nNhap tuoi: ");
  char tuoi[10];
  fflush(stdin);
  fflush(stdout);
  gets(age);
  printf("\nNhap dia chi: ");
  char diachi[50];
  fflush(stdin);
  fflush(stdout);
  gets(diachi);
  printf("\nNhap email: ");
  char email[50];
  fflush(stdin);
  fflush(stdout);
  gets(email);
  printf("\nNhap sdt: ");
  char sdt[50];
  fflush(stdin);
  fflush(stdout);
  gets(sdt);
  printf("\nHien thi thong tin \n");
  printf("\nTen: %s\n", name);
  printf("\ntuoi: %s\n", age);
  printf("\ndia chi: %s\n", diachi);
  printf("\nemail: %s\n", email);
  printf("\nsdt: %s\n", sdt);

  FILE * fp;
  fp = fopen("thongtincanhan.txt", "a");
   fputs("\n",fp);
  fputs(name, fp);
     fputs("\n",fp);
    fputs(age, fp);
  fputs("\n",fp);
  fputs(diachi, fp);
   fputs("\n",fp);
  fputs(email, fp);
   fputs("\n",fp);
  fputs(sdt, fp);
   fputs("\n",fp);
  fclose(fp);
}
int main(int argc, char * argv[]) {

  thongtin();
  return 0;
}

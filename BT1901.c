#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Bai 1
char str[100];
char s1[100];
char s2[100];
   int dodai;
  
   printf("\nNhap mot chuoi bat ky: ");
   gets(str);
  
   dodai = strlen(str);
  
   printf("\nDo dai cua chuoi la: %d", dodai);
//bai 2   
   printf("\nNhap chuoi s1 bat ky: ");
   gets(s1);
   printf("\nNhap chuoi s2 bat ky: ");
   gets(s2);
   strcat(s1, s2);
puts(s1);

   dodai = strlen(s1);
   printf("\nDo dai cua chuoi la: %d", dodai);
   
 //bai 3  
 	char str1[100];
 	printf("\nNhap chuoi:");
 	gets(str1);
   int length = strlen(str1);
   int i;
   printf("\nHien thi chuoi:");
   for(i=0;i< length;i++){
   	printf("\n%c", str1[i]);
   }
   
	return 0;
}

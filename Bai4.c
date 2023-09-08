#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Bai 1
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");
//Bai 2
	printf("===================================\n");
	printf("| STT | Ho Ten            | Tuoi     |  Gioi Tinh       |\n");
	printf("|01   | Nguyen A          | 20       | Nam              |\n");
	printf("|02   | Nguyen B          | 22       | Nam              |\n");
	printf("|03   | Nguyen C          | 26       | Nam              |\n");
//Bai 3
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 10*a*a + 5*b*c + c*c;
	printf("d = %d", d);
	return 0;
}

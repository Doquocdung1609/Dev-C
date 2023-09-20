#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char rollno[16], name[50], address[200];
	int age;
	printf("name=");
	scanf("%s", &name);
	printf("age=");
	scanf("%d", &age);
	printf("rollno=");
	scanf("%s", &rollno);
	printf("address=");
	scanf("%s", &address);
	printf("\n=============================");
	printf("\n| Ten           | Tuoi    | Ma SV     | Dia chi        |");
	printf("\n=============================");
	printf("\n|%s|%d|%s|%s|", name, age, rollno, address);
	printf("\n=============================");
	
	return 0;
}

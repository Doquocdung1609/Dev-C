#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int n,i,j;;
scanf("%d", &n);
printf("0 1 ");
int x1 = 0, x2 = 1;
for(i = 3; i<=n; i++){
	int x3 = x1 + x2;
	if(x3 < n){

	printf("%d ", x3);
	x1 = x2;
	x2 = x3;
}
}
	return 0;
}

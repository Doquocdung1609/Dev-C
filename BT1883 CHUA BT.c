#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int f0=1,f1=1;
	int max, fn;
	printf("\nNhao so Fibonacci max = ");
	scanf("%d", &max);
	printf("\n%d %d", f0,f1);
	fn = f0 + f1;
	while(fn < max){
		printf(" %d", fn);
			f0 = f1;
			f1 = fn;
			fn = f0 + f1;
		
	}
	
//hoac for(;;){
//	fn = f0 + f1;
//	if(fn > max){
//		break;
//	}	
//	printf("%d", fn);
//	f0 = f1;
//	f1 = fn;

//hoac for(fn = f0 + f1; fn <= max; fn = f0+f1){
//	printf("%d", fn);
//	f0 = f1;
//	f1 = fn;
//}
	
	return 0;
}

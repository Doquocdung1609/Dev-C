#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct motorbike_st{
	char name[20], manufacturer[10], madein[12];
	long int price;
}motorbike;
void showMenu();
void inputdata();
void outputdata();
void findmanufacturer();
void saveFile();

int main(int argc, char *argv[]) {
	motorbike motorbikeList[3];
	int choose;
	do{
		
		showMenu();
		scanf("%d", &choose);
		switch(choose){
			case 1:{
				inputdata(motorbikeList);
				break;
			}
			case 2:{
				outputdata(motorbikeList);
				break;
			}
			case 3:{
				findmanufacturer(motorbikeList);
				break;
			}
			case 4:{
				saveFile(motorbikeList);
				break;
			}
			case 5:{
				printf("\nEXIT!!!");
				break;
			}
			default:{
				printf("\nChon sai vui long nhap lai !!!!");
				break;
			}
			
		}
		
	}while(choose != 5);
	return 0;
}

void showMenu(){
	printf("\n1. Input data of motorbike ");
	printf("\n2. Sort, display details information and statistic of all  motorbikes");
	printf("\n3. Find the  motorbike  of manufacturer ");
	printf("\n4. Save to text file motorbike.txt. ");
	printf("\n5. Exit. ");
	printf("\nChoose: ");
}
void inputdata(motorbike *p){
	int i;
	for(i=0;i<3;i++){
		fflush(stdin);fflush(stdout);
		printf("\nEnter data of motorbike %d :", i+1);
		fflush(stdin);fflush(stdout);
		printf("\nName : ");
		gets(p[i].name);
		fflush(stdin);fflush(stdout);
		printf("\nManufacturer: ");
		gets(p[i].manufacturer);
		fflush(stdin);fflush(stdout);
		printf("\nMade In : ");
		gets(p[i].madein );
		fflush(stdin);fflush(stdout);
		printf("\nPrice : ");
		scanf("%ld",&p[i].price);
		fflush(stdin);fflush(stdout);
	}
}
void outputdata(motorbike *p){
	int i,j;
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			int cmp = strcmp(p[i].name,p[j].name);
			if(cmp < 0){
			motorbike temp = p[i];
			p[i] = p[j];
			p[j] = temp;
		}
	}
}
	printf("\n%s ||%-20s||%-20s||%-20s||%-20s||", "No", "Name", "Manufacturer","Made In", "Price" );
	for(i=0;i<3;i++){
	printf("\n00%d||%-20s||%-20s||%-20s||%-20ld||", i+1,p[i].name,p[i].manufacturer,p[i].madein,p[i].price);
	}
	int countList[3];
	for(i=0;i<3;i++){
		countList[i] = 1;
	}
	for(i=0;i<2;i++){
		if(countList[i] == 0 ){
			continue;
		}
	}
		for(j=i+1;j<3;j++){
			if(countList[j] == 0 ){
			continue;
		}
		}
		if(p[i].manufacturer == p[j].manufacturer){
			countList[i]++;
			countList[j]--;
		}
		for(i=0;i<3;i++){
			if(countList[i]>0){
				printf("\n%s has %d motorbike ",p[i].manufacturer,countList[i]);
			}
		}
		
	
	
}

void findmanufacturer(motorbike *p){
	int i;
	int count = 0;
	char type[50];
	printf("\nEnter manufacturer for search : ");
	fflush(stdin);fflush(stdout);
	gets(type);
	for(i=0;i<3;i++){
		int cmp = strcmp(type, p[i].manufacturer);
		if(cmp==0){
			count++;
		}
	}
	if(count != 0){
		printf("\n%s ||%-20s||%-20s||%-20s||%-20s||", "No", "Name", "Manufacturer","Made In", "Price" );	
	count =0;
	}
	for(i=0;i<3;i++){
		int cmp = strcmp(type, p[i].manufacturer);
		if(cmp==0){
				printf("\n00%d||%-20s||%-20s||%-20s||%-20ld||", i+1,p[i].name,p[i].manufacturer,p[i].madein,p[i].price);
				count++;
		}
	}
	if(count == 0){
		printf("\nThere are no motorbike of this manufacturer");
	}
}
void saveFile(motorbike *p){
	FILE *fp;
	fp = fopen("motorbike.txt","w");
	int i;
	fprintf(fp, "\n%s ||%-20s||%-20s||%-20s||%-20s||","No","Name","Manufacturer","Made in","Price");
	for(i=0;i<3;i++){
	fprintf(fp, "\n00%d||%-20s||%-20s||%-20s||%-20ld||", i+1,p[i].name,p[i].manufacturer,p[i].madein,p[i].price);
	}
	fclose(fp);
}

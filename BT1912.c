#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef int item;
typedef struct
{
    item T[100]; 
    int size; 
}List; 
 
void Init(List *t); 
void Init(List *t); 
int Isempty (List t); 
int Isfull (List t); 
int Insert_k (List *t, item x, int k); 
void Input (List *t);
void Output (List t);
int Search (List t, item x); 
int Del_x(List *t, item x);
item init_x(); 
 

 
void Init(List *t) 
{

    (*t).size = 0; //size = 0.
}
 
int Isempty (List t)
{
    return (t.size==0);
}
 
int Isfull (List t)
{
    return (t.size==100);
}
 
item init_x() 
{
    int temp;
    scanf("%d",&temp);
    return temp;
}
 
int Insert_k (List *t, item x, int k)
{
    if (Isfull(*t)) 
    {
        printf("Danh sach day !");
        return 0;
    }
 
    if (k<1 || k>(*t).size+1) 
    {
        printf("Vi tri chen khong hop le !\n");
        return 0;
    }
    printf ("Nhap thong tin: ");
    x = init_x(); 
    int i;
    for (i = (*t).size; i >= k; i--)
        (*t).T[i] = (*t).T[i-1];
    (*t).T[k-1]=x;
    (*t).size++;
    return 1;
}
 
void Input (List *t)
{
    int n;
    printf("Nhap so phan tu cua danh sach: ");
    scanf("%d",&(*t).size);
    int i;
    for (i=0; i<(*t).size; i++)
    {
        printf("Nhap phan tu thu %d : ",i+1);
        (*t).T[i] = init_x();
    }
    

}

 
void Output (List t)
{
    printf("Danh sach: \n");
    int i;
    for (i=0; i<t.size; i++)
        printf("%5d",t.T[i]);
    printf("\n");
}
 



void tinhtong(List t){
	int i,tong = 0;
    for(i=0;i<t.size;i++){
    	tong+=(t.T[i]);
	}
	printf("\nTong = %d", tong);
}



int main(int argc, char *argv[]) {

	char choose;
	List t;
    Init(&t);
    Input(&t);
    Output(t);
    tinhtong(t);
	
	
	do {
		printf("\n1. Nhap vao so N nguyen");
		printf("\n2. Hien thi danh sach cac phan tu trong mang");
		printf("\n3. Tinh tong cac phan tu trong mang");
		printf("\n4. Sap xep theo thu tu tang dan");
		printf("\n5. Thoat");
		printf("\nChon: ");
		fflush(stdin);fflush(stdout);
		scanf("%c", &choose);
		
		switch(choose) {
			case '1': {

				item x;
            int k;
            printf ("Nhap vi tri can chen: ");
            scanf ("%d",&k);
            if (Insert_k(&t,x,k))
            {
                printf ("DS sau khi chen:\n"); 
                Output(t);
            }
            break;
			}
			case '2': {printf ("DS cac phan tu:\n"); 
                Output(t);
        		break;
			}
			case '3': {
			    tinhtong(t);		
			
				break;
			}
			case '4': {
					
            item x,i;
            int tg,j;
            for(i = 0; i <t.size - 1; i++){
        for( j = i + 1; j <t.size; j++){
            if(t.T[i] > t.T[j]){
                
                tg = t.T[i];
                t.T[i] = t.T[j];
                t.T[j] = tg;        
            }
        }
    }
            
                printf ("Day tang dan la:\n"); 
                for(i = 0; i <t.size; i++){
                Output(t);
            }
        
            break;
        }
		
			case '5': {
				printf("\nThoat!!!");
				break;
			}
			default: {
				printf("\nNhap sai!!!");
				break;
			}
		}
	} while(choose != '5');
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



typedef int item;
typedef struct
{
    item dataList[100]; 
    int size; 
}List; 
 
void Init(List *L); 
void Init(List *L); 
int Isempty (List L); 
int Isfull (List L); 
int Insert_k (List *L, item x, int k); 
void Input (List *L);
void Output (List L);
int Search (List L, item x); 
int Del_x(List *L, item x);
item init_x(); 
 

 
void Init(List *L) 
{

    (*L).size = 0; //size = 0.
}
 
int Isempty (List L)
{
    return (L.size==0);
}
 
int Isfull (List L)
{
    return (L.size==100);
}
 
item init_x() 
{
    int temp;
    scanf("%d",&temp);
    return temp;
}
 
int Insert_k (List *L, item x, int k)
{
    if (Isfull(*L)) 
    {
        printf("Danh sach day !");
        return 0;
    }
 
    if (k<1 || k>(*L).size+1) 
    {
        printf("Vi tri chen khong hop le !\n");
        return 0;
    }
    printf ("Nhap thong tin: ");
    x = init_x(); 
    int i;
    for (i = (*L).size; i >= k; i--)
        (*L).dataList[i] = (*L).dataList[i-1];
    (*L).dataList[k-1]=x;
    (*L).size++;
    return 1;
}
 
void Input (List *L)
{
    int n;
    printf("Nhap so phan tu cua danh sach: ");
    scanf("%d",&(*L).size);
    int i;
    for (i=0; i<(*L).size; i++)
    {
        printf("Nhap phan tu thu %d : ",i+1);
        (*L).dataList[i] = init_x();
    }
}
 
void Output (List L)
{
    printf("Danh sach: \n");
    int i;
    for (i=0; i<L.size; i++)
        printf("%5d",L.dataList[i]);
    printf("\n");
}
 
int Search (List L, item x)
{
    int i;
    for (i=0; i<L.size; i++)
        if (L.dataList[i] == x)
            return i+1;
    return 0;
}
 
int Del_k (List *L, item *x, int k)
{
    if (Isempty(*L))
    {
        printf("Danh sach rong !");
        return 0;
    }
    if (k<1 || k>(*L).size)
    {
        printf("Vi tri xoa khong hop le !");
        return 0;
    }
    *x=(*L).dataList[k-1]; 
    int i;
    for (i=k-1; i<(*L).size-1; i++) 
    (*L).dataList[i]=(*L).dataList[i+1];
    (*L).size--; 
    return 1;
}
 
int Del_x (List *L, item x)
{
    if (Isempty(*L))
    {
        printf("Danh sach rong !");
        return 0;
    }
 
    int i = Search(*L,x);
    if (!i)
    {
        printf("Danh sach khong co %d",x);
        return 0;
    }
    do
    {
        Del_k(L,&x,i);
        i = Search(*L,x);
    }
    while (i);
    return 1;
}
 
 
int main()
{
    List L;
    Init(&L);
    Input(&L);
    Output(L);
 
    int lua_chon;
    printf("\n1: Nhap bien x");
    printf("\n2: Sap xep theo chieu tang dan");
    printf("\n3: Tim mot phan tu trong DS");
    printf("\n4: Xoa phan tu x trong DS");
    printf("\n5: Hien thi");
    printf("\n6: Thoat");
    do
    {
        printf("\nBan chon: ");
        scanf("%d",&lua_chon);
    switch (lua_chon)
    {
        case 1:
        {
            item x;
            int k;
            printf ("Nhap vi tri can chen: ");
            scanf ("%d",&k);
            if (Insert_k(&L,x,k))
            {
                printf ("DS sau khi chen:\n"); 
                Output(L);
            }
            break;
        }
        case 2:
        {
            item x,i;
            int tg,j;
            for(i = 0; i <L.size - 1; i++){
        for( j = i + 1; j <L.size; j++){
            if(L.dataList[i] > L.dataList[j]){
                
                tg = L.dataList[i];
                L.dataList[i] = L.dataList[j];
                L.dataList[j] = tg;        
            }
        }
    }
            
                printf ("Day tang dan la:\n"); 
                for(i = 0; i <L.size; i++){
                Output(L);
            }
            break;
        }
        case 3:
        {
            item x;
            printf ("Moi ban nhap vao phan tu can tim: ");
            scanf("%d",&x);
            int k=Search(L,x);
            if (k) printf ("Tim thay %d trong DS tai vi tri thu: %d",x,k);
            else printf ("Khong tim thay %d trong danh sach !",x);
            break;
        }
        case 4:
      {
            item x;
            printf ("Nhap phan tu can xoa: ");
            scanf ("%d",&x);
            if (Del_x(&L,x))
            {
                printf ("DS sau khi xoa:\n");
                Output(L);
            }
            break;
            
        }
        case 5:
        	{printf ("DS cac phan tu:\n"); 
                Output(L);
        		break;
			}
        case 6:
		printf("\nBan da chon ket thuc chuong trinh");
		break;
      
	}
    }while (lua_chon !=7);
    return 0;
}

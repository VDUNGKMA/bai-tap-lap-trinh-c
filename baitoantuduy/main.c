#include <stdio.h>
#include <stdlib.h>
void nhapmang(int arr[],int kichthuoc)
{
	for(int i=0 ;i<kichthuoc;i++)
	{
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int kichthuoc)
{
	for(int i=0 ;i<kichthuoc;i++)
	{
		printf("%6d",arr[i]);
	}
}
void diachimax(int arr[],int kichthuoc)
{
	int max=arr[0],i;
	for(int i=0 ;i<kichthuoc;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n%d",max);
	printf("\n%d",&max);
}
void ghepmangkhongcansapxep(int arr[],int brr[],int crr[],int kichthuoc1,int kichthuoc2)
{
	int i=0,j=0,k=0;
	while(i<kichthuoc1&&j<kichthuoc2)
	{
		if(arr[i]>brr[j])
		{
			crr[k]=brr[j];
			j++;
		}
		else
		{
			crr[k]=arr[i];
			i++;
		}
		k++;
	}
	for(;i<kichthuoc1;i++)
	{
		crr[k]=arr[i];
			k++;
	}

	for(;j<kichthuoc2;j++)
	{
		crr[k]=brr[j];
		k++;
	}
	xuatmang(crr,k);
}
void nhapchuoi(char *str[],int *x)
{
	gets(str);
	while(strlen(*str)>*x)
	{
		printf("nhap lai chuoi \n");
		gets(*str);
	}
	printf("xuatchuoi \n");
	puts(*str);
}

void hoandoi(char *x,char *y)
{
	char c=*x;
		 *x=*y;
		 *y=c;
}
void bovaotemp(char str[],char temp[])
{
	char x;
	int k=0;
	printf("nhap vao kytu muon bo vao temp ");
	scanf("%c",&x);
	fflush(stdin);
	for(int i=0;i<=strlen(str);i++)
	{
				if(str[i]==x)
			{
				temp[k]=str[i];
				k++;
			}

	}
				temp[k]='\0';
	puts(temp);

}
int main()
{
   int arr[100],brr[100],crr[200],kichthuoc1,kichthuoc2;
   printf("nhap vao kich thuoc mang 1 ");
   scanf("%d",&kichthuoc1);
   nhapmang(arr,kichthuoc1);
   xuatmang(arr,kichthuoc1);
   printf("\n");
   printf("nhap vao kich thuoc mang 2");
   scanf("%d",&kichthuoc2);
   nhapmang(brr,kichthuoc2);
   xuatmang(brr,kichthuoc2);
  // diachimax(arr,kichthuoc);
  printf("\nmangghepkhongcansapxep\n");
  ghepmangkhongcansapxep(arr,brr,crr,kichthuoc1,kichthuoc2);
  //char str[]=" ",temp[]=" ",quequan[]=" ";
 // printf("\n");
  //bovaotemp(str,temp);
    return 0;
}

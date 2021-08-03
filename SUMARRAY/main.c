#include <stdio.h>
#include <stdlib.h>
void nhapmang(int arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{
		printf("nhap mang arr[%d]",i);
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{
		printf(" %d",arr[i]);
	}
}
void sapxep(int arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{	int c;
		for(int j=i+1;j<kichthuoc;j++)
		{
			if(arr[i]>arr[j])
			{
				c=arr[i];
				arr[i]=arr[j];
				arr[j]=c;
			}
		}
	}
	printf("mang sau khi da sap xep la ");
	xuatmang(arr,kichthuoc);
}
void MAX(int arr[],int kichthuoc)
{	int max=arr[0],max2=arr[1],j=0;
	for(int i=0;i<kichthuoc;i++)
	{
		if(max<arr[i])
		{	max =arr[i];
			j=i;
		}
	}printf("\nmax=%d ",max);
	printf("\n%d\n",j);
	for(int i=0;i<kichthuoc;i++)
	{
		if(max2<arr[i]&&arr[i]!=max)
			max2=arr[i];
	}
	printf("max2=%d",max2);

}
void MIN(int arr[],int kichthuoc)
{	int min=arr[0],i,j;
	for(int i=0;i<kichthuoc;i++)
	{
		if(min>arr[i])
		{	min =arr[i];
			j=i;
		}
	}printf("\nmin=%d ",min);
	printf("\n%d",j);

}

int main(){
	int arr[50],kichthuoc;
	printf("nhap kich thuoc ");
	scanf("%d",&kichthuoc);
	nhapmang(arr,kichthuoc);
	xuatmang(arr,kichthuoc);
	printf("\n");
	printf("\n");
	printf("\n");
	sapxep(arr,kichthuoc);
	MAX( arr, kichthuoc);
	MIN(arr,kichthuoc);
	return 10;
}
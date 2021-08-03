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
void MAX(int arr[],int kichthuoc)
{	int max=arr[0],max2=arr[1];
	for(int i=0;i<kichthuoc;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	for(int i=0;i<kichthuoc;i++)
	{
		if(max2<arr[i]&& arr[i]!=max)
			max2=arr[i];
	}
	printf("max=%d\n",max);
	printf("max2=%d\n",max2);
}
void sapxep(int arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{	int c;
		for(int j=i+1;j<kichthuoc;j++)
		{
			if(arr[i]>arr[j])
				c=arr[i];
				arr[i]=arr[j];
				arr[j]=c;
		}
	}
	printf("mang sau sap xep la ");
	for(int i=0;i<kichthuoc;i++)
	{
		printf(" %d",arr[i]);
	}
}
int main()
{	int arr[50],kichthuoc;
	printf("nhap kich thuoc mang ");
	scanf("%d",&kichthuoc);
	nhapmang(arr,kichthuoc);
	xuatmang(arr,kichthuoc);printf("\n");
	sapxep(arr,kichthuoc);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
void nhapmang(int arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{
		printf("nhap mang arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{
		printf("%d ",arr[i]);
	}
}
int tongArray(int arr[],int kichthuoc)
{
	int s=0;
	for(int i=0;i<kichthuoc;i++)
	{
		s=s+arr[i];
	}
	return s;
}
float trungbinhArray(int arr[],int kichthuoc)
{
	int  s=0;
	for(int i=0;i<kichthuoc;i++)
	{
		s=s+arr[i];
	}
	return (float)s/kichthuoc;
}
void MAXIMUM(int arr[],int kichthuoc)
{	int giatrimax;
	printf("nhap gia tri giatrimax ");
	scanf("%d",&giatrimax);
	for(int i=0;i<kichthuoc;i++)
	{
		if(arr[i]>giatrimax)
			arr[i]=0;
	}
	xuatmang(arr,kichthuoc);
}
void sapxepmang(int arr[],int kichthuoc)
{	int c;
	for(int i=0;i<kichthuoc;i++)
	{
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
	xuatmang(arr,kichthuoc);
}
int main()
{	int arr[1000],kichthuoc;
	printf("nhap kich thuoc mang ");
	scanf("%d",&kichthuoc);
	nhapmang(arr,kichthuoc);
	xuatmang(arr,kichthuoc);
	printf("\n");
	sapxepmang(arr,kichthuoc);
	printf("\n%d",tongArray(arr,kichthuoc));
	printf("\n%f\n",trungbinhArray(arr,kichthuoc));
	MAXIMUM(arr,kichthuoc);

    return 0;
}

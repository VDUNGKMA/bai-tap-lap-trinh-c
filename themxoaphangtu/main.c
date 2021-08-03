#include <stdio.h>
#include <stdlib.h>
void nhapmang(int arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{
		printf("nhap A[%d]=",i);
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
void ThemPhanTu(int arr[],int kichthuoc,int *vitrichen,int *gtchen)
	{
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = kichthuoc; i > vitrichen; i--)
		{
			arr[i] = arr[i-1];
		}
    arr[*vitrichen] = *gtchen;
    xuatmang(arr,kichthuoc+1);
}
void xoaphantu(int arr[],int kichthuoc)
{
	int vitrixoa;
	printf("nhap vao vi tri xoa ");
	scanf("%d",vitrixoa);
	for(int i=vitrixoa;i<kichthuoc;i++)
	{
		arr[i]=arr[i+1];
	}
	xuatmang(arr,kichthuoc-1);
}
void xoasochan(int arr[],int kichthuoc)
{	for(int i=0;i<kichthuoc;i++)
	{
		if(arr[i]%2==0)
		{
			continue;
		}
		else printf("%4d",arr[i]);

	}
}
void xoaphantux(int arr[],int kichthuoc)
{	int x;
	printf("nhap vao bien x can xoa ");
	scanf("%d",&x);
	for(int i=0;i<kichthuoc;i++)
	{
		if(arr[i]==x)
		{
			continue;
		}
		else printf("%4d",arr[i]);
	}
}
void themkhongcansapxep(int arr[],int kichthuoc)
{
	int x,i;
	printf("nhap so can chen ");
	scanf("%d",&x);
	for(int i=0;i<kichthuoc;i++)
	{
		if(arr[i]>x)
		{
		for(int k=kichthuoc;k>=i;k--)
		{
			arr[k]=arr[k-1];
		}
			arr[i]=x;
			break;
		}
		else
		{
			arr[kichthuoc]=x;
		}
	}
	xuatmang(arr,kichthuoc+1);

}
void tron2mang(int arr[],int brr[],int crr[],int kichthuoc1,int kichthuoc2)
{
	int p=kichthuoc1+kichthuoc2;
	  for(int i=0;i<p;i++)
	  {
	  	if(i<kichthuoc1)
		{
			crr[i]=arr[i];
		}
		else
		{
			crr[i]=brr[i-kichthuoc1];
		}
	  }
}
void hoanvi(int *x,int *y )
{
	int temp=*x;
		*x=*y;
		*y=temp;
}
void selectsort(int arr[],int brr[],int crr[],int kichthuoc1,int kichthuoc2)
{
	int c;
	tron2mang(arr,brr,crr,kichthuoc1,kichthuoc2);
	for(int i=0;i<kichthuoc1+kichthuoc2;i++)
	{
		for(int j=i+1;j<kichthuoc1+kichthuoc2;j++)
		{
			if(crr[i]>crr[j])
			{
				hoanvi(&crr[i],&crr[j]);
			}
		}
	}
	xuatmang(crr,kichthuoc1+kichthuoc2);
}
void xoaphantunhap(int arr[],int kichthuoc)
{
	int x;
	printf("nhap vao so can xoa ");
	scanf("%d",&x);
	for(int i=0;i<kichthuoc;i++)
	{
		if(arr[i]==x)
		{
			continue;
		}
		else
		{
			printf("%6d",arr[i]);
		}

	}
}
int main()
{	int arr[50],brr[50],crr[200],kichthuoc1,kichthuoc2;
	printf("nhap kich thuoc mang 1");
	scanf("%d",&kichthuoc1);
	//int vitrichen,gtchen;
	nhapmang(arr,kichthuoc1);
	xuatmang(arr,kichthuoc1);
	printf("\nnhap kicthuco mang 2 \n");
	scanf("%d",&kichthuoc2);
	nhapmang(brr,kichthuoc2);
	xuatmang(brr,kichthuoc2);
	printf("\n");
	selectsort(arr,brr,crr,kichthuoc1,kichthuoc2);

	//printf("nhap vitrichen,gtchen ");
	//scanf("%d%d",&vitrichen,&gtchen);
	//ThemPhanTu(arr,kichthuoc,&vitrichen,&gtchen);
	//xoaphantu(arr,kichthuoc);
	//xoasochan(arr,kichthuoc);
	//xoaphantunhap(arr,kichthuoc);
	//themkhongcansapxep(arr,kichthuoc);


    return 0;
}

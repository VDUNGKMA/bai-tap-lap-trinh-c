#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>
void nhapmang2chieu1(int arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
void nhapmang2chieu2(int brr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			scanf("%d",&brr[i][j]);
		}
	}
}
void xuatmang2chieu2(int brr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			printf("%5d",brr[i][j]);
		}
		printf("\n");
	}
}
void xuatmang2chieu1(int arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
}
int TONGHANGK(int arr[][100],int cot)
{	int tong=0,k;
	printf("nhap vao hang muon cong ");
	scanf("%d",&k);
	for(int j=0;j<cot;j++)
	{
		tong+=arr[k][j];
	}
	return tong;
}
int TONGCOTK(int arr[][100],int hang)
{
	int tong=0,cotk;
	printf("nhap vao cot muon cong ");
	scanf("%d",&cotk);
	for(int i=0;i<hang;i++)
	{
		if(arr[i][cotk]>0)
		{
			tong+=arr[i][cotk];
		}
	}
	return tong;
}
int TONGBIEN(int arr[][100],int hang,int cot)
{	int tong1=0,tong2=0,tong3=0,tong4=0;
	for(int j=0;j<cot;j++)
	{
		tong1+=arr[0][j];
	}
	for(int j=0;j<cot;j++)
	{
		tong2+=arr[hang-1][j];
	}
	for(int i=1;i<hang-1;i++)
	{
		tong3+=arr[i][0];
	}
	for(int i=1;i<hang-1;i++)
	{
		tong4+=arr[i][cot-1];
	}
	return tong1+tong2+tong3+tong4;
}
bool sohoanthien(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void hienthiSHT(int arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			if(sohoanthien(arr[i][j])==true)
			{
				printf("%d",arr[i][j]);
			}
			printf("\t");
		}
	}
}
void loopSHT(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
			if(sohoanthien(i)==true)
			{
				printf("%d ",i);
				continue;
			}
			else
				{
					continue;
				}


	}
}
bool KIEMTRANGUYENTO(int n)
{
	if(n<2)
	{
		return false;
	}
	else if(n>2)
	{	if(n%2==0)
		{
			return false;
		}
	for(int i=3;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	}

	return true;
}
int DEMSNT(int arr[][100],int dong,int cot)
{
	int count =0;
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			if(KIEMTRANGUYENTO(arr[i][j])==true)
			{
				count++;
			}
		}

	}
	return count;
}
int demsoluongtrong1so(int n)
{	int count=0;
	while (n!=0)
	{	n/=10;
		count++;
	}
	return count;
}
int demcacchusotrongmang(int arr[][100],int dong,int cot)
{
	int s=0;
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			s+=demsoluongtrong1so(arr[i][j]);
		}
	}
	return s;
}
int demsoduongtrenhangK(int arr[][100],int dong,int cot)
{
	int k,count=0;
	printf("nhap vao hang muon dem so luong so duong ");
	scanf("%d",&k);
	for(int j=0;j<cot;j++)
	{
		if(arr[k][j]>0)
		{
			count++;
		}
	}
	return count;
}
void matrannghichdao(int arr[][100],int dong,int cot)
{
	for(int i=0;i<cot;i++)
	{
		for(int j=0;j<dong;j++)
		{
			printf("%5d",arr[j][i]);
		}
		printf("\n");
	}

}
int main()
{	int arr[100][100],brr[100][100],dong,cot,n;
	printf("nhap so dong, so cot ");
	scanf("%d%d",&dong,&cot);
	nhapmang2chieu1(arr,dong,cot);
	xuatmang2chieu1(arr,dong,cot);
	//nhapmang2chieu2(arr,dong,cot);
	//xuatmang2chieu2(arr,dong,cot);
	//printf("%d",TONGHANGK(arr,cot));
	//printf("tongcotduong=%d",TONGCOTK(arr,cot));
	//printf("\nTONGBIEN=%d",TONGBIEN(arr,dong,cot));
	/*hienthiSHT(arr,dong,cot);
	printf("nhap vao n ");
	scanf("%d",&n);
	loopSHT(n);
	TONG2MATRAN(arr,brr,dong,cot);
	printf("%d",DEMSNT(arr,dong,cot));
	printf("%d ",demcacchusotrongmang(arr,dong,cot));
	printf("%d",demsoduongtrenhangK(arr,dong,cot));
	matrannghichdao(arr,dong,cot);*/

    return 0;
}

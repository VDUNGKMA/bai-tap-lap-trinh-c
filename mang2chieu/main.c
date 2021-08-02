#include <stdio.h>
#include <stdlib.h>
void nhapmang2chieu(int arr[][100],int hang,int cot)
{
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
xuatmang2chieu(int arr[][100],int hang,int cot)
{	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
}
void TONGMATRAN(int arr[][100],int brr[][100],int crr[][100],int hang,int cot)
{
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			crr[i][j]=arr[i][j]+brr[i][j];
			printf("%5d",crr[i][j]);
		}
			printf("\n");
	}
}
void TICH2MATRAN(int arr[][100],int brr[][100],int crr[][100],int hang,int cot,int k)
{
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<k;j++)
		{
		  for(int m=0;m<cot;m++)
			{
				crr[i][j]+=arr[i][m]*brr[m][j];
			}

		}
	}
	xuatmang2chieu(crr,hang,k);
}
int main()
{	int arr[100][100],brr[100][100],crr[100][100],hang,cot,k;
	printf("NHAP SO HANG,SO COT,SO K ");
	scanf("%d%d%d",&hang,&cot,&k);
	nhapmang2chieu(arr,hang,cot);
	nhapmang2chieu(brr,cot,k);
	printf("MA TRAN A\n");
	xuatmang2chieu(arr,hang,cot);
	printf("MA TRAN B\n");
	xuatmang2chieu(brr,cot,k);
	//printf("MA TRAN C \n");
	//TONGMATRAN(arr,brr,crr,hang,cot);
	printf("\n");
	TICH2MATRAN(arr,brr,crr,hang,cot,k);

    return 0;
}

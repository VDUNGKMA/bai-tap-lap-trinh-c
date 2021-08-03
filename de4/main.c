#include <stdio.h>
#include <stdlib.h>
void nhapmatran(float arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			scanf("%5f",&arr[i][j]);
		}
	}
}
void xuatmatran(float arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{

		for(int j=0;j<cot;j++)
		{
			printf("%5f\t",arr[i][j]);
		}
		printf("\n");
	}
}
void maxminmatran(float arr[][100],int dong,int cot)
{
	int m,n;
	float max=arr[0][0],min=arr[0][0];
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				m=i;
				n=j;
			}
		}
	}
		printf("max=%f\n",max);
		printf("vi tri max arr[%d][%d]\n",m,n);
		for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			if(arr[i][j]<min)
			{
				min=arr[i][j];
				m=i;
				n=j;
			}
		}
	}
		printf("min=%f\n",min);
		printf("vi tri min arr[%d][%d]\n",m,n);
}
int main()
{
   float arr[100][100];
   int dong,cot;
   printf("nhap so dong va so cot ");
   scanf("%d%d",&dong,&cot);
   nhapmatran(arr,dong,cot);
   xuatmatran(arr,dong,cot);
   printf("\n");
   maxminmatran(arr,dong,cot);
    return 0;
}

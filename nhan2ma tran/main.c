#include <stdio.h>
#include <stdlib.h>
void nhapmatran(int arr[][100], int dong, int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

}
void xuatmatran(int arr[][100], int dong, int cot)
{
	for(int i=0; i < dong; i++)
	{
		for(int j=0; j < cot ; j++)
		{
			printf("%6d ",arr[i][j]);
		}
			printf("\n");
	}
}
void TICHMATRAN(int arr[][100],int brr[][100],int crr[][100],int dong1,int cot1, int cot2)
{
	for(int i=0; i < dong1; i++)
	{
		for(int j = 0; j < cot2; j++)
		{
			for(int k = 0; k < cot1; k++)
			{
				crr[i][j] += arr[i][k] * brr[k][j];
			}
		}
	}
	xuatmatran( crr, dong1, cot2 );
}
int main()
{
	int arr[100][100], brr[100][100], crr[100][100], dong1, cot1, cot2;
	printf("nhap vao dong1, cot1 va cot 2");
	scanf("%d%d%d",&dong1,&cot1,&cot2 );
	printf("nhap 2 ma tran can nhan \n");
	nhapmatran( arr, dong1, cot1 );
	nhapmatran( brr, cot1, cot2 );
	printf("MA TRAN 1\n");
	xuatmatran( arr, dong1, cot1 );
	printf(" MA TRAN 2\n");
	xuatmatran( brr, cot1, cot2 );
	printf("\n");
	TICHMATRAN( arr, brr, crr, dong1, cot1, cot2 );


    return 0;
}

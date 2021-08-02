#include <stdio.h>
#include <stdlib.h>
void MATRANXOAYOC(int arr[][50],int n)
{
	int dem = 0, gt = 1, hang = n - 1, cot = n - 1;
	while(gt<=n*n)
	{
		for(int i = dem; i <= cot; i++)
		{
			arr[dem][i] = gt;
			gt++;
		}
		for(int i = dem + 1; i <= hang ; i++)
		{

			arr[i][cot]=gt;
			gt++;
		}
		for(int i = cot - 1; i >= dem && gt <= n*n; i--)
		{
			arr[hang][i]=gt;
			gt++;
		}
		for(int i = hang-1; i>= dem + 1 && gt <= n*n; i--)
		{

			arr[i][dem]=gt;
			gt++;
		}
		dem++;
		hang--;
		cot--;
	}
		for(int i = 0; i<n; i++)
		{
			for(int j = 0;j < n; j++)
			{
				printf("%6d ",arr[i][j]);
			}
				printf("\n");
		}
}
int main()
{	int arr[50][50],n;
	printf("nhap vao n");
	scanf("%d",&n);
	MATRANXOAYOC(arr,n);
//IN RA MA TRAN XOAY OC


    return 0;
}

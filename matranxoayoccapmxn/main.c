#include <stdio.h>
#include <stdlib.h>
void MATRANXOAY(int arr[][50],int m,int n)
{
    int dem= 0, gt = 1; // giá trị khởi tạo băng đầu bằng 1
    int hang = m- 1, cot = n - 1; // vì giá trị của mảng chạy từ 0 nên chỉ số cột ngoài cùng và hàng dưới cùng = n-1
    while (gt <= m* n) // điều kiện có thể lạp lại và tang giá trị
    {
        for (int i = dem; i <= cot; i++)  //for 1
        {
            arr[dem][i] = gt++;
        }
        for (int i = dem + 1; i <= hang; i++)//for 2
        {
            arr[i][cot] = gt++;
        }
        for (int i = cot - 1; i >= dem && gt <= m * n; i--)//for 3
        {
            arr[hang][i] = gt++;
        }
        for (int i = hang - 1; i >= dem+1 && gt <= m * n; i--)//for 4
        {
            arr[i][dem] = gt++;
        }
        dem++;
        hang--;
        cot--;
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%6d",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[50][50],n,m;
    printf("nhap vao m hang va n cot ");
    scanf("%d%d",&m,&n);
    MATRANXOAY(arr,m,n);
//IN RA MA TRAN XOAY OC


    return 0;
}
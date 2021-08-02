#include <stdio.h>
#include <stdlib.h>
void namthangngay(int thang,int nam)
{
	if(nam%4==0&&nam%100!=0||nam%100==0&&nam%400==0)
	{
		switch(thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("thang %d nam %d co 31 ngay",thang,nam);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("thang %d nam %d co 30 ngay ",thang,nam);
			break;
		case 2:
			printf("thang %d nam %d co 29 ngay ",thang,nam);
			break;
		default:
			printf("thang khong hop le ");
			break;
		}
	}
	else
	{
		switch(thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 11:
		case 12:
			printf("thang %d nam %d co 31 ngay",thang,nam);
			break;
		case 4:
		case 6:
		case 9:
			printf("thang %d nam %d co 30 ngay ",thang,nam);
			break;
		case 2:
			printf("thang %d nam %d co 28 ngay ",thang,nam);
			break;
		default:
			printf("thang khong hop le ");
			break;
		}
	}
}
int main()
{
	int nam ,thang;
	printf("nhap vao thang va nam ");
	scanf("%d%d",&thang,&nam);
	namthangngay(thang,nam);

    return 0;
}

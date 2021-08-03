#include <stdio.h>
#include <stdlib.h>
void pr(int y,int thang)
{
	if(y%100!=0&&y%4==0||y%100==0&&y%400==0)
	{
		switch(thang)
		{
			case 1:
			printf("thang 1 co 31 ngay"); break;
			case 3:
			printf("thang 3 co 31 ngay");break;
			case 5:
			printf("thang 5 co 31 ngay");break;
			case 7:
			printf("thang 7 co 31 ngay");break;
			case 8:
			printf("thang 8 co 31 ngay");break;
			case 10:
			printf("thang 10 co 31 ngay");break;
			case 12:
			printf("thang 12 co 31 ngay");break;
			case 4:
			printf("thang 4 co 30 ngay");break;
			case 6:
			printf("thang 6 co 30 ngay");break;
			case 9:
			printf("thang 9 co 30 ngay");break;
			case 11:
			printf("thang 11 co 30 ngay");break;
			default:
			printf("thang 2 co 29 ngay");break;
	}
	}
	else
		switch(thang)
		{
			case 1:
			printf("thang 1 co 31 ngay"); break;
			case 3:
			printf("thang 3 co 31 ngay");break;
			case 5:
			printf("thang 5 co 31 ngay");break;
			case 7:
			printf("thang 7 co 31 ngay");break;
			case 8:
			printf("thang 8 co 31 ngay");break;
			case 10:
			printf("thang 10 co 31 ngay");break;
			case 12:
			printf("thang 12 co 31 ngay");break;
			case 4:
			printf("thang 4 co 30 ngay");break;
			case 6:
			printf("thang 6 co 30 ngay");break;
			case 9:
			printf("thang 9 co 30 ngay");break;
			case 11:
			printf("thang 11 co 30 ngay");break;
			default:
			printf("thang 2 co 28 ngay");break;
	}
}
int main()
{
    int y,thang;
    printf("nhap y,thang "); scanf("%d%d",&y,&thang);
    pr(y,thang);



    return 0;
}

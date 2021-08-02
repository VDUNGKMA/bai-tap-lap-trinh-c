#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int date;
	int month, year;
} time;
void nhap()
{
	printf("nhap ngay thang nam sinh :");

}
int main()
{	time gt;
	nhap();
	gt.date=4;
	gt.month=3;
	gt.year=3;
	printf("%d/%d/%d",gt.date,gt.month,gt.year);

    return 0;
}

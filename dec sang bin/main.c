#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void chuyendoi(int n)
{
	int s=0;
	int i=1,r;
	int p=n;
		while(p!=0)
		{
			r=p%2;
			s=s+r*i;
			i=i*10;
			p=p/2;
		}
	printf("s=%d",s);
}
int main()
{
	int n;
	printf("nhap so can chuyen doi n ");
	scanf("%d",&n);
	chuyendoi(n);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,b,i,p,can,s=0;
    for(i=pow(10,6);i<=9999999;i++)
	{
		a=i%10;
		b=i/pow(10,6);
		p=a*b;
		can=sqrt(p);
		if(can*can==p&&p!=0)
		{
			s=s+i;
		}
		}
	 printf("\n tong s=%d",s);
    return 0;
}

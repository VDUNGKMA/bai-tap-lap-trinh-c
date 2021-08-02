#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int s1(int x,int n)
{
int s=0,p;
  for(int i=1;i<=n;i++)
	{
		p=pow(x,2*i);
		s=s+p;
	}
	return s;
}
int s2(int x,int n)
{
int s=0,p;
  for(int i=0;i<=n;i++)
	{
		p=pow(x,2*i+1);
		s=s+p;
	}
	return s;
}
int main()
{
    int i,n,x,p,s=0;
    printf("nhap x,n: "); scanf("%d%d",&x,&n);
	printf("%d\n",s1(x,n));
	printf("%d",s2(x,n));

    return 0;
}

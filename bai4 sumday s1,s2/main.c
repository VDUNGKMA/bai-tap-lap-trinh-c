#include <stdio.h>
#include <stdlib.h>
float s1(float n)
{	float k=1,s=0,p;
		for(k=1;k<=n;k++)
			{
				p=k*(k+1);
				s=s+1/p;
			}
		return s;
}
float s2(float n)
{	float  i,s=0,p=0;
	for( i=1;i<=n;i++)
	{
		p=p+i;
		s=s+1/p;

	}
	return s;
}
int  main()
{ float  n,k=1,s=0,p;
	printf("nhap n ");
	scanf("%f",&n);
	printf("%f\n",s1(n));
	printf("%f\n",s2(n));


	return 0;
}

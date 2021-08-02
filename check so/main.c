#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void doixung(int n)
{	int sum=0,r,gt=n;
	while (n!=0)
		{
			r=n%10;
			sum=sum*10+r;
			n=n/10;
		}
		if(gt==sum)
			printf(" la so doi xung\n ");
}
int main()
{
    int n,count =0,gt=n,sum=0,r;
    printf("nhap n "); scanf("%d",&n);
    int p=sqrt(n);
    if(p*p==n&&n!=0)
	{
		printf(" la so chinh phuong\n");
	}
	else if(n>2){
		for(int i=2;i<sqrt(n);i++){
		if (n%i==0){
		count++;}}
	if (count==0){
		printf("%d la so nguyen to\n ",n);}
	else printf("%d la so binh thuong \n",n);}



	doixung(n);

    return 0;
}

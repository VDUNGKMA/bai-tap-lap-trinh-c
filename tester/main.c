#include <stdio.h>
#include <stdlib.h>
v
void hoanvi(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;

}
int main()
{
	int a,b;
    printf("nhap 2 so a va b");
    scanf("%d%d",&a,&b);
    hoanvi(&a,&b);

    return 0;
}

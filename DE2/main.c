#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void giaipt(float a,float b,float c)
{
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
				printf("phuong trinh co vo so nghiem ");
			else
				printf("phuong trinh vo nghiem ");
		}
		else
		{
			printf("phuong trinh co 1 nghiem x=%f ",-c/b);
		}
	}
	else
	{
		 float delta=b*b-4*a*c;
		if(delta<0)
			printf("phuong trinh vo nghiem!");
		else if(delta==0)
			printf("phuong trinh co nghiem kep x1=x2=%f ",-b/(2*a));
		else
			printf("phuong trinh co 2 nghiem phan biet x1=%f,x2=%f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
	}
}
int main()
{
	float a,b,c,delta;
	printf("nhap vao he so a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	giaipt(a,b,c);

    return 0;
}

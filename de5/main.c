#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
bool checktamgiacko(float a, float b, float c)
{
	if(a + b >= c && a + c >= b && b + c >= a)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void kiemtratamgiac( float a, float b, float c)
{	if(checktamgiacko(a, b, c) == true)
	{
		if(c == sqrt( a * a + b * b) || b == sqrt( a * a + c * c) || a == sqrt( b * b + c * c))
		{
			printf("3 canh hop thang tam giac vuong ");
		}
		else if(a == b && a != c|| a == c && a != b|| b == c && b != a)
		{
			printf("3 canh hop thanh tam giac can");
		}
		else if(a == b && a == c)
		{
			printf("3 canh hop thanh tam giac deu");
		}
		else
		{
			printf("tam giac thuong ");
		}
	}
	else
	{
		printf("ko tao thanh tam giac ");
	}
}

int main()
{
	float a,b,c;
	printf("nhap vao 3 canh cua tam giac ");
	scanf("%f%f%f",&a,&b,&c);
	kiemtratamgiac(a, b, c);

    return 0;
}

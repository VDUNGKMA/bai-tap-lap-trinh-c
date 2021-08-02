#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void CHUOI(char str[])
{
	printf("nhap vao chuoi ky tu ");
	gets(str);
	printf("\nxuat chuoi ky tu\n");
	puts(str);
	//printf("do dai chuoi ky tu %d",strlen(str));
}

void copys1sangs2(char str[],char str1[])
{
	strcpy(str1,str);
	puts(str1);
}
int dodaichuoi(char str[])
{
	int i=0;
	while(1)
	{
		if(str[i]=='\0')
		{
			return i;
		}
		else i++;
	}
}
void saochepchuoi(char str[],char str1[])
{
	for(int i=0;i<strlen(str);i++)
	{
		str1[i]=str[i];
	}
		str1[strlen(str)]='\0';
	printf("xuat chuoi str1 vua sao chep \n");
	puts(str1);
}
void xoakitutaivitri(char str[])
{
	int vt;
	printf("nhap vi tri can xoa ");
	scanf("%d",&vt);
	fflush(stdin);
	for(int i=vt;i<strlen(str);i++)
	{
		str[i]=str[i+1];
	}
	printf("chuoi sau khi xoa la\n");
	puts(str);
}
void themkytutaivitri(char str[])
{
	fflush(stdin);
	int vt,n=strlen(str);
	char kytu;
	printf("nhap vao vitri va ky tu muon them vao chuoi ");
	scanf("%d%c",&vt,&kytu);
	fflush(stdin);

	for(int i=strlen(str);i>=vt;i--)
	{
		str[i]=str[i-1];
	}
		str[vt]=kytu;
		str[strlen(str)]='\0';
		n++;
	printf("%s",str);

}
void daonguocchuoi(char str[])
{

	strrev(str);
	puts(str);
}
void doicho(char *a, char *b)
{
	int gt=*a;
		*a=*b;
		*b=gt;

}
void lonnguoc(char str[])
{
	for(int i=0;i<(strlen(str))/2;i++)
	{
		doicho(&str[i],&str[strlen(str)-i-1]);
	}

	puts(str);
}
void xoakytu(char str[],int vt)
{
	for(int i=vt;i<=strlen(str)+1;i++)
	{
		str[i]=str[i+1];
	}
}
void xoakhoangtrangkhongxotlaikhoangtrangnao(char str[])
{
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			xoakytu(str,i);
		}
	}
	puts(str);
}
void xoakhoangthua(char str[])
{

	for(int i=0;i<=strlen(str);i++)
	{
		if(str[i]==' ')
		{
			xoakytu(str,i);
		}
		if(str[0]==' ')
		{
			xoakytu(str,0);
		}
		if(str[ strlen( str ) - 1 ]==' ')
		{
			xoakytu(str,strlen( str ) - 1);
		}

	}
}
int main()
{
	char str[]="",str1[]="";
	fflush(stdin);
	CHUOI(str);
	printf("\n");
	//copys1sangs2(str,str1);
	//saochepchuoi(str,str1);
	//xoakitutaivitri(str);
	//themkytutaivitri(str);
	//daonguocchuoi(str);
	//puts(strrev(str));
	//lonnguoc(str);
	//xoakhoangtrangkhongxotlaikhoangtrangnao(str);
	xoakhoangthua(str);
	puts(str);

	return 0;
}

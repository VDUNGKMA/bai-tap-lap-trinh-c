#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
typedef struct thongtin
{
	char masv[100];
	char hoten[100];
	int namsinh;
	float gpa;


}sv,length;
void nhapinfo(sv *sv1)
{
		printf("\n");
		fflush(stdin);
		printf("nhap masv ");
		gets(sv1->masv);
		printf("nhap hoten ");fflush(stdin);
		gets(sv1->hoten);
		printf("nhap vao nam sinh ");fflush(stdin);
		scanf("%d",&sv1->namsinh);
		printf("nhap vao gpa ");fflush(stdin);
		scanf("%f",&sv1->gpa);

}
void xoakytu(int vt ,sv str[])
{
	for(int i=vt;i<strlen(str->hoten);i++)
	{
		(str->hoten)[i]=(str->hoten)[i+1];
	}
	(str->hoten)[strlen(str->hoten)]='\0';
}
void xoakhoangtrang(sv str[])
{
	for(int i=0;i<strlen(str->hoten);i++)
	{
		if((str->hoten)[i]==' ')
		{
			xoakytu(i,str);
			i--;
		}
	}
		printf("ten sau khi xoa khoang trang ");
		puts(str->hoten);
}

void xuatinfo(sv *sv1)
{
	printf("%15s%15s%15d%15f\n",sv1->masv,sv1->hoten,sv1->namsinh,sv1->gpa);
}
void nhaplistsinhvien(sv arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{
		printf("SINH VIEN THU %d",i+1);
		nhapinfo(&arr[i]);
	}
}
void xuatlistsinhvien(sv arr[],int kichthuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{
		xuatinfo(&arr[i]);
	}
}
void timkiemsinhvien(sv arr[],int kichthuoc,float diem)
{
	int dem=1;
	for(int i=0;i<kichthuoc;i++)
	{
		if(arr[i].gpa==diem)
		{
			printf("sinh vien thu %d",dem);
			xuatinfo(&arr[i]);
			dem++;
		}
	}
}
void themsinhvien(sv arr[],int kichthuoc,sv sv1)
{
	int vt;
	printf("nhap vao vi tri can them trong danh sach ");
	scanf("%d",&vt);
	for(int i=kichthuoc;i>vt;i--)
	{
		arr[i]=arr[i-1];
	}
		nhapinfo(&sv1);
		arr[vt]=sv1;
		xuatlistsinhvien(arr,kichthuoc+1);
}
void xoavtthu(sv arr[],int vt,int kichthuoc)
{
	for(int i=vt;i<kichthuoc;i++)
	{
		arr[i]=arr[i+1];
	}
}
void xoasinhvien(sv arr[],int kichthuoc,sv sv1)
{
	for(int i=0;i<kichthuoc+1;i++)
	{
		if(arr[i].gpa<5)
		{
			xoavtthu(arr,i,kichthuoc);
		}
	}	printf("\nDANH SACH SINH VIEN CO DIEM TREN 5");
		printf("\n");
	xuatlistsinhvien(arr,kichthuoc);
}
void hoandoi(sv *arr1 ,sv *arr2)
{
		sv c=*arr1;
		*arr1=*arr2;
		*arr2=c;
}
void sapxeplist(sv arr[],int kichthuoc )
{
	for(int i=0;i<kichthuoc;i++)
	{
		for(int j=i+1;j<kichthuoc;j++)
		{
			if(arr[i].gpa>arr[j].gpa)
			{
				hoandoi(&arr[i].gpa,&arr[j].gpa);
			}
		}
	}
	printf("\n");
	xuatlistsinhvien(arr,kichthuoc);
}

int main()
{
		sv sv1;
		sv arr[100];
		sv str[1000];
		int kichthuoc;
		float diem;
		printf("nhap vao so luong sinh vien ");
		scanf("%d",&kichthuoc);
		nhaplistsinhvien(arr,kichthuoc);
		 xoakhoangtrang(str);
		//printf("%15s%15s%15s%15s%15s\n","MASV","HOTEN","NAMSINH","GPA");
		//xuatlistsinhvien(arr,kichthuoc);
		//printf("nhap vao diem can tim ");
		//scanf("%f",&diem);
		//timkiemsinhvien(arr,kichthuoc,diem);
		//themsinhvien(arr,kichthuoc,sv1);
		//xoasinhvien(arr,kichthuoc,sv1);
		//sapxeplist(arr,kichthuoc);


    return 0;
}

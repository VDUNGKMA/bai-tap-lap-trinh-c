#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct hs
{
	char hoten[50];
	int ngay;
	int thang;
	int nam;
	char sodienthoai[50];
}HS;
typedef struct node
{
	HS data;
	struct node *next;
}NODE;
typedef struct list
{
	NODE *head,*tail;
}LIST;
void init(LIST *l)
{
	l->head=NULL;
	l->tail=NULL;
}
NODE *getnode(HS *hs)
{
	NODE *p;
	p=(NODE*)malloc(sizeof(NODE));
	if(p==NULL)
	{
		printf("day bo nho ");
		return NULL;
	}
	else
	{
		p->data=*hs;
		p->next=NULL;
	}
	return p;
}
void themvaocuoi(LIST *l,NODE *p)
{
	if(l->head==NULL)
	{
		l->head=l->tail=p;
	}
	else
	{
		l->tail->next=p;
		l->tail=p;
	}
}
void tao1hs(HS *hs)
{
	fflush(stdin);
	printf("nhap ho ten ");
	gets(hs->hoten);
	printf("nhap ngay sinh ");
	fflush(stdin);
	scanf("%d",&hs->ngay);
	printf("nhap thang sinh ");fflush(stdin);
	scanf("%d",&hs->thang);
	printf("nhap nam sinh ");fflush(stdin);
	scanf("%d",&hs->nam);
	printf("nhap so dien thoai ");fflush(stdin);
	gets(hs->sodienthoai);
}
void taolist(LIST *l)
{
	int n;
	HS *hs;
	printf("nhap so luong hoc sinh ");
	scanf("%d",&n);
	init(l);
	for(int i=0;i<n;i++)
	{
		tao1hs(hs);
		NODE *p=getnode(hs);
		themvaocuoi(l,p);
	}
}
void in1hs(HS hs)
{
	printf("%s		%d		%d		%d		%s\n",hs.hoten,hs.ngay,hs.thang,hs.nam,hs.sodienthoai);
}
void inlist(LIST l)
{
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		in1hs(k->data);
	}
}
void themnode_pvaonodeq(LIST l)
{
	char HT[30];
	NODE *p;
	HS hs;
	printf("ban muon them vao 1sinh vien sau cai ten ");
	fflush(stdin);
	gets(HT);
	tao1hs(&hs);
	p=getnode(&hs);
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		if(strcmp(HT,k->data.hoten)==0)
		{
			NODE *m=k->next;
			k->next=p;
			p->next=m;
			break;
		}
	}
	inlist(l);
}
void xoa1hocsinh(LIST l)
{
	char HT[50];
	NODE *m;
	printf("nhap vao hoten can xoa ");
	fflush(stdin);
	gets(HT);
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		if(strcmp(HT,k->data.hoten)==0)
		{
			m->next=k->next;
			free(k);
			k->next=NULL;
		}
		m=k;
	}
	inlist(l);
}
void hoanvi(HS *x,HS *y)
{
	HS c=*x;
	*x=*y;
	*y=c;
}
void sapxeptangtheohoten(LIST l)
{
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		for(NODE *j=l.head->next;j!=NULL;j=j->next)
		{
			if(strcmp(k->data.hoten,j->data.hoten)>0)
			{
					hoanvi(&k->data,&j->data);
			}
		}
	}
	printf("\n");
	inlist(l);
}
int  nam_max(LIST l)
{
	int max=l.head->data.nam;
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		if(k->data.nam>max)
		{
			max=k->data.nam;
		}
	}
	return max;
}
int in_info_nam_max(LIST l)
{
	printf("\n danh sach cac ten co nam sinh lon nhat trong list la\n");
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		if(k->data.nam==nam_max(l))
		{
			printf("%s		%d		%d		%d		%s\n",k->data.hoten,k->data.ngay,k->data.thang,k->data.nam,k->data.sodienthoai);

		}
	}
}
int main()
{
	LIST l;
    taolist(&l);
	printf("HOTEN		NGAY		THANG		NAM		SODIENTHOAI\n");
    inlist(l);
	themnode_pvaonodeq(l);
	//xoa1hocsinh(l);
	//sapxeptangtheohoten(l);
	//in_info_nam_max(l);
    return 0;
}

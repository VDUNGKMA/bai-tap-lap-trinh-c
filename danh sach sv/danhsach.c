#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sinhvien
{
    char ID[50];
    char NAME[50];
    int namsinh;
}SV;
void writefile(FILE *f,SV sv)
{
    int n;
    printf("nhap vao so luong sinh vien\n");
    scanf("%d",&n);
    f=fopen("DS_SV.C","wb");
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        printf("nhap vao ma sinh vien\n");
        gets(sv.ID);
        printf("nhap vao ho ten sinh vien\n");
        gets(sv.NAME);
        printf("nhap vao nam sinh sinh vien \n");
        scanf("%d",&sv.namsinh);
        fwrite(&sv,sizeof(SV),1,f);
    }
    fclose(f);
}
void readfile(FILE *f,SV sv)
{ 
    f=fopen("DS_SV.C","rb");
    rewind(f);
    int i=1;
    printf("\n\t\t\tDANH SACH SINH VIEN\n");
    printf("%16s%16s%16s%16s\n","STT","MA SV","HO TEN","NAM SINH");
     while( fread(&sv,sizeof(SV),1,f)!=NULL)
     {
        printf("%16d%16s%16s%16d\n",i++,sv.ID,sv.NAME,sv.namsinh);
     }
     fclose(f);
}
void suadanhsach(FILE *f,SV sv)
{
    f=fopen("DS_SV.C","rb");
    printf("\n\t\t\tDANH SACH SINH VIEN\n");
    int i=0;
    char HT[50];
    char ht[50];
    printf("\nBAN MUON SUA HO TEN VA NAMSINH cua sinh vien nao \n");
    fflush(stdin);
    gets(ht);
    printf("\nnhap ho ten muon sua \n");
    fflush(stdin);
    gets(HT);
    int year;
    printf("\n nhap vao nam sinh muon sua \n");
    scanf("%d",&year);
    while(fread(&sv,sizeof(SV),1,f)!=NULL)
    {
        if(strcmp(sv.NAME,ht)==0)
        {
            strcpy(sv.NAME,HT);
            sv.namsinh=year;
        }
         printf("%16d%16s%16s%16d\n",i++,sv.ID,sv.NAME,sv.namsinh);
    }
    fclose(f);
}
void menu()
{
    printf("\n 1. tao danh sach\n");
    printf("2.hien danh sach\n");
    printf("3.sua thong tin sinh vien\n");
    printf("4.ket thuc\n");
}
int main(int argc, char const *argv[])
{
    FILE *f;
    SV sv;
    int choose;
    while(1)
    {
        menu();
        printf("\nnhap lua chon cua ban\n");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:
                writefile(f,sv);
                break;
            case 2:
                readfile(f,sv);
                break;
            case 3:
                suadanhsach(f,sv);        
                break;
            case 4:
                exit(0);
            default :
                printf("\nban chon khong dung moi chon lai\n");
                break;
        }
    }
    return 0;
}

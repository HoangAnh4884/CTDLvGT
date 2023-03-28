#include <stdio.h>
#include <conio.h>

struct HonSo
{
    int SoNguyen, TuSo, MauSo;
};
typedef struct HonSo HONSO;

void NhapHS(HONSO &);
void XuatHS(HONSO);

void NhapHS(HONSO &hs)
{
    printf("\n Nhap so nguyen: ");
    scanf("%d", &hs.SoNguyen);
    do
    {
        printf("\n Nhap mau so: ");
        scanf("%d", &hs.MauSo);
        if(hs.MauSo == 0) {printf("Mau so phai khac 0, Xin hay nhap lai");}
    } while(hs.MauSo == 0);
    do
    {
        printf("\n Nhap tu so: ");
        scanf("%d", &hs.TuSo);
        if(hs.TuSo >= hs.MauSo) {printf("Tu so phai be hon mau so, Xin hay nhap lai");}
    } while(hs.TuSo >= hs.MauSo);
}

void XuatHS(HONSO hs)
{
    printf("\n Hon so la: %d*(%d/%d) \n ", hs.SoNguyen, hs.TuSo, hs.MauSo);
}

int main()
{
    HONSO hs;
    NhapHS(hs);
    XuatHS(hs);
    
    getch();
    return 0;
}
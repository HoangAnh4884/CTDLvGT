#include <stdio.h>
#include <conio.h>
#include <string.h> 

struct SoTietKiem
{
	char MaSo[5], LoaiTietKiem[10], HoTenKhachHang[30], NgayMoSo[14]; 
	int CMND, SoTienGui;
} ;

typedef struct SoTietKiem STK; 

void NhapThongTin(STK &);
void XuatThongTin(STK);

void NhapThongTin(STK &stk)
{
	printf("Nhap ma so: ");
	gets(stk.MaSo);
	printf("Nhap loai tiet kiem: ");
	gets(stk.LoaiTietKiem);
	printf("Nhap ho ten khach hang: ");
	gets(stk.HoTenKhachHang);
	printf("Nhap CMND: ");
	scanf("%d", &stk.CMND);
	printf("Nhap ngay mo so: ");
	gets(stk.NgayMoSo);
	printf("Nhap so tien gui: ");
	scanf("%d", stk.SoTienGui); 
} 

void XuatThongTin(STK stk)
{
	printf("Thong tin cua so tiet kiem la: ");
	printf("Ma so la: ", stk.MaSo);	
	printf("Loai tiet kiem la: ", stk.LoaiTietKiem);
	printf("Ho ten khach hang la: ", stk.HoTenKhachHang);
	printf("So CMND la: ", stk.CMND);
	printf("Ngay mo so la: ", stk.NgayMoSo);
	printf("So tien gui la: ", stk.SoTienGui);
} 
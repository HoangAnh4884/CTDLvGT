#include <stdio.h>
#include <conio.h>

struct Diem
{
	int  x, y; 
};

typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);

void NhapDiem(DIEM &d) 
{
	printf("Nhap diem x: ");
	scanf("%d", &d.x);
	printf("Nhap diem y: ");
	scanf("%d", &d.y);
}

void XuatDiem(DIEM d)
{
	printf("\n Diem trong mat phang Oxy la: (%d;%d) \n", d.x, d.y); 
} 

int main()
{
	DIEM d;
	NhapDiem(d);
	XuatDiem(d);
	getch(); 
	return 0; 
} 
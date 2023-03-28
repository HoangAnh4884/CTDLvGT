#include <stdio.h>
#include <conio.h>

struct DonThuc
{
	int a, n; 
} ;

typedef struct DonThuc DONTHUC;

void NhapDT(DONTHUC &);
void XuatDT(DONTHUC);

void NhapDT(DONTHUC &dt)
{
	printf("Nhap he so a: ");
	scanf("%d", &dt.a);
 	do
 	{
 		printf("Nhap so mu n: ");
		scanf("%d", &dt.n);
		if(dt.n<0){printf("Don Thuc khong co mu am, Xin hay nhap lai");} 
 	} while(dt.n<0); 
} 

void XuatDT(DONTHUC dt)
{
	if(dt.a==0 && dt.n==0) {printf("Don Thuc P là: x \n");}
	else if(dt.a==0 && dt.n!=0) {printf("Don Thuc P là: x^%d \n", dt.n);}
 	else if(dt.n==0 && dt.a!=0) {printf("Don Thuc P là: %dx \n", dt.a);}
	else {printf("Don Thuc P la: %dx^%d \n", dt.a, dt.n);} 
} 

int main()
{
	DONTHUC dt;
	NhapDT(dt);
	XuatDT(dt);
	getch();
	return 0;
} 
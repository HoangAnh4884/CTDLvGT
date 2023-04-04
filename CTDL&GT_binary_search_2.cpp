/*https://v1study.com/lap-trinh-c-c-tuts-tim-kiem-nhi-phan-binary-search.html*/

#include <stdio.h>
#include <conio.h> 
#define Max 100
 
 void NhapMang(int a[Max], int &n)
 {
	 do {
		 printf("Nhap so luong phan tu: ");
		 scanf("%d", &n);
		if(n<=0 || n>Max)
		{ printf("So luong phan tu khong hop le, Xin hay nhap lai"); } 
 	}while(n<=0 || n>Max); 
 	printf("Xin hay nhap mang a:\n");
 	for (int i=0; i<n; i++) {
	 	printf("Nhap a[%d]= ", i);
	 	scanf("%d", &a[i]); 
	 }
 }
 
 void XuatMang(int a[Max], int n)
 {
 	printf("Mang da sap xep la: \n");
 	for(int i=0; i<n; i++) { printf("a[%d]= %d \n", i, a[i]);
	 }
 }
 
 void DoiSo(int &x, int &y)   { int z=x; x=y; y=z; }
 
 void SapXepMangTang(int a[], int n)
 {
 	int i, j; 
 	double x; 
 	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++) 
		{ if(a[i]>a[j]) { DoiSo(a[i], a[j]); } }
	} 
 } 
 
 int  TimKiemNhiPhan(int a[Max], int n, int x)
 {
 	int left=0, right=n-1, X;
	while(left<=right) 
	{
		X=(left+right)/2;
		if(a[X]==x) { return X; }
		if(x>a[X]) { left=X+1; }
		else { right=X-1; }
	}
	return -1;
 } 
 
 int main()
 {
 	int a[Max], n, x;
	NhapMang(a,n);
	SapXepMangTang(a,n); 
	XuatMang(a,n);
	printf("Nhap so x can tim: ");
	scanf("%d", &x);
	int X = TimKiemNhiPhan(a,n,x);
	if(X==-1) { printf("\n Khong tim thay phan tu can tim \n"); }
	else { printf("\n Phan tu can tim nam o vi tri: %d \n", X); } 
	return 0; 
 } 
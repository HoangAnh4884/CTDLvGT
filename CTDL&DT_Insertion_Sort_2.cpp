/*https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chen-truc-tiep-insertion-sort*/

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
  
void SXChenTrucTiepTang(int a[Max], int n){
	int i, j, X;
	for(int i=1; i<n; i++)
	{
		X = a[i]; j = i-1;
		while(j>=0 && a[j]>X){
			a[j+1] = a[j];
			j--;
	}
		a[j+1] = X;
	}
}

void SXChenTrucTiepGiam(int a[Max], int n){
	int i, j, X;
	for(int i=1; i<n; i++)
	{
		X = a[i]; j = i-1;
		while(j>=0 && a[j]<X){
			a[j+1] = a[j];
			j--;
	}
		a[j+1] = X;
	}
}

 int main()
 {
 	int a[Max], n;
	NhapMang(a,n);
	SXChenTrucTiepTang(a,n); 
	XuatMang(a,n);
	SXChenTrucTiepGiam(a,n);
	XuatMang(a,n); 
	return 0;
 }
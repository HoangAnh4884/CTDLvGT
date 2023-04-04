/*https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chon-truc-tiep-selection-sort*/

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
 
 void SXChonTrucTiepTang(int a[Max], int n){
	int i, j, Nho;
	for(i=0; i<n-1; i++){
		Nho=i; 
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){ Nho=j; }
		}
		DoiSo(a[i], a[Nho]);
	}
}

 void SXChonTrucTiepGiam(int a[Max], int n){
	int i, j, Lon;
	for(i=0; i<n-1; i++){
		Lon=i; 
		for(j=i+1; j<n; j++){
			if(a[i]<a[j]){ Lon=j; }
		}
		DoiSo(a[i], a[Lon]);
	}
}

 int main()
 {
 	int a[Max], n;
	NhapMang(a,n);
	SXChonTrucTiepTang(a,n); 
	XuatMang(a,n); 
	SXChonTrucTiepGiam(a,n); 
	XuatMang(a,n);
	return 0;
 }

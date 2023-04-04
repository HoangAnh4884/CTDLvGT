/*https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chon-truc-tiep-selection-sort*/

#include <stdio.h>
#include <conio.h> 
#define Max 100

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

/*https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort*/

#include <stdio.h>
#include <conio.h> 
#define Max 100
 
void DoiSo(int &x, int &y)   { int z=x; x=y; y=z; }
 
void SXDoiChoTrucTiepTang(int a[Max], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){ DoiSo(a[i],a[j]);	}
		}
	}
}

void SXDoiChoTrucTiepGiam(int a[Max], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]<a[j]){ DoiSo(a[i],a[j]);	}
		}
	}
}
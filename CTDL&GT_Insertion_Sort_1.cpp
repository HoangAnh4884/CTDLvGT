/*https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chen-truc-tiep-insertion-sort*/

#include <stdio.h>
#include <conio.h> 
#define Max 100
	
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
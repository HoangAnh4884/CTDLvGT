/*https://duongdinh24.com/thuat-toan-heap-sort/*/

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
 
void heap(int a[Max], int n, int i)
{
	int max=i;
	int left=i*2+1;
	int right=left+1;
	if(left<n && a[left]>a[max])
	{
		max=left; 
	}
	if(right<n && a[right]>a[max])
	{
		max=right; 
	} 
	if(max!=i)
	{
		DoiSo(a[i],a[max]);
		heap(a,n,max); 
	} 
} 

void heapSortTang(int a[], int n)
{
	for(int i=n/2-1; i>=0; i--)
	{
		heap(a,n,i); 
	} 
	for(int j=n-1; j>0; j--)
	{
		DoiSo(a[0], a[j]);
		heap(a,j,0); 
	} 
} 

 int main()
 {
 	int a[Max], n;
	NhapMang(a,n);
	heapSortTang(a,n); 
	XuatMang(a,n);
	return 0;
 }
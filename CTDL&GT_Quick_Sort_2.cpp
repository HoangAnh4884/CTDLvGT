/*https://blog.luyencode.net/thuat-toan-sap-xep-quick-sort/*/

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
 
int partition (int a[Max], int low, int high)
{
    int pivot = a[high];
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && a[left] < pivot) left++;
        while(right >= left && a[right] > pivot) right--;
        if (left >= right) break;
        DoiSo(a[left], a[right]);
        left++;
        right--;
    }
    DoiSo(a[left], a[high]);
    return left;
} 

void SXNhanhTang(int a[Max], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        SXNhanhTang(a, low, pi - 1);
        SXNhanhTang(a, pi + 1, high);
    }
}

 int main()
 {
 	int a[Max], n;
	NhapMang(a,n);
	SXNhanhTang(a, 0, n-1); 
	XuatMang(a,n);
	return 0;
 }
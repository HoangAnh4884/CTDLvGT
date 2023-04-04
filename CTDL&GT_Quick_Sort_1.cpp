/*https://blog.luyencode.net/thuat-toan-sap-xep-quick-sort/*/

#include <stdio.h>
#include <conio.h> 
#define Max 100

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
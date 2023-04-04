/*https://sinhvientot.net/giai-thuat-tim-kiem-tuyen-tinh/*/

#include <stdio.h>
#include <conio.h> 
#define Max 100

int  TimKiemTuyenTinh(int a[Max], int n, int x)
{
	for (int i=0; i<n; i++)
	{
		if (a[i]==x) { int X; X=i; return X; }
	}
	return -1; 
}
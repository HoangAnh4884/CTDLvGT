/*https://v1study.com/lap-trinh-c-c-tuts-tim-kiem-nhi-phan-binary-search.html*/

#include <stdio.h>
#include <conio.h> 
#define Max 100

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